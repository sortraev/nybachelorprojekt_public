#ifdef cl_clang_storage_class_specifiers
#pragma OPENCL EXTENSION cl_clang_storage_class_specifiers : enable
#endif
#pragma OPENCL EXTENSION cl_khr_byte_addressable_store : enable
#pragma OPENCL EXTENSION cl_khr_fp64 : enable
__kernel void dummy_kernel(__global unsigned char *dummy, int n)
{
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
static inline void mem_fence_global()
{
    asm("membar.gl;");
}
#else
static inline void mem_fence_global()
{
    mem_fence(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
}
#endif
static inline void mem_fence_local()
{
    mem_fence(CLK_LOCAL_MEM_FENCE);
}
static inline uint8_t add8(uint8_t x, uint8_t y)
{
    return x + y;
}
static inline uint16_t add16(uint16_t x, uint16_t y)
{
    return x + y;
}
static inline uint32_t add32(uint32_t x, uint32_t y)
{
    return x + y;
}
static inline uint64_t add64(uint64_t x, uint64_t y)
{
    return x + y;
}
static inline uint8_t sub8(uint8_t x, uint8_t y)
{
    return x - y;
}
static inline uint16_t sub16(uint16_t x, uint16_t y)
{
    return x - y;
}
static inline uint32_t sub32(uint32_t x, uint32_t y)
{
    return x - y;
}
static inline uint64_t sub64(uint64_t x, uint64_t y)
{
    return x - y;
}
static inline uint8_t mul8(uint8_t x, uint8_t y)
{
    return x * y;
}
static inline uint16_t mul16(uint16_t x, uint16_t y)
{
    return x * y;
}
static inline uint32_t mul32(uint32_t x, uint32_t y)
{
    return x * y;
}
static inline uint64_t mul64(uint64_t x, uint64_t y)
{
    return x * y;
}
static inline uint8_t udiv8(uint8_t x, uint8_t y)
{
    return x / y;
}
static inline uint16_t udiv16(uint16_t x, uint16_t y)
{
    return x / y;
}
static inline uint32_t udiv32(uint32_t x, uint32_t y)
{
    return x / y;
}
static inline uint64_t udiv64(uint64_t x, uint64_t y)
{
    return x / y;
}
static inline uint8_t umod8(uint8_t x, uint8_t y)
{
    return x % y;
}
static inline uint16_t umod16(uint16_t x, uint16_t y)
{
    return x % y;
}
static inline uint32_t umod32(uint32_t x, uint32_t y)
{
    return x % y;
}
static inline uint64_t umod64(uint64_t x, uint64_t y)
{
    return x % y;
}
static inline int8_t sdiv8(int8_t x, int8_t y)
{
    int8_t q = x / y;
    int8_t r = x % y;
    
    return q - ((r != 0 && r < 0 != y < 0) ? 1 : 0);
}
static inline int16_t sdiv16(int16_t x, int16_t y)
{
    int16_t q = x / y;
    int16_t r = x % y;
    
    return q - ((r != 0 && r < 0 != y < 0) ? 1 : 0);
}
static inline int32_t sdiv32(int32_t x, int32_t y)
{
    int32_t q = x / y;
    int32_t r = x % y;
    
    return q - ((r != 0 && r < 0 != y < 0) ? 1 : 0);
}
static inline int64_t sdiv64(int64_t x, int64_t y)
{
    int64_t q = x / y;
    int64_t r = x % y;
    
    return q - ((r != 0 && r < 0 != y < 0) ? 1 : 0);
}
static inline int8_t smod8(int8_t x, int8_t y)
{
    int8_t r = x % y;
    
    return r + (r == 0 || (x > 0 && y > 0) || (x < 0 && y < 0) ? 0 : y);
}
static inline int16_t smod16(int16_t x, int16_t y)
{
    int16_t r = x % y;
    
    return r + (r == 0 || (x > 0 && y > 0) || (x < 0 && y < 0) ? 0 : y);
}
static inline int32_t smod32(int32_t x, int32_t y)
{
    int32_t r = x % y;
    
    return r + (r == 0 || (x > 0 && y > 0) || (x < 0 && y < 0) ? 0 : y);
}
static inline int64_t smod64(int64_t x, int64_t y)
{
    int64_t r = x % y;
    
    return r + (r == 0 || (x > 0 && y > 0) || (x < 0 && y < 0) ? 0 : y);
}
static inline int8_t squot8(int8_t x, int8_t y)
{
    return x / y;
}
static inline int16_t squot16(int16_t x, int16_t y)
{
    return x / y;
}
static inline int32_t squot32(int32_t x, int32_t y)
{
    return x / y;
}
static inline int64_t squot64(int64_t x, int64_t y)
{
    return x / y;
}
static inline int8_t srem8(int8_t x, int8_t y)
{
    return x % y;
}
static inline int16_t srem16(int16_t x, int16_t y)
{
    return x % y;
}
static inline int32_t srem32(int32_t x, int32_t y)
{
    return x % y;
}
static inline int64_t srem64(int64_t x, int64_t y)
{
    return x % y;
}
static inline int8_t smin8(int8_t x, int8_t y)
{
    return x < y ? x : y;
}
static inline int16_t smin16(int16_t x, int16_t y)
{
    return x < y ? x : y;
}
static inline int32_t smin32(int32_t x, int32_t y)
{
    return x < y ? x : y;
}
static inline int64_t smin64(int64_t x, int64_t y)
{
    return x < y ? x : y;
}
static inline uint8_t umin8(uint8_t x, uint8_t y)
{
    return x < y ? x : y;
}
static inline uint16_t umin16(uint16_t x, uint16_t y)
{
    return x < y ? x : y;
}
static inline uint32_t umin32(uint32_t x, uint32_t y)
{
    return x < y ? x : y;
}
static inline uint64_t umin64(uint64_t x, uint64_t y)
{
    return x < y ? x : y;
}
static inline int8_t smax8(int8_t x, int8_t y)
{
    return x < y ? y : x;
}
static inline int16_t smax16(int16_t x, int16_t y)
{
    return x < y ? y : x;
}
static inline int32_t smax32(int32_t x, int32_t y)
{
    return x < y ? y : x;
}
static inline int64_t smax64(int64_t x, int64_t y)
{
    return x < y ? y : x;
}
static inline uint8_t umax8(uint8_t x, uint8_t y)
{
    return x < y ? y : x;
}
static inline uint16_t umax16(uint16_t x, uint16_t y)
{
    return x < y ? y : x;
}
static inline uint32_t umax32(uint32_t x, uint32_t y)
{
    return x < y ? y : x;
}
static inline uint64_t umax64(uint64_t x, uint64_t y)
{
    return x < y ? y : x;
}
static inline uint8_t shl8(uint8_t x, uint8_t y)
{
    return x << y;
}
static inline uint16_t shl16(uint16_t x, uint16_t y)
{
    return x << y;
}
static inline uint32_t shl32(uint32_t x, uint32_t y)
{
    return x << y;
}
static inline uint64_t shl64(uint64_t x, uint64_t y)
{
    return x << y;
}
static inline uint8_t lshr8(uint8_t x, uint8_t y)
{
    return x >> y;
}
static inline uint16_t lshr16(uint16_t x, uint16_t y)
{
    return x >> y;
}
static inline uint32_t lshr32(uint32_t x, uint32_t y)
{
    return x >> y;
}
static inline uint64_t lshr64(uint64_t x, uint64_t y)
{
    return x >> y;
}
static inline int8_t ashr8(int8_t x, int8_t y)
{
    return x >> y;
}
static inline int16_t ashr16(int16_t x, int16_t y)
{
    return x >> y;
}
static inline int32_t ashr32(int32_t x, int32_t y)
{
    return x >> y;
}
static inline int64_t ashr64(int64_t x, int64_t y)
{
    return x >> y;
}
static inline uint8_t and8(uint8_t x, uint8_t y)
{
    return x & y;
}
static inline uint16_t and16(uint16_t x, uint16_t y)
{
    return x & y;
}
static inline uint32_t and32(uint32_t x, uint32_t y)
{
    return x & y;
}
static inline uint64_t and64(uint64_t x, uint64_t y)
{
    return x & y;
}
static inline uint8_t or8(uint8_t x, uint8_t y)
{
    return x | y;
}
static inline uint16_t or16(uint16_t x, uint16_t y)
{
    return x | y;
}
static inline uint32_t or32(uint32_t x, uint32_t y)
{
    return x | y;
}
static inline uint64_t or64(uint64_t x, uint64_t y)
{
    return x | y;
}
static inline uint8_t xor8(uint8_t x, uint8_t y)
{
    return x ^ y;
}
static inline uint16_t xor16(uint16_t x, uint16_t y)
{
    return x ^ y;
}
static inline uint32_t xor32(uint32_t x, uint32_t y)
{
    return x ^ y;
}
static inline uint64_t xor64(uint64_t x, uint64_t y)
{
    return x ^ y;
}
static inline bool ult8(uint8_t x, uint8_t y)
{
    return x < y;
}
static inline bool ult16(uint16_t x, uint16_t y)
{
    return x < y;
}
static inline bool ult32(uint32_t x, uint32_t y)
{
    return x < y;
}
static inline bool ult64(uint64_t x, uint64_t y)
{
    return x < y;
}
static inline bool ule8(uint8_t x, uint8_t y)
{
    return x <= y;
}
static inline bool ule16(uint16_t x, uint16_t y)
{
    return x <= y;
}
static inline bool ule32(uint32_t x, uint32_t y)
{
    return x <= y;
}
static inline bool ule64(uint64_t x, uint64_t y)
{
    return x <= y;
}
static inline bool slt8(int8_t x, int8_t y)
{
    return x < y;
}
static inline bool slt16(int16_t x, int16_t y)
{
    return x < y;
}
static inline bool slt32(int32_t x, int32_t y)
{
    return x < y;
}
static inline bool slt64(int64_t x, int64_t y)
{
    return x < y;
}
static inline bool sle8(int8_t x, int8_t y)
{
    return x <= y;
}
static inline bool sle16(int16_t x, int16_t y)
{
    return x <= y;
}
static inline bool sle32(int32_t x, int32_t y)
{
    return x <= y;
}
static inline bool sle64(int64_t x, int64_t y)
{
    return x <= y;
}
static inline int8_t pow8(int8_t x, int8_t y)
{
    int8_t res = 1, rem = y;
    
    while (rem != 0) {
        if (rem & 1)
            res *= x;
        rem >>= 1;
        x *= x;
    }
    return res;
}
static inline int16_t pow16(int16_t x, int16_t y)
{
    int16_t res = 1, rem = y;
    
    while (rem != 0) {
        if (rem & 1)
            res *= x;
        rem >>= 1;
        x *= x;
    }
    return res;
}
static inline int32_t pow32(int32_t x, int32_t y)
{
    int32_t res = 1, rem = y;
    
    while (rem != 0) {
        if (rem & 1)
            res *= x;
        rem >>= 1;
        x *= x;
    }
    return res;
}
static inline int64_t pow64(int64_t x, int64_t y)
{
    int64_t res = 1, rem = y;
    
    while (rem != 0) {
        if (rem & 1)
            res *= x;
        rem >>= 1;
        x *= x;
    }
    return res;
}
static inline bool itob_i8_bool(int8_t x)
{
    return x;
}
static inline bool itob_i16_bool(int16_t x)
{
    return x;
}
static inline bool itob_i32_bool(int32_t x)
{
    return x;
}
static inline bool itob_i64_bool(int64_t x)
{
    return x;
}
static inline int8_t btoi_bool_i8(bool x)
{
    return x;
}
static inline int16_t btoi_bool_i16(bool x)
{
    return x;
}
static inline int32_t btoi_bool_i32(bool x)
{
    return x;
}
static inline int64_t btoi_bool_i64(bool x)
{
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
static int32_t futrts_popc8(int8_t x)
{
    return popcount(x);
}
static int32_t futrts_popc16(int16_t x)
{
    return popcount(x);
}
static int32_t futrts_popc32(int32_t x)
{
    return popcount(x);
}
static int32_t futrts_popc64(int64_t x)
{
    return popcount(x);
}
#elif defined(__CUDA_ARCH__)
static int32_t futrts_popc8(int8_t x)
{
    return __popc(zext_i8_i32(x));
}
static int32_t futrts_popc16(int16_t x)
{
    return __popc(zext_i16_i32(x));
}
static int32_t futrts_popc32(int32_t x)
{
    return __popc(x);
}
static int32_t futrts_popc64(int64_t x)
{
    return __popcll(x);
}
#else
static int32_t futrts_popc8(int8_t x)
{
    int c = 0;
    
    for (; x; ++c)
        x &= x - 1;
    return c;
}
static int32_t futrts_popc16(int16_t x)
{
    int c = 0;
    
    for (; x; ++c)
        x &= x - 1;
    return c;
}
static int32_t futrts_popc32(int32_t x)
{
    int c = 0;
    
    for (; x; ++c)
        x &= x - 1;
    return c;
}
static int32_t futrts_popc64(int64_t x)
{
    int c = 0;
    
    for (; x; ++c)
        x &= x - 1;
    return c;
}
#endif
#if defined(__OPENCL_VERSION__)
static uint8_t futrts_mul_hi8(uint8_t a, uint8_t b)
{
    return mul_hi(a, b);
}
static uint16_t futrts_mul_hi16(uint16_t a, uint16_t b)
{
    return mul_hi(a, b);
}
static uint32_t futrts_mul_hi32(uint32_t a, uint32_t b)
{
    return mul_hi(a, b);
}
static uint64_t futrts_mul_hi64(uint64_t a, uint64_t b)
{
    return mul_hi(a, b);
}
#elif defined(__CUDA_ARCH__)
static uint8_t futrts_mul_hi8(uint8_t a, uint8_t b)
{
    uint16_t aa = a;
    uint16_t bb = b;
    
    return aa * bb >> 8;
}
static uint16_t futrts_mul_hi16(uint16_t a, uint16_t b)
{
    uint32_t aa = a;
    uint32_t bb = b;
    
    return aa * bb >> 16;
}
static uint32_t futrts_mul_hi32(uint32_t a, uint32_t b)
{
    return mulhi(a, b);
}
static uint64_t futrts_mul_hi64(uint64_t a, uint64_t b)
{
    return mul64hi(a, b);
}
#else
static uint8_t futrts_mul_hi8(uint8_t a, uint8_t b)
{
    uint16_t aa = a;
    uint16_t bb = b;
    
    return aa * bb >> 8;
}
static uint16_t futrts_mul_hi16(uint16_t a, uint16_t b)
{
    uint32_t aa = a;
    uint32_t bb = b;
    
    return aa * bb >> 16;
}
static uint32_t futrts_mul_hi32(uint32_t a, uint32_t b)
{
    uint64_t aa = a;
    uint64_t bb = b;
    
    return aa * bb >> 32;
}
static uint64_t futrts_mul_hi64(uint64_t a, uint64_t b)
{
    __uint128_t aa = a;
    __uint128_t bb = b;
    
    return aa * bb >> 64;
}
#endif
#if defined(__OPENCL_VERSION__)
static uint8_t futrts_mad_hi8(uint8_t a, uint8_t b, uint8_t c)
{
    return mad_hi(a, b, c);
}
static uint16_t futrts_mad_hi16(uint16_t a, uint16_t b, uint16_t c)
{
    return mad_hi(a, b, c);
}
static uint32_t futrts_mad_hi32(uint32_t a, uint32_t b, uint32_t c)
{
    return mad_hi(a, b, c);
}
static uint64_t futrts_mad_hi64(uint64_t a, uint64_t b, uint64_t c)
{
    return mad_hi(a, b, c);
}
#else
static uint8_t futrts_mad_hi8(uint8_t a, uint8_t b, uint8_t c)
{
    return futrts_mul_hi8(a, b) + c;
}
static uint16_t futrts_mad_hi16(uint16_t a, uint16_t b, uint16_t c)
{
    return futrts_mul_hi16(a, b) + c;
}
static uint32_t futrts_mad_hi32(uint32_t a, uint32_t b, uint32_t c)
{
    return futrts_mul_hi32(a, b) + c;
}
static uint64_t futrts_mad_hi64(uint64_t a, uint64_t b, uint64_t c)
{
    return futrts_mul_hi64(a, b) + c;
}
#endif
#if defined(__OPENCL_VERSION__)
static int32_t futrts_clzz8(int8_t x)
{
    return clz(x);
}
static int32_t futrts_clzz16(int16_t x)
{
    return clz(x);
}
static int32_t futrts_clzz32(int32_t x)
{
    return clz(x);
}
static int32_t futrts_clzz64(int64_t x)
{
    return clz(x);
}
#elif defined(__CUDA_ARCH__)
static int32_t futrts_clzz8(int8_t x)
{
    return __clz(zext_i8_i32(x)) - 24;
}
static int32_t futrts_clzz16(int16_t x)
{
    return __clz(zext_i16_i32(x)) - 16;
}
static int32_t futrts_clzz32(int32_t x)
{
    return __clz(x);
}
static int32_t futrts_clzz64(int64_t x)
{
    return __clzll(x);
}
#else
static int32_t futrts_clzz8(int8_t x)
{
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
static int32_t futrts_clzz16(int16_t x)
{
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
static int32_t futrts_clzz32(int32_t x)
{
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
static int32_t futrts_clzz64(int64_t x)
{
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
static inline float fdiv32(float x, float y)
{
    return x / y;
}
static inline float fadd32(float x, float y)
{
    return x + y;
}
static inline float fsub32(float x, float y)
{
    return x - y;
}
static inline float fmul32(float x, float y)
{
    return x * y;
}
static inline float fmin32(float x, float y)
{
    return fmin(x, y);
}
static inline float fmax32(float x, float y)
{
    return fmax(x, y);
}
static inline float fpow32(float x, float y)
{
    return pow(x, y);
}
static inline bool cmplt32(float x, float y)
{
    return x < y;
}
static inline bool cmple32(float x, float y)
{
    return x <= y;
}
static inline float sitofp_i8_f32(int8_t x)
{
    return (float) x;
}
static inline float sitofp_i16_f32(int16_t x)
{
    return (float) x;
}
static inline float sitofp_i32_f32(int32_t x)
{
    return (float) x;
}
static inline float sitofp_i64_f32(int64_t x)
{
    return (float) x;
}
static inline float uitofp_i8_f32(uint8_t x)
{
    return (float) x;
}
static inline float uitofp_i16_f32(uint16_t x)
{
    return (float) x;
}
static inline float uitofp_i32_f32(uint32_t x)
{
    return (float) x;
}
static inline float uitofp_i64_f32(uint64_t x)
{
    return (float) x;
}
static inline int8_t fptosi_f32_i8(float x)
{
    return (int8_t) x;
}
static inline int16_t fptosi_f32_i16(float x)
{
    return (int16_t) x;
}
static inline int32_t fptosi_f32_i32(float x)
{
    return (int32_t) x;
}
static inline int64_t fptosi_f32_i64(float x)
{
    return (int64_t) x;
}
static inline uint8_t fptoui_f32_i8(float x)
{
    return (uint8_t) x;
}
static inline uint16_t fptoui_f32_i16(float x)
{
    return (uint16_t) x;
}
static inline uint32_t fptoui_f32_i32(float x)
{
    return (uint32_t) x;
}
static inline uint64_t fptoui_f32_i64(float x)
{
    return (uint64_t) x;
}
static inline float futrts_log32(float x)
{
    return log(x);
}
static inline float futrts_log2_32(float x)
{
    return log2(x);
}
static inline float futrts_log10_32(float x)
{
    return log10(x);
}
static inline float futrts_sqrt32(float x)
{
    return sqrt(x);
}
static inline float futrts_exp32(float x)
{
    return exp(x);
}
static inline float futrts_cos32(float x)
{
    return cos(x);
}
static inline float futrts_sin32(float x)
{
    return sin(x);
}
static inline float futrts_tan32(float x)
{
    return tan(x);
}
static inline float futrts_acos32(float x)
{
    return acos(x);
}
static inline float futrts_asin32(float x)
{
    return asin(x);
}
static inline float futrts_atan32(float x)
{
    return atan(x);
}
static inline float futrts_cosh32(float x)
{
    return cosh(x);
}
static inline float futrts_sinh32(float x)
{
    return sinh(x);
}
static inline float futrts_tanh32(float x)
{
    return tanh(x);
}
static inline float futrts_acosh32(float x)
{
    return acosh(x);
}
static inline float futrts_asinh32(float x)
{
    return asinh(x);
}
static inline float futrts_atanh32(float x)
{
    return atanh(x);
}
static inline float futrts_atan2_32(float x, float y)
{
    return atan2(x, y);
}
static inline float futrts_gamma32(float x)
{
    return tgamma(x);
}
static inline float futrts_lgamma32(float x)
{
    return lgamma(x);
}
static inline bool futrts_isnan32(float x)
{
    return isnan(x);
}
static inline bool futrts_isinf32(float x)
{
    return isinf(x);
}
static inline int32_t futrts_to_bits32(float x)
{
    union {
        float f;
        int32_t t;
    } p;
    
    p.f = x;
    return p.t;
}
static inline float futrts_from_bits32(int32_t x)
{
    union {
        int32_t f;
        float t;
    } p;
    
    p.f = x;
    return p.t;
}
#ifdef __OPENCL_VERSION__
static inline float fmod32(float x, float y)
{
    return fmod(x, y);
}
static inline float futrts_round32(float x)
{
    return rint(x);
}
static inline float futrts_floor32(float x)
{
    return floor(x);
}
static inline float futrts_ceil32(float x)
{
    return ceil(x);
}
static inline float futrts_lerp32(float v0, float v1, float t)
{
    return mix(v0, v1, t);
}
static inline float futrts_mad32(float a, float b, float c)
{
    return mad(a, b, c);
}
static inline float futrts_fma32(float a, float b, float c)
{
    return fma(a, b, c);
}
#else
static inline float fmod32(float x, float y)
{
    return fmodf(x, y);
}
static inline float futrts_round32(float x)
{
    return rintf(x);
}
static inline float futrts_floor32(float x)
{
    return floorf(x);
}
static inline float futrts_ceil32(float x)
{
    return ceilf(x);
}
static inline float futrts_lerp32(float v0, float v1, float t)
{
    return v0 + (v1 - v0) * t;
}
static inline float futrts_mad32(float a, float b, float c)
{
    return a * b + c;
}
static inline float futrts_fma32(float a, float b, float c)
{
    return fmaf(a, b, c);
}
#endif
static inline double fdiv64(double x, double y)
{
    return x / y;
}
static inline double fadd64(double x, double y)
{
    return x + y;
}
static inline double fsub64(double x, double y)
{
    return x - y;
}
static inline double fmul64(double x, double y)
{
    return x * y;
}
static inline double fmin64(double x, double y)
{
    return fmin(x, y);
}
static inline double fmax64(double x, double y)
{
    return fmax(x, y);
}
static inline double fpow64(double x, double y)
{
    return pow(x, y);
}
static inline bool cmplt64(double x, double y)
{
    return x < y;
}
static inline bool cmple64(double x, double y)
{
    return x <= y;
}
static inline double sitofp_i8_f64(int8_t x)
{
    return (double) x;
}
static inline double sitofp_i16_f64(int16_t x)
{
    return (double) x;
}
static inline double sitofp_i32_f64(int32_t x)
{
    return (double) x;
}
static inline double sitofp_i64_f64(int64_t x)
{
    return (double) x;
}
static inline double uitofp_i8_f64(uint8_t x)
{
    return (double) x;
}
static inline double uitofp_i16_f64(uint16_t x)
{
    return (double) x;
}
static inline double uitofp_i32_f64(uint32_t x)
{
    return (double) x;
}
static inline double uitofp_i64_f64(uint64_t x)
{
    return (double) x;
}
static inline int8_t fptosi_f64_i8(double x)
{
    return (int8_t) x;
}
static inline int16_t fptosi_f64_i16(double x)
{
    return (int16_t) x;
}
static inline int32_t fptosi_f64_i32(double x)
{
    return (int32_t) x;
}
static inline int64_t fptosi_f64_i64(double x)
{
    return (int64_t) x;
}
static inline uint8_t fptoui_f64_i8(double x)
{
    return (uint8_t) x;
}
static inline uint16_t fptoui_f64_i16(double x)
{
    return (uint16_t) x;
}
static inline uint32_t fptoui_f64_i32(double x)
{
    return (uint32_t) x;
}
static inline uint64_t fptoui_f64_i64(double x)
{
    return (uint64_t) x;
}
static inline double futrts_log64(double x)
{
    return log(x);
}
static inline double futrts_log2_64(double x)
{
    return log2(x);
}
static inline double futrts_log10_64(double x)
{
    return log10(x);
}
static inline double futrts_sqrt64(double x)
{
    return sqrt(x);
}
static inline double futrts_exp64(double x)
{
    return exp(x);
}
static inline double futrts_cos64(double x)
{
    return cos(x);
}
static inline double futrts_sin64(double x)
{
    return sin(x);
}
static inline double futrts_tan64(double x)
{
    return tan(x);
}
static inline double futrts_acos64(double x)
{
    return acos(x);
}
static inline double futrts_asin64(double x)
{
    return asin(x);
}
static inline double futrts_atan64(double x)
{
    return atan(x);
}
static inline double futrts_cosh64(double x)
{
    return cosh(x);
}
static inline double futrts_sinh64(double x)
{
    return sinh(x);
}
static inline double futrts_tanh64(double x)
{
    return tanh(x);
}
static inline double futrts_acosh64(double x)
{
    return acosh(x);
}
static inline double futrts_asinh64(double x)
{
    return asinh(x);
}
static inline double futrts_atanh64(double x)
{
    return atanh(x);
}
static inline double futrts_atan2_64(double x, double y)
{
    return atan2(x, y);
}
static inline double futrts_gamma64(double x)
{
    return tgamma(x);
}
static inline double futrts_lgamma64(double x)
{
    return lgamma(x);
}
static inline double futrts_fma64(double a, double b, double c)
{
    return fma(a, b, c);
}
static inline double futrts_round64(double x)
{
    return rint(x);
}
static inline double futrts_ceil64(double x)
{
    return ceil(x);
}
static inline double futrts_floor64(double x)
{
    return floor(x);
}
static inline bool futrts_isnan64(double x)
{
    return isnan(x);
}
static inline bool futrts_isinf64(double x)
{
    return isinf(x);
}
static inline int64_t futrts_to_bits64(double x)
{
    union {
        double f;
        int64_t t;
    } p;
    
    p.f = x;
    return p.t;
}
static inline double futrts_from_bits64(int64_t x)
{
    union {
        int64_t f;
        double t;
    } p;
    
    p.f = x;
    return p.t;
}
static inline double fmod64(double x, double y)
{
    return fmod(x, y);
}
#ifdef __OPENCL_VERSION__
static inline double futrts_lerp64(double v0, double v1, double t)
{
    return mix(v0, v1, t);
}
static inline double futrts_mad64(double a, double b, double c)
{
    return mad(a, b, c);
}
#else
static inline double futrts_lerp64(double v0, double v1, double t)
{
    return v0 + (v1 - v0) * t;
}
static inline double futrts_mad64(double a, double b, double c)
{
    return a * b + c;
}
#endif
static inline float fpconv_f32_f32(float x)
{
    return (float) x;
}
static inline double fpconv_f32_f64(float x)
{
    return (double) x;
}
static inline float fpconv_f64_f32(double x)
{
    return (float) x;
}
static inline double fpconv_f64_f64(double x)
{
    return (double) x;
}
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

__kernel void segmap_intragroup_141(__global int *global_failure,
                                    __local volatile
                                    int64_t *mem_591_backing_aligned_0,
                                    __local volatile
                                    int64_t *mem_588_backing_aligned_1,
                                    int32_t M_53, int32_t U_54, int32_t N_56,
                                    int32_t gridDim_x_133,
                                    int32_t full_tiles_166, int32_t kk_359,
                                    __global unsigned char *A_mem_574, __global
                                    unsigned char *B_mem_575, __global
                                    unsigned char *mem_668)
{
    #define Tk_114 (mainziTk_109)
    #define Tx_115 (mainziTx_110)
    #define Ty_116 (mainziTy_111)
    #define Rx_117 (mainziRx_112)
    #define Ry_118 (mainziRy_113)
    #define tk_div_tx_121 (squot32(add32(mainziTk_109, sub32(mainziTx_110, 1)), mainziTx_110))
    #define tk_div_ty_124 (squot32(add32(mainziTk_109, sub32(mainziTy_111, 1)), mainziTy_111))
    #define TxRx_125 (mainziTx_110 * mainziRx_112)
    #define TyRy_126 (mainziTy_111 * mainziRy_113)
    #define a_loc_szz_128 (mainziTk_109 * (mainziTy_111 * mainziRy_113))
    #define b_loc_szz_130 (mainziRx_112 * (mainziTk_109 * mainziTx_110))
    
    const int block_dim0 = 0;
    const int block_dim1 = 1;
    const int block_dim2 = 2;
    __local volatile char *restrict mem_591_backing_1 = (__local volatile
                                                         char *) mem_591_backing_aligned_0;
    __local volatile char *restrict mem_588_backing_0 = (__local volatile
                                                         char *) mem_588_backing_aligned_1;
    
    if (*global_failure >= 0)
        return;
    
    int32_t global_tid_697;
    int32_t local_tid_698;
    int32_t group_sizze_701;
    int32_t wave_sizze_700;
    int32_t group_tid_699;
    
    global_tid_697 = get_global_id(0);
    local_tid_698 = get_local_id(0);
    group_sizze_701 = get_local_size(0);
    wave_sizze_700 = LOCKSTEP_WIDTH;
    group_tid_699 = get_group_id(0);
    
    int32_t gid_flat_141 = group_tid_699;
    int32_t ltid_pre_702 = squot32(local_tid_698, Tx_115);
    int32_t ltid_pre_703 = local_tid_698 - squot32(local_tid_698, Tx_115) *
            Tx_115;
    int32_t gid_y_140 = squot32(group_tid_699, gridDim_x_133);
    int32_t gid_x_139 = group_tid_699 - squot32(group_tid_699, gridDim_x_133) *
            gridDim_x_133;
    int32_t iii_142 = TyRy_126 * gid_y_140;
    int32_t jjj_143 = TxRx_125 * gid_x_139;
    bool mem_585[Ry_118 * Rx_117];
    int32_t ltid_x_144 = ltid_pre_702;
    int32_t ltid_y_145 = ltid_pre_703;
    int32_t ltid_flat_146 = local_tid_698;
    bool mem_580[Ry_118 * Rx_117];
    
    for (int32_t i_158 = 0; i_158 < Ry_118; i_158++) {
        for (int32_t i_161 = 0; i_161 < Rx_117; i_161++) {
            mem_580[i_158 * Rx_117 + i_161] = 1;
        }
    }
    for (int32_t i_706 = 0; i_706 < Ry_118; i_706++) {
        for (int32_t i_707 = 0; i_707 < Rx_117; i_707++) {
            mem_585[i_706 * Rx_117 + i_707] = mem_580[i_706 * Rx_117 + i_707];
        }
    }
    barrier(CLK_LOCAL_MEM_FENCE);
    
    __local char *mem_588;
    
    mem_588 = (__local char *) mem_588_backing_0;
    
    __local char *mem_591;
    
    mem_591 = (__local char *) mem_591_backing_1;
    
    int16_t mem_615[Ry_118];
    double mem_620[Rx_117];
    bool mem_626[Ry_118 * Rx_117];
    
    for (int32_t i_167 = 0; i_167 < full_tiles_166; i_167++) {
        int32_t kk_171 = Tk_114 * i_167;
        
        for (int32_t i_172 = 0; i_172 < Ry_118; i_172++) {
            int32_t binop_y_195 = Ty_116 * i_172;
            
            for (int32_t i_174 = 0; i_174 < tk_div_tx_121; i_174++) {
                int32_t binop_y_193 = Tx_115 * i_174;
                int32_t ltid_x_176 = ltid_pre_702;
                int32_t ltid_y_177 = ltid_pre_703;
                int32_t ltid_flat_178 = local_tid_698;
                int32_t k_194 = ltid_y_177 + binop_y_193;
                int32_t i_196 = ltid_x_176 + binop_y_195;
                int32_t gtid_197 = iii_142 + i_196;
                int32_t A_col_idx_198 = kk_171 + k_194;
                bool cond_199 = slt32(gtid_197, M_53);
                int16_t A_elem_200;
                
                if (cond_199) {
                    int16_t A_elem_202 = ((__global
                                           int16_t *) A_mem_574)[gtid_197 *
                                                                 U_54 +
                                                                 A_col_idx_198];
                    
                    A_elem_200 = A_elem_202;
                } else {
                    A_elem_200 = 0;
                }
                
                bool cond_204 = slt32(k_194, Tk_114);
                int32_t a_loc_ind_205;
                
                if (cond_204) {
                    int32_t binop_y_206 = Tk_114 * i_196;
                    int32_t loc_fi_207 = k_194 + binop_y_206;
                    
                    a_loc_ind_205 = loc_fi_207;
                } else {
                    a_loc_ind_205 = -1;
                }
                if (sle32(0, a_loc_ind_205) && slt32(a_loc_ind_205,
                                                     a_loc_szz_128)) {
                    ((__local int16_t *) mem_588)[a_loc_ind_205] = A_elem_200;
                }
                barrier(CLK_LOCAL_MEM_FENCE);
            }
        }
        for (int32_t i_212 = 0; i_212 < tk_div_ty_124; i_212++) {
            int32_t binop_y_233 = Ty_116 * i_212;
            
            for (int32_t i_214 = 0; i_214 < Rx_117; i_214++) {
                int32_t binop_y_235 = Tx_115 * i_214;
                int32_t ltid_x_216 = ltid_pre_702;
                int32_t ltid_y_217 = ltid_pre_703;
                int32_t ltid_flat_218 = local_tid_698;
                int32_t k_234 = ltid_x_216 + binop_y_233;
                int32_t j_236 = ltid_y_217 + binop_y_235;
                int32_t gtid_237 = jjj_143 + j_236;
                int32_t B_row_idx_238 = kk_171 + k_234;
                bool cond_239 = slt32(gtid_237, N_56);
                double B_elem_240;
                
                if (cond_239) {
                    double B_elem_242 = ((__global
                                          double *) B_mem_575)[B_row_idx_238 *
                                                               N_56 + gtid_237];
                    
                    B_elem_240 = B_elem_242;
                } else {
                    B_elem_240 = 0.0;
                }
                
                bool cond_244 = slt32(k_234, Tk_114);
                int32_t b_loc_ind_245;
                
                if (cond_244) {
                    int32_t binop_y_246 = TxRx_125 * k_234;
                    int32_t loc_fi_247 = j_236 + binop_y_246;
                    
                    b_loc_ind_245 = loc_fi_247;
                } else {
                    b_loc_ind_245 = -1;
                }
                if (sle32(0, b_loc_ind_245) && slt32(b_loc_ind_245,
                                                     b_loc_szz_130)) {
                    ((__local double *) mem_591)[b_loc_ind_245] = B_elem_240;
                }
                barrier(CLK_LOCAL_MEM_FENCE);
            }
        }
        for (int32_t i_252 = 0; i_252 < Tk_114; i_252++) {
            int32_t binop_y_291 = TxRx_125 * i_252;
            int32_t ltid_x_254 = ltid_pre_702;
            int32_t ltid_y_255 = ltid_pre_703;
            int32_t ltid_flat_256 = local_tid_698;
            int16_t mem_607[Ry_118];
            double mem_610[Rx_117];
            int32_t binop_x_282 = Ry_118 * ltid_x_254;
            
            for (int32_t i_281 = 0; i_281 < Ry_118; i_281++) {
                int32_t binop_x_283 = i_281 + binop_x_282;
                int32_t binop_y_284 = Tk_114 * binop_x_283;
                int32_t a_loc_ind_285 = i_252 + binop_y_284;
                
                for (int32_t i_717 = 0; i_717 < 1; i_717++) {
                    mem_607[i_281 + i_717] = ((__local
                                               int16_t *) mem_588)[a_loc_ind_285 +
                                                                   i_717];
                }
            }
            
            int32_t binop_y_293 = Rx_117 * ltid_y_255;
            
            for (int32_t i_290 = 0; i_290 < Rx_117; i_290++) {
                int32_t binop_x_292 = i_290 + binop_y_291;
                int32_t b_loc_ind_294 = binop_x_292 + binop_y_293;
                
                for (int32_t i_719 = 0; i_719 < 1; i_719++) {
                    mem_610[i_290 + i_719] = ((__local
                                               double *) mem_591)[b_loc_ind_294 +
                                                                  i_719];
                }
            }
            for (int32_t i_720 = 0; i_720 < Ry_118; i_720++) {
                mem_615[i_720] = mem_607[i_720];
            }
            for (int32_t i_721 = 0; i_721 < Rx_117; i_721++) {
                mem_620[i_721] = mem_610[i_721];
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            
            int32_t ltid_x_299 = ltid_pre_702;
            int32_t ltid_y_300 = ltid_pre_703;
            int32_t ltid_flat_301 = local_tid_698;
            
            for (int32_t i_332 = 0; i_332 < Ry_118; i_332++) {
                int16_t a_333 = mem_615[i_332];
                int16_t x_341 = smod16(a_333, 2);
                bool cond_342 = x_341 == 0;
                bool x_344 = !cond_342;
                
                for (int32_t i_336 = 0; i_336 < Rx_117; i_336++) {
                    double b_337 = mem_620[i_336];
                    bool c_338 = mem_585[i_332 * Rx_117 + i_336];
                    bool res_343 = b_337 < 0.0;
                    bool y_345 = res_343 && x_344;
                    bool cond_346 = cond_342 || y_345;
                    bool x_350 = c_338 && cond_346;
                    
                    mem_585[i_332 * Rx_117 + i_336] = x_350;
                }
            }
            for (int32_t i_724 = 0; i_724 < Ry_118; i_724++) {
                for (int32_t i_725 = 0; i_725 < Rx_117; i_725++) {
                    mem_626[i_724 * Rx_117 + i_725] = mem_585[i_724 * Rx_117 +
                                                              i_725];
                }
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            for (int32_t i_726 = 0; i_726 < Ry_118; i_726++) {
                for (int32_t i_727 = 0; i_727 < Rx_117; i_727++) {
                    mem_585[i_726 * Rx_117 + i_727] = mem_626[i_726 * Rx_117 +
                                                              i_727];
                }
            }
        }
    }
    for (int32_t i_360 = 0; i_360 < Ry_118; i_360++) {
        int32_t binop_y_385 = Ty_116 * i_360;
        
        for (int32_t i_362 = 0; i_362 < tk_div_tx_121; i_362++) {
            int32_t binop_y_383 = Tx_115 * i_362;
            int32_t ltid_x_364 = ltid_pre_702;
            int32_t ltid_y_365 = ltid_pre_703;
            int32_t ltid_flat_366 = local_tid_698;
            int32_t k_384 = ltid_y_365 + binop_y_383;
            int32_t i_386 = ltid_x_364 + binop_y_385;
            int32_t gtid_387 = iii_142 + i_386;
            int32_t A_col_idx_388 = kk_359 + k_384;
            bool binop_x_389 = slt32(gtid_387, M_53);
            bool binop_y_390 = slt32(A_col_idx_388, U_54);
            bool cond_391 = binop_x_389 && binop_y_390;
            int16_t A_elem_392;
            
            if (cond_391) {
                int16_t A_elem_394 = ((__global int16_t *) A_mem_574)[gtid_387 *
                                                                      U_54 +
                                                                      A_col_idx_388];
                
                A_elem_392 = A_elem_394;
            } else {
                A_elem_392 = 0;
            }
            
            bool cond_396 = slt32(k_384, Tk_114);
            int32_t a_loc_ind_397;
            
            if (cond_396) {
                int32_t binop_y_398 = Tk_114 * i_386;
                int32_t loc_fi_399 = k_384 + binop_y_398;
                
                a_loc_ind_397 = loc_fi_399;
            } else {
                a_loc_ind_397 = -1;
            }
            if (sle32(0, a_loc_ind_397) && slt32(a_loc_ind_397,
                                                 a_loc_szz_128)) {
                ((__local int16_t *) mem_588)[a_loc_ind_397] = A_elem_392;
            }
            barrier(CLK_LOCAL_MEM_FENCE);
        }
    }
    for (int32_t i_404 = 0; i_404 < tk_div_ty_124; i_404++) {
        int32_t binop_y_427 = Ty_116 * i_404;
        
        for (int32_t i_406 = 0; i_406 < Rx_117; i_406++) {
            int32_t binop_y_429 = Tx_115 * i_406;
            int32_t ltid_x_408 = ltid_pre_702;
            int32_t ltid_y_409 = ltid_pre_703;
            int32_t ltid_flat_410 = local_tid_698;
            int32_t k_428 = ltid_x_408 + binop_y_427;
            int32_t j_430 = ltid_y_409 + binop_y_429;
            int32_t gtid_431 = jjj_143 + j_430;
            int32_t B_row_idx_432 = kk_359 + k_428;
            bool binop_x_433 = slt32(gtid_431, N_56);
            bool binop_y_434 = slt32(B_row_idx_432, U_54);
            bool cond_435 = binop_x_433 && binop_y_434;
            double B_elem_436;
            
            if (cond_435) {
                double B_elem_438 = ((__global
                                      double *) B_mem_575)[B_row_idx_432 *
                                                           N_56 + gtid_431];
                
                B_elem_436 = B_elem_438;
            } else {
                B_elem_436 = 0.0;
            }
            
            bool cond_440 = slt32(k_428, Tk_114);
            int32_t b_loc_ind_441;
            
            if (cond_440) {
                int32_t binop_y_442 = TxRx_125 * k_428;
                int32_t loc_fi_443 = j_430 + binop_y_442;
                
                b_loc_ind_441 = loc_fi_443;
            } else {
                b_loc_ind_441 = -1;
            }
            if (sle32(0, b_loc_ind_441) && slt32(b_loc_ind_441,
                                                 b_loc_szz_130)) {
                ((__local double *) mem_591)[b_loc_ind_441] = B_elem_436;
            }
            barrier(CLK_LOCAL_MEM_FENCE);
        }
    }
    
    int16_t mem_651[Ry_118];
    double mem_656[Rx_117];
    bool mem_662[Ry_118 * Rx_117];
    bool mem_684[Ry_118 * Rx_117];
    
    for (int32_t i_448 = 0; i_448 < Tk_114; i_448++) {
        int32_t cmpop_x_450 = kk_359 + i_448;
        bool cond_451 = slt32(cmpop_x_450, U_54);
        
        if (cond_451) {
            int32_t binop_y_489 = TxRx_125 * i_448;
            int64_t binop_x_642 = sext_i32_i64(Ry_118);
            int64_t bytes_641 = 2 * binop_x_642;
            int64_t binop_x_645 = sext_i32_i64(Rx_117);
            int64_t bytes_644 = 8 * binop_x_645;
            int32_t ltid_x_452 = ltid_pre_702;
            int32_t ltid_y_453 = ltid_pre_703;
            int32_t ltid_flat_454 = local_tid_698;
            int16_t mem_643[Ry_118];
            double mem_646[Rx_117];
            int32_t binop_x_480 = Ry_118 * ltid_x_452;
            
            for (int32_t i_479 = 0; i_479 < Ry_118; i_479++) {
                int32_t binop_x_481 = i_479 + binop_x_480;
                int32_t binop_y_482 = Tk_114 * binop_x_481;
                int32_t a_loc_ind_483 = i_448 + binop_y_482;
                
                for (int32_t i_734 = 0; i_734 < 1; i_734++) {
                    mem_643[i_479 + i_734] = ((__local
                                               int16_t *) mem_588)[a_loc_ind_483 +
                                                                   i_734];
                }
            }
            
            int32_t binop_y_491 = Rx_117 * ltid_y_453;
            
            for (int32_t i_488 = 0; i_488 < Rx_117; i_488++) {
                int32_t binop_x_490 = i_488 + binop_y_489;
                int32_t b_loc_ind_492 = binop_x_490 + binop_y_491;
                
                for (int32_t i_736 = 0; i_736 < 1; i_736++) {
                    mem_646[i_488 + i_736] = ((__local
                                               double *) mem_591)[b_loc_ind_492 +
                                                                  i_736];
                }
            }
            for (int32_t i_737 = 0; i_737 < Ry_118; i_737++) {
                mem_651[i_737] = mem_643[i_737];
            }
            for (int32_t i_738 = 0; i_738 < Rx_117; i_738++) {
                mem_656[i_738] = mem_646[i_738];
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            
            int32_t ltid_x_497 = ltid_pre_702;
            int32_t ltid_y_498 = ltid_pre_703;
            int32_t ltid_flat_499 = local_tid_698;
            
            for (int32_t i_530 = 0; i_530 < Ry_118; i_530++) {
                int16_t a_531 = mem_651[i_530];
                int16_t x_539 = smod16(a_531, 2);
                bool cond_540 = x_539 == 0;
                bool x_542 = !cond_540;
                
                for (int32_t i_534 = 0; i_534 < Rx_117; i_534++) {
                    double b_535 = mem_656[i_534];
                    bool c_536 = mem_585[i_530 * Rx_117 + i_534];
                    bool res_541 = b_535 < 0.0;
                    bool y_543 = res_541 && x_542;
                    bool cond_544 = cond_540 || y_543;
                    bool x_548 = c_536 && cond_544;
                    
                    mem_585[i_530 * Rx_117 + i_534] = x_548;
                }
            }
            for (int32_t i_741 = 0; i_741 < Ry_118; i_741++) {
                for (int32_t i_742 = 0; i_742 < Rx_117; i_742++) {
                    mem_662[i_741 * Rx_117 + i_742] = mem_585[i_741 * Rx_117 +
                                                              i_742];
                }
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            for (int32_t i_743 = 0; i_743 < Ry_118; i_743++) {
                for (int32_t i_744 = 0; i_744 < Rx_117; i_744++) {
                    mem_684[i_743 * Rx_117 + i_744] = mem_662[i_743 * Rx_117 +
                                                              i_744];
                }
            }
        } else {
            for (int32_t i_745 = 0; i_745 < Ry_118; i_745++) {
                for (int32_t i_746 = 0; i_746 < Rx_117; i_746++) {
                    mem_684[i_745 * Rx_117 + i_746] = mem_585[i_745 * Rx_117 +
                                                              i_746];
                }
            }
        }
        for (int32_t i_747 = 0; i_747 < Ry_118; i_747++) {
            for (int32_t i_748 = 0; i_748 < Rx_117; i_748++) {
                mem_585[i_747 * Rx_117 + i_748] = mem_684[i_747 * Rx_117 +
                                                          i_748];
            }
        }
    }
    
    int32_t reg_tile_i_749 = squot32(local_tid_698, Tx_115);
    int32_t reg_tile_i_750 = local_tid_698 - squot32(local_tid_698, Tx_115) *
            Tx_115;
    int32_t tile_dim_start_751 = Ry_118 * (Ty_116 * gid_y_140 + reg_tile_i_749);
    int32_t tile_dim_start_752 = Rx_117 * (Tx_115 * gid_x_139 + reg_tile_i_750);
    
    for (int32_t i_753 = 0; i_753 < Ry_118; i_753++) {
        for (int32_t i_754 = 0; i_754 < Rx_117; i_754++) {
          int C_row_idx = (tile_dim_start_751 + i_753);
          int C_col_idx = (tile_dim_start_752 + i_754);
          if (C_row_idx < M_53 && C_col_idx < N_56)
            ((__global bool *) mem_668)[ C_row_idx* N_56 +C_col_idx ] =
                mem_585[i_753 * Rx_117 + i_754];
        }
    }
    
  error_9:
    return;
    #undef Tk_114
    #undef Tx_115
    #undef Ty_116
    #undef Rx_117
    #undef Ry_118
    #undef tk_div_tx_121
    #undef tk_div_ty_124
    #undef TxRx_125
    #undef TyRy_126
    #undef a_loc_szz_128
    #undef b_loc_szz_130
}
