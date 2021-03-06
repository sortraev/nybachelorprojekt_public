#ifdef cl_clang_storage_class_specifiers
#pragma OPENCL EXTENSION cl_clang_storage_class_specifiers : enable
#endif
#pragma OPENCL EXTENSION cl_khr_byte_addressable_store : enable
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
                                    __local volatile
                                    int64_t *mem_548_backing_aligned_0,
                                    __local volatile
                                    int64_t *mem_545_backing_aligned_1,
                                    int32_t M_38, int32_t U_39, int32_t N_41,
                                    int32_t gridDim_x_108,
                                    int32_t full_tiles_141, int32_t kk_324,
                                    __global unsigned char *A_mem_529, __global
                                    unsigned char *B_mem_530, __global
                                    unsigned char *mem_628)
{
    #define Tk_89 (mainziTk_84)
    #define Tx_90 (mainziTx_85)
    #define Ty_91 (mainziTy_86)
    #define Rx_92 (mainziRx_87)
    #define Ry_93 (mainziRy_88)
    #define tk_div_tx_96 (squot32(add32(mainziTk_84, sub32(mainziTx_85, 1)), mainziTx_85))
    #define tk_div_ty_99 (squot32(add32(mainziTk_84, sub32(mainziTy_86, 1)), mainziTy_86))
    #define TxRx_100 (mainziTx_85 * mainziRx_87)
    #define TyRy_101 (mainziTy_86 * mainziRy_88)
    #define a_loc_szz_103 (mainziTk_84 * (mainziTy_86 * mainziRy_88))
    #define b_loc_szz_105 (mainziRx_87 * (mainziTk_84 * mainziTx_85))
    
    const int block_dim0 = 0;
    const int block_dim1 = 1;
    const int block_dim2 = 2;
    __local volatile char *restrict mem_548_backing_1 = (__local volatile
                                                         char *) mem_548_backing_aligned_0;
    __local volatile char *restrict mem_545_backing_0 = (__local volatile
                                                         char *) mem_545_backing_aligned_1;
    
    if (*global_failure >= 0)
        return;
    
    int32_t global_tid_658;
    int32_t local_tid_659;
    int32_t group_sizze_662;
    int32_t wave_sizze_661;
    int32_t group_tid_660;
    
    global_tid_658 = get_global_id(0);
    local_tid_659 = get_local_id(0);
    group_sizze_662 = get_local_size(0);
    wave_sizze_661 = LOCKSTEP_WIDTH;
    group_tid_660 = get_group_id(0);
    
    int32_t gid_flat_116 = group_tid_660;
    int32_t ltid_pre_663 = squot32(local_tid_659, Tx_90);
    int32_t ltid_pre_664 = local_tid_659 - squot32(local_tid_659, Tx_90) *
            Tx_90;
    int32_t gid_y_115 = squot32(group_tid_660, gridDim_x_108);
    int32_t gid_x_114 = group_tid_660 - squot32(group_tid_660, gridDim_x_108) *
            gridDim_x_108;
    int32_t iii_117 = TyRy_101 * gid_y_115;
    int32_t jjj_118 = TxRx_100 * gid_x_114;
    float mem_542[Ry_93 * Rx_92];
    int32_t thd_y_120 = ltid_pre_663;
    int32_t thd_x_119 = ltid_pre_664;
    int32_t ltid_flat_121 = local_tid_659;
    float mem_536[Ry_93 * Rx_92];
    
    for (int32_t i_133 = 0; i_133 < Ry_93; i_133++) {
        for (int32_t i_136 = 0; i_136 < Rx_92; i_136++) {
            mem_536[i_133 * Rx_92 + i_136] = 0.0F;
        }
    }
    for (int32_t i_667 = 0; i_667 < Ry_93; i_667++) {
        for (int32_t i_668 = 0; i_668 < Rx_92; i_668++) {
            mem_542[i_667 * Rx_92 + i_668] = mem_536[i_667 * Rx_92 + i_668];
        }
    }
    barrier(CLK_LOCAL_MEM_FENCE);
    
    __local char *mem_545 = (__local char *) mem_545_backing_0;
    
    __local char *mem_548 = (__local char *) mem_548_backing_1;
    
    float mem_572[Ry_93];
    float mem_577[Rx_92];
    float mem_584[Ry_93 * Rx_92];
    
    for (int32_t i_142 = 0; i_142 < full_tiles_141; i_142++) {
        int32_t kk_146 = Tk_89 * i_142;
        
        for (int32_t i_147 = 0; i_147 < Ry_93; i_147++) {
            int32_t binop_y_170 = Ty_91 * i_147;
            
            for (int32_t i_149 = 0; i_149 < tk_div_tx_96; i_149++) {
                int32_t binop_y_168 = Tx_90 * i_149;
                int32_t thd_y_152 = ltid_pre_663;
                int32_t thd_x_151 = ltid_pre_664;
                int32_t ltid_flat_153 = local_tid_659;
                int32_t k_169 = thd_x_151 + binop_y_168;
                int32_t i_171 = thd_y_152 + binop_y_170;
                int32_t gtid_172 = iii_117 + i_171;
                int32_t A_col_idx_173 = kk_146 + k_169;
                bool cond_174 = slt32(gtid_172, M_38);
                float A_elem_175;
                
                if (cond_174) {
                    float A_elem_177 = ((__global float *) A_mem_529)[gtid_172 *
                                                                      U_39 +
                                                                      A_col_idx_173];
                    
                    A_elem_175 = A_elem_177;
                } else {
                    A_elem_175 = 0.0F;
                }
                
                bool cond_179 = slt32(k_169, Tk_89);
                int32_t a_loc_ind_180;
                
                if (cond_179) {
                    int32_t binop_y_181 = Tk_89 * i_171;
                    int32_t loc_fi_182 = k_169 + binop_y_181;
                    
                    a_loc_ind_180 = loc_fi_182;
                } else {
                    a_loc_ind_180 = -1;
                }
                if (sle32(0, a_loc_ind_180) && slt32(a_loc_ind_180,
                                                     a_loc_szz_103)) {
                    ((__local float *) mem_545)[a_loc_ind_180] = A_elem_175;
                }
                barrier(CLK_LOCAL_MEM_FENCE);
            }
        }
        for (int32_t i_187 = 0; i_187 < tk_div_ty_99; i_187++) {
            int32_t binop_y_208 = Ty_91 * i_187;
            
            for (int32_t i_189 = 0; i_189 < Rx_92; i_189++) {
                int32_t binop_y_210 = Tx_90 * i_189;
                int32_t thd_y_192 = ltid_pre_663;
                int32_t thd_x_191 = ltid_pre_664;
                int32_t ltid_flat_193 = local_tid_659;
                int32_t k_209 = thd_y_192 + binop_y_208;
                int32_t j_211 = thd_x_191 + binop_y_210;
                int32_t gtid_212 = jjj_118 + j_211;
                int32_t B_row_idx_213 = kk_146 + k_209;
                bool cond_214 = slt32(gtid_212, N_41);
                float B_elem_215;
                
                if (cond_214) {
                    float B_elem_217 = ((__global
                                         float *) B_mem_530)[B_row_idx_213 *
                                                             N_41 + gtid_212];
                    
                    B_elem_215 = B_elem_217;
                } else {
                    B_elem_215 = 0.0F;
                }
                
                bool cond_219 = slt32(k_209, Tk_89);
                int32_t b_loc_ind_220;
                
                if (cond_219) {
                    int32_t binop_y_221 = TxRx_100 * k_209;
                    int32_t loc_fi_222 = j_211 + binop_y_221;
                    
                    b_loc_ind_220 = loc_fi_222;
                } else {
                    b_loc_ind_220 = -1;
                }
                if (sle32(0, b_loc_ind_220) && slt32(b_loc_ind_220,
                                                     b_loc_szz_105)) {
                    ((__local float *) mem_548)[b_loc_ind_220] = B_elem_215;
                }
                barrier(CLK_LOCAL_MEM_FENCE);
            }
        }
        for (int32_t i_227 = 0; i_227 < Tk_89; i_227++) {
            int32_t binop_y_266 = TxRx_100 * i_227;
            int32_t thd_y_230 = ltid_pre_663;
            int32_t thd_x_229 = ltid_pre_664;
            int32_t ltid_flat_231 = local_tid_659;
            float mem_564[Ry_93];
            float mem_567[Rx_92];
            int32_t binop_x_257 = Ry_93 * thd_y_230;
            
            for (int32_t i_256 = 0; i_256 < Ry_93; i_256++) {
                int32_t binop_x_258 = i_256 + binop_x_257;
                int32_t binop_y_259 = Tk_89 * binop_x_258;
                int32_t a_loc_ind_260 = i_227 + binop_y_259;
                
                for (int32_t i_678 = 0; i_678 < 1; i_678++) {
                    mem_564[i_256 + i_678] = ((__local
                                               float *) mem_545)[a_loc_ind_260 +
                                                                 i_678];
                }
            }
            
            int32_t binop_y_268 = Rx_92 * thd_x_229;
            
            for (int32_t i_265 = 0; i_265 < Rx_92; i_265++) {
                int32_t binop_x_267 = i_265 + binop_y_266;
                int32_t b_loc_ind_269 = binop_x_267 + binop_y_268;
                
                for (int32_t i_680 = 0; i_680 < 1; i_680++) {
                    mem_567[i_265 + i_680] = ((__local
                                               float *) mem_548)[b_loc_ind_269 +
                                                                 i_680];
                }
            }
            for (int32_t i_681 = 0; i_681 < Ry_93; i_681++) {
                mem_572[i_681] = mem_564[i_681];
            }
            for (int32_t i_682 = 0; i_682 < Rx_92; i_682++) {
                mem_577[i_682] = mem_567[i_682];
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            
            int32_t thd_y_275 = ltid_pre_663;
            int32_t thd_x_274 = ltid_pre_664;
            int32_t ltid_flat_276 = local_tid_659;

            int32_t binop_0 = thd_y_275 * Ry_93;
            int32_t binop_1 = binop_0 + iii_117;
            int32_t binop_2 = thd_x_274 * Rx_92;
            int32_t binop_3 = binop_2 + jjj_118;
            
            for (int32_t i_302 = 0; i_302 < Ry_93; i_302++) {
                float a_303 = mem_572[i_302];
                
                int i = binop_1 + i_302;
                for (int32_t i_306 = 0; i_306 < Rx_92; i_306++) {
                    int j = binop_3 + i_306;
                    if (j < N_41 && i < M_38)
                    // if (j < N_41)
                    // if (i < M_38)
                    {
                        float b_307 = mem_577[i_306];
                        float c_308 = mem_542[i_302 * Rx_92 + i_306];
                        float res_311 = a_303 * b_307;
                        float res_315 = c_308 + res_311;
                        
                        mem_542[i_302 * Rx_92 + i_306] = res_315;
                    }
                }
            }
            for (int32_t i_685 = 0; i_685 < Ry_93; i_685++) {
                for (int32_t i_686 = 0; i_686 < Rx_92; i_686++) {
                    mem_584[i_685 * Rx_92 + i_686] = mem_542[i_685 * Rx_92 +
                                                             i_686];
                }
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            for (int32_t i_687 = 0; i_687 < Ry_93; i_687++) {
                for (int32_t i_688 = 0; i_688 < Rx_92; i_688++) {
                    mem_542[i_687 * Rx_92 + i_688] = mem_584[i_687 * Rx_92 +
                                                             i_688];
                }
            }
        }
    }
    for (int32_t i_325 = 0; i_325 < Ry_93; i_325++) {
        int32_t binop_y_350 = Ty_91 * i_325;
        
        for (int32_t i_327 = 0; i_327 < tk_div_tx_96; i_327++) {
            int32_t binop_y_348 = Tx_90 * i_327;
            int32_t thd_y_330 = ltid_pre_663;
            int32_t thd_x_329 = ltid_pre_664;
            int32_t ltid_flat_331 = local_tid_659;
            int32_t k_349 = thd_x_329 + binop_y_348;
            int32_t i_351 = thd_y_330 + binop_y_350;
            int32_t gtid_352 = iii_117 + i_351;
            int32_t A_col_idx_353 = kk_324 + k_349;
            bool binop_x_354 = slt32(gtid_352, M_38);
            bool binop_y_355 = slt32(A_col_idx_353, U_39);
            bool cond_356 = binop_x_354 && binop_y_355;
            float A_elem_357;
            
            if (cond_356) {
                float A_elem_359 = ((__global float *) A_mem_529)[gtid_352 *
                                                                  U_39 +
                                                                  A_col_idx_353];
                
                A_elem_357 = A_elem_359;
            } else {
                A_elem_357 = 0.0F;
            }
            
            bool cond_361 = slt32(k_349, Tk_89);
            int32_t a_loc_ind_362;
            
            if (cond_361) {
                int32_t binop_y_363 = Tk_89 * i_351;
                int32_t loc_fi_364 = k_349 + binop_y_363;
                
                a_loc_ind_362 = loc_fi_364;
            } else {
                a_loc_ind_362 = -1;
            }
            if (sle32(0, a_loc_ind_362) && slt32(a_loc_ind_362,
                                                 a_loc_szz_103)) {
                ((__local float *) mem_545)[a_loc_ind_362] = A_elem_357;
            }
            barrier(CLK_LOCAL_MEM_FENCE);
        }
    }
    for (int32_t i_369 = 0; i_369 < tk_div_ty_99; i_369++) {
        int32_t binop_y_392 = Ty_91 * i_369;
        
        for (int32_t i_371 = 0; i_371 < Rx_92; i_371++) {
            int32_t binop_y_394 = Tx_90 * i_371;
            int32_t thd_y_374 = ltid_pre_663;
            int32_t thd_x_373 = ltid_pre_664;
            int32_t ltid_flat_375 = local_tid_659;
            int32_t k_393 = thd_y_374 + binop_y_392;
            int32_t j_395 = thd_x_373 + binop_y_394;
            int32_t gtid_396 = jjj_118 + j_395;
            int32_t B_row_idx_397 = kk_324 + k_393;
            bool binop_x_398 = slt32(gtid_396, N_41);
            bool binop_y_399 = slt32(B_row_idx_397, U_39);
            bool cond_400 = binop_x_398 && binop_y_399;
            float B_elem_401;
            
            if (cond_400) {
                float B_elem_403 = ((__global
                                     float *) B_mem_530)[B_row_idx_397 * N_41 +
                                                         gtid_396];
                
                B_elem_401 = B_elem_403;
            } else {
                B_elem_401 = 0.0F;
            }
            
            bool cond_405 = slt32(k_393, Tk_89);
            int32_t b_loc_ind_406;
            
            if (cond_405) {
                int32_t binop_y_407 = TxRx_100 * k_393;
                int32_t loc_fi_408 = j_395 + binop_y_407;
                
                b_loc_ind_406 = loc_fi_408;
            } else {
                b_loc_ind_406 = -1;
            }
            if (sle32(0, b_loc_ind_406) && slt32(b_loc_ind_406,
                                                 b_loc_szz_105)) {
                ((__local float *) mem_548)[b_loc_ind_406] = B_elem_401;
            }
            barrier(CLK_LOCAL_MEM_FENCE);
        }
    }
    
    float mem_609[Ry_93];
    float mem_614[Rx_92];
    float mem_621[Ry_93 * Rx_92];
    float mem_645[Ry_93 * Rx_92];
    
    for (int32_t i_413 = 0; i_413 < Tk_89; i_413++) {
        int32_t cmpop_x_415 = kk_324 + i_413;
        bool cond_416 = slt32(cmpop_x_415, U_39);
        
        if (cond_416) {
            int32_t binop_y_454 = TxRx_100 * i_413;
            int64_t binop_x_600 = sext_i32_i64(Ry_93);
            int64_t bytes_599 = 4 * binop_x_600;
            int64_t binop_x_603 = sext_i32_i64(Rx_92);
            int64_t bytes_602 = 4 * binop_x_603;
            int32_t thd_y_418 = ltid_pre_663;
            int32_t thd_x_417 = ltid_pre_664;
            int32_t ltid_flat_419 = local_tid_659;
            float mem_601[Ry_93];
            float mem_604[Rx_92];
            int32_t binop_x_445 = Ry_93 * thd_y_418;
            
            for (int32_t i_444 = 0; i_444 < Ry_93; i_444++) {
                int32_t binop_x_446 = i_444 + binop_x_445;
                int32_t binop_y_447 = Tk_89 * binop_x_446;
                int32_t a_loc_ind_448 = i_413 + binop_y_447;
                
                for (int32_t i_695 = 0; i_695 < 1; i_695++) {
                    mem_601[i_444 + i_695] = ((__local
                                               float *) mem_545)[a_loc_ind_448 +
                                                                 i_695];
                }
            }
            
            int32_t binop_y_456 = Rx_92 * thd_x_417;
            
            for (int32_t i_453 = 0; i_453 < Rx_92; i_453++) {
                int32_t binop_x_455 = i_453 + binop_y_454;
                int32_t b_loc_ind_457 = binop_x_455 + binop_y_456;
                
                for (int32_t i_697 = 0; i_697 < 1; i_697++) {
                    mem_604[i_453 + i_697] = ((__local
                                               float *) mem_548)[b_loc_ind_457 +
                                                                 i_697];
                }
            }
            for (int32_t i_698 = 0; i_698 < Ry_93; i_698++) {
                mem_609[i_698] = mem_601[i_698];
            }
            for (int32_t i_699 = 0; i_699 < Rx_92; i_699++) {
                mem_614[i_699] = mem_604[i_699];
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            
            int32_t thd_y_463 = ltid_pre_663;
            int32_t thd_x_462 = ltid_pre_664;
            int32_t ltid_flat_464 = local_tid_659;
            int32_t binop_0 = thd_y_463 * Ry_93;
            int32_t binop_1 = binop_0 + iii_117;
            int32_t binop_2 = thd_x_462 * Rx_92;
            int32_t binop_3 = binop_2 + jjj_118;
            
            for (int32_t i_490 = 0; i_490 < Ry_93; i_490++) {
                float a_491 = mem_609[i_490];
                
                int i = binop_1 + i_490;
                for (int32_t i_494 = 0; i_494 < Rx_92; i_494++) {
                    int j = binop_3 + i_494;
                    if (j < N_41 && i < M_38)
                    {
                        float b_495 = mem_614[i_494];
                        float c_496 = mem_542[i_490 * Rx_92 + i_494];
                        float res_499 = a_491 * b_495;
                        float res_503 = c_496 + res_499;
                        
                        mem_542[i_490 * Rx_92 + i_494] = res_503;
                    }
                }
            }
            for (int32_t i_702 = 0; i_702 < Ry_93; i_702++) {
                for (int32_t i_703 = 0; i_703 < Rx_92; i_703++) {
                    mem_621[i_702 * Rx_92 + i_703] = mem_542[i_702 * Rx_92 +
                                                             i_703];
                }
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            for (int32_t i_704 = 0; i_704 < Ry_93; i_704++) {
                for (int32_t i_705 = 0; i_705 < Rx_92; i_705++) {
                    mem_645[i_704 * Rx_92 + i_705] = mem_621[i_704 * Rx_92 +
                                                             i_705];
                }
            }
        } else {
            for (int32_t i_706 = 0; i_706 < Ry_93; i_706++) {
                for (int32_t i_707 = 0; i_707 < Rx_92; i_707++) {
                    mem_645[i_706 * Rx_92 + i_707] = mem_542[i_706 * Rx_92 +
                                                             i_707];
                }
            }
        }
        for (int32_t i_708 = 0; i_708 < Ry_93; i_708++) {
            for (int32_t i_709 = 0; i_709 < Rx_92; i_709++) {
                mem_542[i_708 * Rx_92 + i_709] = mem_645[i_708 * Rx_92 + i_709];
            }
        }
    }
    
    int32_t tile_dim_start_712 = Ry_93 * (Ty_91 * gid_y_115 + thd_y_120);
    int32_t tile_dim_start_713 = Rx_92 * (Tx_90 * gid_x_114 + thd_x_119);
    
    for (int32_t i_714 = 0; i_714 < Ry_93; i_714++) {
        for (int32_t i_715 = 0; i_715 < Rx_92; i_715++) {
            int C_row_idx = tile_dim_start_712 + i_714,
                C_col_idx = tile_dim_start_713 + i_715;
            if (C_row_idx < M_38 && C_col_idx < N_41) {
                ((__global float *) mem_628)[C_row_idx * N_41 + C_col_idx] =
                    mem_542[i_714 * Rx_92 + i_715];
            }
        }
    }
    
  error_9:
    return;
    #undef Tk_89
    #undef Tx_90
    #undef Ty_91
    #undef Rx_92
    #undef Ry_93
    #undef tk_div_tx_96
    #undef tk_div_ty_99
    #undef TxRx_100
    #undef TyRy_101
    #undef a_loc_szz_103
    #undef b_loc_szz_105
}
