run: validate_all

f32_mm=f32_mm/f32_mm
mix_types=mix_types/mix_types
mat_div=mat_div/mat_div
mm_var=mm_var/mm_var
gemm=extra/gemm
batch_mm=extra/batch_mm

f32_mm_src=$(f32_mm).fut
mix_types_src=$(mix_types).fut
mat_div_src=$(mat_div).fut
mm_var_src=$(mm_var).fut
gemm_src=$(gemm).fut
batch_mm_src=$(batch_mm).fut

### compilation
$(f32_mm): $(f32_mm_src)
	futhark opencl -o $@ $<
$(mix_types): $(mix_types_src)
	futhark opencl -o $@ $<
$(mat_div): $(mat_div_src)
	futhark opencl -o $@ $<
$(mm_var): $(mm_var_src)
	futhark opencl -o $@ $<
$(gemm): $(gemm_src)
	futhark opencl -o $@ $<
$(batch_mm): $(batch_mm_src)
	futhark opencl -o $@ $<

### opencl
f32_mm_ocl=$(f32_mm)_ocl.cpp
mix_types_ocl=$(mix_types)_ocl.cpp
mat_div_ocl=$(mat_div)_ocl.cpp
mm_var_ocl=$(mm_var)_ocl.cpp

dump-f32_mm-ocl: $(f32_mm)
	./$< --dump-opencl $(f32_mm_ocl)

dump-mix_types-ocl: $(mix_types)
	./$< --dump-opencl $(mix_types_ocl)

dump-mat_div-ocl: $(mat_div)
	./$< --dump-opencl $(mat_div_ocl)

dump-mm_var-ocl: $(mm_var)
	./$< --dump-opencl $(mm_var_ocl)

### validation
validate_f32_mm: $(f32_mm_src) $(f32_mm_ocl)
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(f32_mm_ocl) --tuning=tuning $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(f32_mm_ocl) --tuning=none_divide_tk $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(f32_mm_ocl) --tuning=ty_not_divide_tk $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(f32_mm_ocl) --tuning=tx_not_divide_tk $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(f32_mm_ocl) --tuning=both_greater $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(f32_mm_ocl) --tuning=ty_greater $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(f32_mm_ocl) --tuning=tx_greater $<

validate_mix_types: $(mix_types_src) $(mix_types_ocl)
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mix_types_ocl) --tuning=tuning $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mix_types_ocl) --tuning=none_divide_tk $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mix_types_ocl) --tuning=ty_not_divide_tk $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mix_types_ocl) --tuning=tx_not_divide_tk $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mix_types_ocl) --tuning=both_greater $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mix_types_ocl) --tuning=ty_greater $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mix_types_ocl) --tuning=tx_greater $<

validate_mat_div: $(mat_div_src) $(mat_div_ocl)
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mat_div_ocl) --tuning=tuning $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mat_div_ocl) --tuning=none_divide_tk $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mat_div_ocl) --tuning=ty_not_divide_tk $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mat_div_ocl) --tuning=tx_not_divide_tk $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mat_div_ocl) --tuning=both_greater $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mat_div_ocl) --tuning=ty_greater $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mat_div_ocl) --tuning=tx_greater $<

validate_mm_var: $(mm_var_src) $(mm_var_ocl)
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mm_var_ocl) --tuning=tuning $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mm_var_ocl) --tuning=none_divide_tk $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mm_var_ocl) --tuning=ty_not_divide_tk $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mm_var_ocl) --tuning=tx_not_divide_tk $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mm_var_ocl) --tuning=both_greater $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mm_var_ocl) --tuning=ty_greater $<
	futhark bench -r 1 --backend=opencl -p --load-opencl=$(mm_var_ocl) --tuning=tx_greater $<

validate_gemm: $(gemm_src)
	futhark bench --backend=opencl $<
validate_batch_mm: $(batch_mm_src)
	futhark bench --backend=opencl $<

validate_all: validate_f32_mm validate_mix_types validate_mat_div validate_mm_var validate_gemm validate_batch_mm

### cleanup
progs=$(f32_mm) $(mix_types) $(mat_div) $(mm_var) $(gemm) $(batch_mm)

clean:
	rm -rf *.c */*.c */*.expected */*.actual $(progs) $(tmp_ocl)

clean_all: clean
	rm -rf */data
