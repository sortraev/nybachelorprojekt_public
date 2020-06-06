# to benchmark the block tiled kernel, replace below with path to
# a Futhark build with blkreg tiling disabled (or simply rebuild)
fut_block_tiled=futhark
# fut_block_tiled=~/.local/bin/futhark_block-tiled

prog=mm
src=mm.fut
naive_src=mm.fut

run: bench

### opencl/cuda dumping
tmp_ocl=tmp_ocl.cpp

dump-ocl: $(prog)
	./$(prog) --dump-opencl $(tmp_ocl)

### benchmarking
runs=1000

mm_ocl=mm_ocl.cpp
modified_kernel_ocl=modified_kernel_ocl.cpp

GPU_04=a00333.science.domain
ifeq ($(HOSTNAME),$(GPU_04))
  tuning=optimal_tuning_gpu04
else
  tuning=optimal_tuning_gpu02
endif

# block and register tiled kernel using an epilogue
bench: $(src) $(mm_ocl)
	futhark bench --backend=opencl --tuning=$(tuning)\
	  -p --load-opencl=$(mm_ocl) -r $(runs) $(src)

# hand-written kernel using optimizations only safe for mm.
bench-mod: $(src) $(modified_kernel_ocl)
	futhark bench --backend=opencl --tuning=$(tuning)\
	  -p --load-opencl=$(modified_kernel_ocl) -r $(runs) $(src)

# existing block tiled kernel.
bench-bt: $(src)
	$(fut_block_tiled) bench --backend=opencl -r $(runs) $(src)


### clean-up
clean:
	rm -rf *.c *.expected *.actual *.main.0.* $(prog) $(tmp_ocl)

clean_all: clean
	rm -rf data/*
