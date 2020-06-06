#ifdef cl_clang_storage_class_specifiers
#pragma OPENCL EXTENSION cl_clang_storage_class_specifiers : enable
#endif
#pragma OPENCL EXTENSION cl_khr_byte_addressable_store : enable
__kernel void dummy_kernel(__global unsigned char *dummy, int n) {

    const int thread_gid = get_global_id(0);
    
    if (thread_gid >= n)
        return;
}
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef uchar uint8_t;
typedef ushort uint16_t;
typedef uint uint32_t;
typedef ulong uint64_t;
#ifdef cl_nv_pragma_unroll
static inline void mem_fence_global() {

    asm("membar.gl;");
}
#else
static inline void mem_fence_global() {

    mem_fence(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
}
#endif
static inline void mem_fence_local() {

    mem_fence(CLK_LOCAL_MEM_FENCE);
}
static inline uint8_t add8(uint8_t x, uint8_t y) {

    return x + y;
}
static inline uint16_t add16(uint16_t x, uint16_t y) {

    return x + y;
}
static inline uint32_t add32(uint32_t x, uint32_t y) {

    return x + y;
}
static inline uint64_t add64(uint64_t x, uint64_t y) {

    return x + y;
}
static inline uint8_t sub8(uint8_t x, uint8_t y) {

    return x - y;
}
static inline uint16_t sub16(uint16_t x, uint16_t y) {

    return x - y;
}
static inline uint32_t sub32(uint32_t x, uint32_t y) {

    return x - y;
}
static inline uint64_t sub64(uint64_t x, uint64_t y) {

    return x - y;
}
static inline uint8_t mul8(uint8_t x, uint8_t y) {

    return x * y;
}
static inline uint16_t mul16(uint16_t x, uint16_t y) {

    return x * y;
}
static inline uint32_t mul32(uint32_t x, uint32_t y) {

    return x * y;
}
static inline uint64_t mul64(uint64_t x, uint64_t y) {

    return x * y;
}
static inline uint8_t udiv8(uint8_t x, uint8_t y) {

    return x / y;
}
static inline uint16_t udiv16(uint16_t x, uint16_t y) {

    return x / y;
}
static inline uint32_t udiv32(uint32_t x, uint32_t y) {

    return x / y;
}
static inline uint64_t udiv64(uint64_t x, uint64_t y) {

    return x / y;
}
static inline uint8_t umod8(uint8_t x, uint8_t y) {

    return x % y;
}
static inline uint16_t umod16(uint16_t x, uint16_t y) {

    return x % y;
}
static inline uint32_t umod32(uint32_t x, uint32_t y) {

    return x % y;
}
static inline uint64_t umod64(uint64_t x, uint64_t y) {

    return x % y;
}
static inline int8_t sdiv8(int8_t x, int8_t y) {

    int8_t q = x / y;
    int8_t r = x % y;
    
    return q - ((r != 0 && r < 0 != y < 0) ? 1 : 0);
}
static inline int16_t sdiv16(int16_t x, int16_t y) {

    int16_t q = x / y;
    int16_t r = x % y;
    
    return q - ((r != 0 && r < 0 != y < 0) ? 1 : 0);
}
static inline int32_t sdiv32(int32_t x, int32_t y) {

    int32_t q = x / y;
    int32_t r = x % y;
    
    return q - ((r != 0 && r < 0 != y < 0) ? 1 : 0);
}
static inline int64_t sdiv64(int64_t x, int64_t y) {

    int64_t q = x / y;
    int64_t r = x % y;
    
    return q - ((r != 0 && r < 0 != y < 0) ? 1 : 0);
}
static inline int8_t smod8(int8_t x, int8_t y) {

    int8_t r = x % y;
    
    return r + (r == 0 || (x > 0 && y > 0) || (x < 0 && y < 0) ? 0 : y);
}
static inline int16_t smod16(int16_t x, int16_t y) {

    int16_t r = x % y;
    
    return r + (r == 0 || (x > 0 && y > 0) || (x < 0 && y < 0) ? 0 : y);
}
static inline int32_t smod32(int32_t x, int32_t y) {

    int32_t r = x % y;
    
    return r + (r == 0 || (x > 0 && y > 0) || (x < 0 && y < 0) ? 0 : y);
}
static inline int64_t smod64(int64_t x, int64_t y) {

    int64_t r = x % y;
    
    return r + (r == 0 || (x > 0 && y > 0) || (x < 0 && y < 0) ? 0 : y);
}
static inline int8_t squot8(int8_t x, int8_t y) {

    return x / y;
}
static inline int16_t squot16(int16_t x, int16_t y) {

    return x / y;
}
static inline int32_t squot32(int32_t x, int32_t y) {

    return x / y;
}
static inline int64_t squot64(int64_t x, int64_t y) {

    return x / y;
}
static inline int8_t srem8(int8_t x, int8_t y) {

    return x % y;
}
static inline int16_t srem16(int16_t x, int16_t y) {

    return x % y;
}
static inline int32_t srem32(int32_t x, int32_t y) {

    return x % y;
}
static inline int64_t srem64(int64_t x, int64_t y) {

    return x % y;
}
static inline int8_t smin8(int8_t x, int8_t y) {

    return x < y ? x : y;
}
static inline int16_t smin16(int16_t x, int16_t y) {

    return x < y ? x : y;
}
static inline int32_t smin32(int32_t x, int32_t y) {

    return x < y ? x : y;
}
static inline int64_t smin64(int64_t x, int64_t y) {

    return x < y ? x : y;
}
static inline uint8_t umin8(uint8_t x, uint8_t y) {

    return x < y ? x : y;
}
static inline uint16_t umin16(uint16_t x, uint16_t y) {

    return x < y ? x : y;
}
static inline uint32_t umin32(uint32_t x, uint32_t y) {

    return x < y ? x : y;
}
static inline uint64_t umin64(uint64_t x, uint64_t y) {

    return x < y ? x : y;
}
static inline int8_t smax8(int8_t x, int8_t y) {

    return x < y ? y : x;
}
static inline int16_t smax16(int16_t x, int16_t y) {

    return x < y ? y : x;
}
static inline int32_t smax32(int32_t x, int32_t y) {

    return x < y ? y : x;
}
static inline int64_t smax64(int64_t x, int64_t y) {

    return x < y ? y : x;
}
static inline uint8_t umax8(uint8_t x, uint8_t y) {

    return x < y ? y : x;
}
static inline uint16_t umax16(uint16_t x, uint16_t y) {

    return x < y ? y : x;
}
static inline uint32_t umax32(uint32_t x, uint32_t y) {

    return x < y ? y : x;
}
static inline uint64_t umax64(uint64_t x, uint64_t y) {

    return x < y ? y : x;
}
static inline uint8_t shl8(uint8_t x, uint8_t y) {

    return x << y;
}
static inline uint16_t shl16(uint16_t x, uint16_t y) {

    return x << y;
}
static inline uint32_t shl32(uint32_t x, uint32_t y) {

    return x << y;
}
static inline uint64_t shl64(uint64_t x, uint64_t y) {

    return x << y;
}
static inline uint8_t lshr8(uint8_t x, uint8_t y) {

    return x >> y;
}
static inline uint16_t lshr16(uint16_t x, uint16_t y) {

    return x >> y;
}
static inline uint32_t lshr32(uint32_t x, uint32_t y) {

    return x >> y;
}
static inline uint64_t lshr64(uint64_t x, uint64_t y) {

    return x >> y;
}
static inline int8_t ashr8(int8_t x, int8_t y) {

    return x >> y;
}
static inline int16_t ashr16(int16_t x, int16_t y) {

    return x >> y;
}
static inline int32_t ashr32(int32_t x, int32_t y) {

    return x >> y;
}
static inline int64_t ashr64(int64_t x, int64_t y) {

    return x >> y;
}
static inline uint8_t and8(uint8_t x, uint8_t y) {

    return x & y;
}
static inline uint16_t and16(uint16_t x, uint16_t y) {

    return x & y;
}
static inline uint32_t and32(uint32_t x, uint32_t y) {

    return x & y;
}
static inline uint64_t and64(uint64_t x, uint64_t y) {

    return x & y;
}
static inline uint8_t or8(uint8_t x, uint8_t y) {

    return x | y;
}
static inline uint16_t or16(uint16_t x, uint16_t y) {

    return x | y;
}
static inline uint32_t or32(uint32_t x, uint32_t y) {

    return x | y;
}
static inline uint64_t or64(uint64_t x, uint64_t y) {

    return x | y;
}
static inline uint8_t xor8(uint8_t x, uint8_t y) {

    return x ^ y;
}
static inline uint16_t xor16(uint16_t x, uint16_t y) {

    return x ^ y;
}
static inline uint32_t xor32(uint32_t x, uint32_t y) {

    return x ^ y;
}
static inline uint64_t xor64(uint64_t x, uint64_t y) {

    return x ^ y;
}
static inline bool ult8(uint8_t x, uint8_t y) {

    return x < y;
}
static inline bool ult16(uint16_t x, uint16_t y) {

    return x < y;
}
static inline bool ult32(uint32_t x, uint32_t y) {

    return x < y;
}
static inline bool ult64(uint64_t x, uint64_t y) {

    return x < y;
}
static inline bool ule8(uint8_t x, uint8_t y) {

    return x <= y;
}
static inline bool ule16(uint16_t x, uint16_t y) {

    return x <= y;
}
static inline bool ule32(uint32_t x, uint32_t y) {

    return x <= y;
}
static inline bool ule64(uint64_t x, uint64_t y) {

    return x <= y;
}
static inline bool slt8(int8_t x, int8_t y) {

    return x < y;
}
static inline bool slt16(int16_t x, int16_t y) {

    return x < y;
}
static inline bool slt32(int32_t x, int32_t y) {

    return x < y;
}
static inline bool slt64(int64_t x, int64_t y) {

    return x < y;
}
static inline bool sle8(int8_t x, int8_t y) {

    return x <= y;
}
static inline bool sle16(int16_t x, int16_t y) {

    return x <= y;
}
static inline bool sle32(int32_t x, int32_t y) {

    return x <= y;
}
static inline bool sle64(int64_t x, int64_t y) {

    return x <= y;
}
static inline int8_t pow8(int8_t x, int8_t y) {

    int8_t res = 1, rem = y;
    
    while (rem != 0) {
        if (rem & 1)
            res *= x;
        rem >>= 1;
        x *= x;
    }
    return res;
}
static inline int16_t pow16(int16_t x, int16_t y) {

    int16_t res = 1, rem = y;
    
    while (rem != 0) {
        if (rem & 1)
            res *= x;
        rem >>= 1;
        x *= x;
    }
    return res;
}
static inline int32_t pow32(int32_t x, int32_t y) {

    int32_t res = 1, rem = y;
    
    while (rem != 0) {
        if (rem & 1)
            res *= x;
        rem >>= 1;
        x *= x;
    }
    return res;
}
static inline int64_t pow64(int64_t x, int64_t y) {

    int64_t res = 1, rem = y;
    
    while (rem != 0) {
        if (rem & 1)
            res *= x;
        rem >>= 1;
        x *= x;
    }
    return res;
}
static inline bool itob_i8_bool(int8_t x) {

    return x;
}
static inline bool itob_i16_bool(int16_t x) {

    return x;
}
static inline bool itob_i32_bool(int32_t x) {

    return x;
}
static inline bool itob_i64_bool(int64_t x) {

    return x;
}
static inline int8_t btoi_bool_i8(bool x) {

    return x;
}
static inline int16_t btoi_bool_i16(bool x) {

    return x;
}
static inline int32_t btoi_bool_i32(bool x) {

    return x;
}
static inline int64_t btoi_bool_i64(bool x) {

    return x;
}
#define sext_i8_i8(x) ((int8_t) (int8_t) x)
#define sext_i8_i16(x) ((int16_t) (int8_t) x)
#define sext_i8_i32(x) ((int32_t) (int8_t) x)
#define sext_i8_i64(x) ((int64_t) (int8_t) x)
#define sext_i16_i8(x) ((int8_t) (int16_t) x)
#define sext_i16_i16(x) ((int16_t) (int16_t) x)
#define sext_i16_i32(x) ((int32_t) (int16_t) x)
#define sext_i16_i64(x) ((int64_t) (int16_t) x)
#define sext_i32_i8(x) ((int8_t) (int32_t) x)
#define sext_i32_i16(x) ((int16_t) (int32_t) x)
#define sext_i32_i32(x) ((int32_t) (int32_t) x)
#define sext_i32_i64(x) ((int64_t) (int32_t) x)
#define sext_i64_i8(x) ((int8_t) (int64_t) x)
#define sext_i64_i16(x) ((int16_t) (int64_t) x)
#define sext_i64_i32(x) ((int32_t) (int64_t) x)
#define sext_i64_i64(x) ((int64_t) (int64_t) x)
#define zext_i8_i8(x) ((uint8_t) (uint8_t) x)
#define zext_i8_i16(x) ((uint16_t) (uint8_t) x)
#define zext_i8_i32(x) ((uint32_t) (uint8_t) x)
#define zext_i8_i64(x) ((uint64_t) (uint8_t) x)
#define zext_i16_i8(x) ((uint8_t) (uint16_t) x)
#define zext_i16_i16(x) ((uint16_t) (uint16_t) x)
#define zext_i16_i32(x) ((uint32_t) (uint16_t) x)
#define zext_i16_i64(x) ((uint64_t) (uint16_t) x)
#define zext_i32_i8(x) ((uint8_t) (uint32_t) x)
#define zext_i32_i16(x) ((uint16_t) (uint32_t) x)
#define zext_i32_i32(x) ((uint32_t) (uint32_t) x)
#define zext_i32_i64(x) ((uint64_t) (uint32_t) x)
#define zext_i64_i8(x) ((uint8_t) (uint64_t) x)
#define zext_i64_i16(x) ((uint16_t) (uint64_t) x)
#define zext_i64_i32(x) ((uint32_t) (uint64_t) x)
#define zext_i64_i64(x) ((uint64_t) (uint64_t) x)
#if defined(__OPENCL_VERSION__)
static int32_t futrts_popc8(int8_t x) {

    return popcount(x);
}
static int32_t futrts_popc16(int16_t x) {

    return popcount(x);
}
static int32_t futrts_popc32(int32_t x) {

    return popcount(x);
}
static int32_t futrts_popc64(int64_t x) {

    return popcount(x);
}
#elif defined(__CUDA_ARCH__)
static int32_t futrts_popc8(int8_t x) {

    return __popc(zext_i8_i32(x));
}
static int32_t futrts_popc16(int16_t x) {

    return __popc(zext_i16_i32(x));
}
static int32_t futrts_popc32(int32_t x) {

    return __popc(x);
}
static int32_t futrts_popc64(int64_t x) {

    return __popcll(x);
}
#else
static int32_t futrts_popc8(int8_t x) {

    int c = 0;
    
    for (; x; ++c)
        x &= x - 1;
    return c;
}
static int32_t futrts_popc16(int16_t x) {

    int c = 0;
    
    for (; x; ++c)
        x &= x - 1;
    return c;
}
static int32_t futrts_popc32(int32_t x) {

    int c = 0;
    
    for (; x; ++c)
        x &= x - 1;
    return c;
}
static int32_t futrts_popc64(int64_t x) {

    int c = 0;
    
    for (; x; ++c)
        x &= x - 1;
    return c;
}
#endif
#if defined(__OPENCL_VERSION__)
static uint8_t futrts_mul_hi8(uint8_t a, uint8_t b) {

    return mul_hi(a, b);
}
static uint16_t futrts_mul_hi16(uint16_t a, uint16_t b) {

    return mul_hi(a, b);
}
static uint32_t futrts_mul_hi32(uint32_t a, uint32_t b) {

    return mul_hi(a, b);
}
static uint64_t futrts_mul_hi64(uint64_t a, uint64_t b) {

    return mul_hi(a, b);
}
#elif defined(__CUDA_ARCH__)
static uint8_t futrts_mul_hi8(uint8_t a, uint8_t b) {

    uint16_t aa = a;
    uint16_t bb = b;
    
    return aa * bb >> 8;
}
static uint16_t futrts_mul_hi16(uint16_t a, uint16_t b) {

    uint32_t aa = a;
    uint32_t bb = b;
    
    return aa * bb >> 16;
}
static uint32_t futrts_mul_hi32(uint32_t a, uint32_t b) {

    return mulhi(a, b);
}
static uint64_t futrts_mul_hi64(uint64_t a, uint64_t b) {

    return mul64hi(a, b);
}
#else
static uint8_t futrts_mul_hi8(uint8_t a, uint8_t b) {

    uint16_t aa = a;
    uint16_t bb = b;
    
    return aa * bb >> 8;
}
static uint16_t futrts_mul_hi16(uint16_t a, uint16_t b) {

    uint32_t aa = a;
    uint32_t bb = b;
    
    return aa * bb >> 16;
}
static uint32_t futrts_mul_hi32(uint32_t a, uint32_t b) {

    uint64_t aa = a;
    uint64_t bb = b;
    
    return aa * bb >> 32;
}
static uint64_t futrts_mul_hi64(uint64_t a, uint64_t b) {

    __uint128_t aa = a;
    __uint128_t bb = b;
    
    return aa * bb >> 64;
}
#endif
#if defined(__OPENCL_VERSION__)
static uint8_t futrts_mad_hi8(uint8_t a, uint8_t b, uint8_t c) {

    return mad_hi(a, b, c);
}
static uint16_t futrts_mad_hi16(uint16_t a, uint16_t b, uint16_t c) {

    return mad_hi(a, b, c);
}
static uint32_t futrts_mad_hi32(uint32_t a, uint32_t b, uint32_t c) {

    return mad_hi(a, b, c);
}
static uint64_t futrts_mad_hi64(uint64_t a, uint64_t b, uint64_t c) {

    return mad_hi(a, b, c);
}
#else
static uint8_t futrts_mad_hi8(uint8_t a, uint8_t b, uint8_t c) {

    return futrts_mul_hi8(a, b) + c;
}
static uint16_t futrts_mad_hi16(uint16_t a, uint16_t b, uint16_t c) {

    return futrts_mul_hi16(a, b) + c;
}
static uint32_t futrts_mad_hi32(uint32_t a, uint32_t b, uint32_t c) {

    return futrts_mul_hi32(a, b) + c;
}
static uint64_t futrts_mad_hi64(uint64_t a, uint64_t b, uint64_t c) {

    return futrts_mul_hi64(a, b) + c;
}
#endif
#if defined(__OPENCL_VERSION__)
static int32_t futrts_clzz8(int8_t x) {

    return clz(x);
}
static int32_t futrts_clzz16(int16_t x) {

    return clz(x);
}
static int32_t futrts_clzz32(int32_t x) {

    return clz(x);
}
static int32_t futrts_clzz64(int64_t x) {

    return clz(x);
}
#elif defined(__CUDA_ARCH__)
static int32_t futrts_clzz8(int8_t x) {

    return __clz(zext_i8_i32(x)) - 24;
}
static int32_t futrts_clzz16(int16_t x) {

    return __clz(zext_i16_i32(x)) - 16;
}
static int32_t futrts_clzz32(int32_t x) {

    return __clz(x);
}
static int32_t futrts_clzz64(int64_t x) {

    return __clzll(x);
}
#else
static int32_t futrts_clzz8(int8_t x) {

    int n = 0;
    int bits = sizeof(x) * 8;
    
    for (int i = 0; i < bits; i++) {
        if (x < 0)
            break;
        n++;
        x <<= 1;
    }
    return n;
}
static int32_t futrts_clzz16(int16_t x) {

    int n = 0;
    int bits = sizeof(x) * 8;
    
    for (int i = 0; i < bits; i++) {
        if (x < 0)
            break;
        n++;
        x <<= 1;
    }
    return n;
}
static int32_t futrts_clzz32(int32_t x) {

    int n = 0;
    int bits = sizeof(x) * 8;
    
    for (int i = 0; i < bits; i++) {
        if (x < 0)
            break;
        n++;
        x <<= 1;
    }
    return n;
}
static int32_t futrts_clzz64(int64_t x) {

    int n = 0;
    int bits = sizeof(x) * 8;
    
    for (int i = 0; i < bits; i++) {
        if (x < 0)
            break;
        n++;
        x <<= 1;
    }
    return n;
}
#endif
static inline float fdiv32(float x, float y) {

    return x / y;
}
static inline float fadd32(float x, float y) {

    return x + y;
}
static inline float fsub32(float x, float y) {

    return x - y;
}
static inline float fmul32(float x, float y) {

    return x * y;
}
static inline float fmin32(float x, float y) {

    return fmin(x, y);
}
static inline float fmax32(float x, float y) {

    return fmax(x, y);
}
static inline float fpow32(float x, float y) {

    return pow(x, y);
}
static inline bool cmplt32(float x, float y) {

    return x < y;
}
static inline bool cmple32(float x, float y) {

    return x <= y;
}
static inline float sitofp_i8_f32(int8_t x) {

    return (float) x;
}
static inline float sitofp_i16_f32(int16_t x) {

    return (float) x;
}
static inline float sitofp_i32_f32(int32_t x) {

    return (float) x;
}
static inline float sitofp_i64_f32(int64_t x) {

    return (float) x;
}
static inline float uitofp_i8_f32(uint8_t x) {

    return (float) x;
}
static inline float uitofp_i16_f32(uint16_t x) {

    return (float) x;
}
static inline float uitofp_i32_f32(uint32_t x) {

    return (float) x;
}
static inline float uitofp_i64_f32(uint64_t x) {

    return (float) x;
}
static inline int8_t fptosi_f32_i8(float x) {

    return (int8_t) x;
}
static inline int16_t fptosi_f32_i16(float x) {

    return (int16_t) x;
}
static inline int32_t fptosi_f32_i32(float x) {

    return (int32_t) x;
}
static inline int64_t fptosi_f32_i64(float x) {

    return (int64_t) x;
}
static inline uint8_t fptoui_f32_i8(float x) {

    return (uint8_t) x;
}
static inline uint16_t fptoui_f32_i16(float x) {

    return (uint16_t) x;
}
static inline uint32_t fptoui_f32_i32(float x) {

    return (uint32_t) x;
}
static inline uint64_t fptoui_f32_i64(float x) {

    return (uint64_t) x;
}
static inline float futrts_log32(float x) {

    return log(x);
}
static inline float futrts_log2_32(float x) {

    return log2(x);
}
static inline float futrts_log10_32(float x) {

    return log10(x);
}
static inline float futrts_sqrt32(float x) {

    return sqrt(x);
}
static inline float futrts_exp32(float x) {

    return exp(x);
}
static inline float futrts_cos32(float x) {

    return cos(x);
}
static inline float futrts_sin32(float x) {

    return sin(x);
}
static inline float futrts_tan32(float x) {

    return tan(x);
}
static inline float futrts_acos32(float x) {

    return acos(x);
}
static inline float futrts_asin32(float x) {

    return asin(x);
}
static inline float futrts_atan32(float x) {

    return atan(x);
}
static inline float futrts_cosh32(float x) {

    return cosh(x);
}
static inline float futrts_sinh32(float x) {

    return sinh(x);
}
static inline float futrts_tanh32(float x) {

    return tanh(x);
}
static inline float futrts_acosh32(float x) {

    return acosh(x);
}
static inline float futrts_asinh32(float x) {

    return asinh(x);
}
static inline float futrts_atanh32(float x) {

    return atanh(x);
}
static inline float futrts_atan2_32(float x, float y) {

    return atan2(x, y);
}
static inline float futrts_gamma32(float x) {

    return tgamma(x);
}
static inline float futrts_lgamma32(float x) {

    return lgamma(x);
}
static inline bool futrts_isnan32(float x) {

    return isnan(x);
}
static inline bool futrts_isinf32(float x) {

    return isinf(x);
}
static inline int32_t futrts_to_bits32(float x) {

    union {
        float f;
        int32_t t;
    } p;
    
    p.f = x;
    return p.t;
}
static inline float futrts_from_bits32(int32_t x) {

    union {
        int32_t f;
        float t;
    } p;
    
    p.f = x;
    return p.t;
}
#ifdef __OPENCL_VERSION__
static inline float fmod32(float x, float y) {

    return fmod(x, y);
}
static inline float futrts_round32(float x) {

    return rint(x);
}
static inline float futrts_floor32(float x) {

    return floor(x);
}
static inline float futrts_ceil32(float x) {

    return ceil(x);
}
static inline float futrts_lerp32(float v0, float v1, float t) {

    return mix(v0, v1, t);
}
static inline float futrts_mad32(float a, float b, float c) {

    return mad(a, b, c);
}
static inline float futrts_fma32(float a, float b, float c) {

    return fma(a, b, c);
}
#else
static inline float fmod32(float x, float y) {

    return fmodf(x, y);
}
static inline float futrts_round32(float x) {

    return rintf(x);
}
static inline float futrts_floor32(float x) {

    return floorf(x);
}
static inline float futrts_ceil32(float x) {

    return ceilf(x);
}
static inline float futrts_lerp32(float v0, float v1, float t) {

    return v0 + (v1 - v0) * t;
}
static inline float futrts_mad32(float a, float b, float c) {

    return a * b + c;
}
static inline float futrts_fma32(float a, float b, float c) {

    return fmaf(a, b, c);
}
#endif
// Start of atomics.h

inline int32_t atomic_add_i32_global(volatile __global int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicAdd((int32_t*)p, x);
#else
  return atomic_add(p, x);
#endif
}

inline int32_t atomic_add_i32_local(volatile __local int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicAdd((int32_t*)p, x);
#else
  return atomic_add(p, x);
#endif
}

inline float atomic_fadd_f32_global(volatile __global float *p, float x) {
#ifdef FUTHARK_CUDA
  return atomicAdd((float*)p, x);
#else
  union { int32_t i; float f; } old;
  union { int32_t i; float f; } assumed;
  old.f = *p;
  do {
    assumed.f = old.f;
    old.f = old.f + x;
    old.i = atomic_cmpxchg((volatile __global int32_t*)p, assumed.i, old.i);
  } while (assumed.i != old.i);
  return old.f;
#endif
}

inline float atomic_fadd_f32_local(volatile __local float *p, float x) {
#ifdef FUTHARK_CUDA
  return atomicAdd((float*)p, x);
#else
  union { int32_t i; float f; } old;
  union { int32_t i; float f; } assumed;
  old.f = *p;
  do {
    assumed.f = old.f;
    old.f = old.f + x;
    old.i = atomic_cmpxchg((volatile __local int32_t*)p, assumed.i, old.i);
  } while (assumed.i != old.i);
  return old.f;
#endif
}

inline int32_t atomic_smax_i32_global(volatile __global int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicMax((int32_t*)p, x);
#else
  return atomic_max(p, x);
#endif
}

inline int32_t atomic_smax_i32_local(volatile __local int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicMax((int32_t*)p, x);
#else
  return atomic_max(p, x);
#endif
}

inline int32_t atomic_smin_i32_global(volatile __global int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicMin((int32_t*)p, x);
#else
  return atomic_min(p, x);
#endif
}

inline int32_t atomic_smin_i32_local(volatile __local int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicMin((int32_t*)p, x);
#else
  return atomic_min(p, x);
#endif
}

inline uint32_t atomic_umax_i32_global(volatile __global uint32_t *p, uint32_t x) {
#ifdef FUTHARK_CUDA
  return atomicMax((uint32_t*)p, x);
#else
  return atomic_max(p, x);
#endif
}

inline uint32_t atomic_umax_i32_local(volatile __local uint32_t *p, uint32_t x) {
#ifdef FUTHARK_CUDA
  return atomicMax((uint32_t*)p, x);
#else
  return atomic_max(p, x);
#endif
}

inline uint32_t atomic_umin_i32_global(volatile __global uint32_t *p, uint32_t x) {
#ifdef FUTHARK_CUDA
  return atomicMin((uint32_t*)p, x);
#else
  return atomic_min(p, x);
#endif
}

inline uint32_t atomic_umin_i32_local(volatile __local uint32_t *p, uint32_t x) {
#ifdef FUTHARK_CUDA
  return atomicMin((uint32_t*)p, x);
#else
  return atomic_min(p, x);
#endif
}

inline int32_t atomic_and_i32_global(volatile __global int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicAnd((int32_t*)p, x);
#else
  return atomic_and(p, x);
#endif
}

inline int32_t atomic_and_i32_local(volatile __local int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicAnd((int32_t*)p, x);
#else
  return atomic_and(p, x);
#endif
}

inline int32_t atomic_or_i32_global(volatile __global int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicOr((int32_t*)p, x);
#else
  return atomic_or(p, x);
#endif
}

inline int32_t atomic_or_i32_local(volatile __local int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicOr((int32_t*)p, x);
#else
  return atomic_or(p, x);
#endif
}

inline int32_t atomic_xor_i32_global(volatile __global int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicXor((int32_t*)p, x);
#else
  return atomic_xor(p, x);
#endif
}

inline int32_t atomic_xor_i32_local(volatile __local int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicXor((int32_t*)p, x);
#else
  return atomic_xor(p, x);
#endif
}

inline int32_t atomic_xchg_i32_global(volatile __global int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicExch((int32_t*)p, x);
#else
  return atomic_xor(p, x);
#endif
}

inline int32_t atomic_xchg_i32_local(volatile __local int32_t *p, int32_t x) {
#ifdef FUTHARK_CUDA
  return atomicExch((int32_t*)p, x);
#else
  return atomic_xor(p, x);
#endif
}

inline int32_t atomic_cmpxchg_i32_global(volatile __global int32_t *p,
                                         int32_t cmp, int32_t val) {
#ifdef FUTHARK_CUDA
  return atomicCAS((int32_t*)p, cmp, val);
#else
  return atomic_cmpxchg(p, cmp, val);
#endif
}

inline int32_t atomic_cmpxchg_i32_local(volatile __local int32_t *p,
                                         int32_t cmp, int32_t val) {
#ifdef FUTHARK_CUDA
  return atomicCAS((int32_t*)p, cmp, val);
#else
  return atomic_cmpxchg(p, cmp, val);
#endif
}

// End of atomics.h
__kernel void segmap_intragroup_116(__global int *global_failure,
                                    __local volatile int64_t *mem_548_backing_aligned_0,
                                    __local volatile int64_t *mem_545_backing_aligned_1,
                                    int32_t M,
                                    int32_t U,
                                    int32_t N,
                                    int32_t gridDim_x_108,
                                    int32_t full_tiles_141,
                                    int32_t kk_324,
                                    __global unsigned char *A_mem_529,
                                    __global unsigned char *B_mem_530,
                                    __global unsigned char *mem_628) {

  
  #define Tk (mainziTk_84)
  #define Tx (mainziTx_85)
  #define Ty (mainziTy_86)
  #define Rx (mainziRx_87)
  #define Ry (mainziRy_88)
  #define TxRx (mainziTx_85 * mainziRx_87)
  #define TyRy (mainziTy_86 * mainziRy_88)

  const int block_dim0 = 0;
  const int block_dim1 = 1;
  const int block_dim2 = 2;
  __local volatile char *restrict mem_548_backing_1 = (__local volatile char *) mem_548_backing_aligned_0;
  __local volatile char *restrict mem_545_backing_0 = (__local volatile char *) mem_545_backing_aligned_1;
  
  __global float *A    = (__global float*) A_mem_529;
  __global float *B    = (__global float*) B_mem_530;
  __global float *C    = (__global float*) mem_628;
  __local float *A_loc = (__local  float*) mem_545_backing_0;
  __local float *B_loc = (__local  float*) mem_548_backing_1;

  float css[Ry][Rx], as[Ry], bs[Rx];

  if (*global_failure >= 0)
      return;
  
  int32_t ltid = get_local_id(0);
  int32_t ltid_y = ltid / Tx;
  int32_t ltid_x = ltid % Tx;
  
  int32_t gid  = get_group_id(0);
  int32_t gid_y = gid / gridDim_x_108;
  int32_t gid_x = gid % gridDim_x_108;

  int iii = gid_y * Ty * Ry;
  int jjj = gid_x * Tx * Rx;

  for (int i = 0; i < Ry; i++)
    for (int j = 0; j < Rx; j++)
      css[i][j] = 0.0F;

  for (int KK = 0; KK < U/Tk; KK++) {
    int kk = KK * Tk;

    for (int I = 0; I < Ry; I++) {
      int i = I * Ty + ltid_y;
      for (int K = 0; K < Tk/Tx; K++) {
        int k = K * Tx + ltid_x;

        int A_row_idx = iii+i,
            A_col_idx = kk+k;

        A_loc[i*Tk + k] = (A_row_idx < M)
                        ? A[A_row_idx*U + A_col_idx] : 0.0F;
      }
    }

    for (int K = 0; K < Tk/Ty; K++) {
      int k = K * Ty + ltid_y;
      for (int J = 0; J < Rx; J++) {
        int j = J * Tx + ltid_x;

        int B_row_idx = kk+k,
            B_col_idx = jjj+j;

        B_loc[k*TxRx + j] = (B_col_idx < N)
                          ? B[B_row_idx*N + B_col_idx] : 0.0F;
      }
    }

    barrier(CLK_LOCAL_MEM_FENCE);

    for (int k = 0; k < Tk; k++) {

      for (int i = 0; i < Ry; i++) {
        as[i] = A_loc[(ltid_y*Ry + i)*Tk + k];
      }

      for (int j = 0; j < Rx; j++) {
        bs[j] = B_loc[k * TxRx + ltid_x*Rx + j];
      }

      for (int i = 0; i < Ry; i++) {
        for (int j = 0; j < Rx; j++) {
          css[i][j] += as[i] * bs[j];
        }
      }
    }
    barrier(CLK_LOCAL_MEM_FENCE);
  }

  int kk = (U/Tk)*Tk;

  for (int I = 0; I < Ry; I++) {
    int i = I * Ty + ltid_y;
    for (int K = 0; K < Tk/Tx; K++) {
      int k = K * Tx + ltid_x;

      int A_row_idx = iii+i,
          A_col_idx = kk+k;
      A_loc[i*Tk + k] = A_row_idx < M && A_col_idx < U
                ? A[A_row_idx * U + A_col_idx] : 0.0F;
    }
  }

  for (int K = 0; K < Tk/Ty; K++) {
    int k = K * Ty + ltid_y;
    for (int J = 0; J < Rx; J++) {
      int j = J * Tx + ltid_x;

      int B_row_idx = kk+k,
          B_col_idx = jjj+j;
      B_loc[k*TxRx + j] = B_col_idx < N && B_row_idx < U
                        ? B[B_row_idx*N + B_col_idx] : 0.0F;
    }
  }

  barrier(CLK_LOCAL_MEM_FENCE);

  for (int k = 0; k < Tk; k++) {
    if (kk + k >= U) break;

    for (int i = 0; i < Ry; i++) {
      as[i] = A_loc[(ltid_y*Ry + i)*Tk + k];
    }
    for (int j = 0; j < Rx; j++) {
      bs[j] = B_loc[k*TxRx + ltid_x*Rx + j];
    }

    for (int i = 0; i < Ry; i++) {
      float a = as[i];
      for (int j = 0; j < Rx; j++) {
        css[i][j] += as[i] * bs[j];
      }
    }
  }

  int indy = iii + ltid_y * Ry;
  int indx = jjj + ltid_x * Rx;

  for (int i = 0; i < Ry; i++) {
    for (int j = 0; j < Rx; j++) {
      int C_row_idx = indy + i, C_col_idx = indx + j;
      if (C_row_idx < M && C_col_idx < N)
        C[C_row_idx * N + C_col_idx] = css[i][j];
    }
  }
    
  error_9:
    return;
    #undef Tk
    #undef Tx
    #undef Ty
    #undef Rx
    #undef Ry
    #undef tk_div_tx
    #undef tk_div_ty
    #undef TxRx
    #undef TyRy
    #undef a_loc_szz_103
    #undef b_loc_szz_105
}
