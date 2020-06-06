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

__kernel void segmap_intragroup_131(__global int *global_failure,
                                    int failure_is_an_option, __global
                                    int *global_failure_args, __local volatile
                                    int64_t *mem_575_backing_aligned_0,
                                    __local volatile
                                    int64_t *mem_572_backing_aligned_1,
                                    int32_t M_47, int32_t U_48, int32_t N_50,
                                    int32_t gridDim_x_123,
                                    int32_t full_tiles_156, int32_t kk_345,
                                    __global unsigned char *A_mem_556, __global
                                    unsigned char *B_mem_557, __global
                                    unsigned char *mem_655)
{
    #define Tk_104 (mainziTk_99)
    #define Tx_105 (mainziTx_100)
    #define Ty_106 (mainziTy_101)
    #define Rx_107 (mainziRx_102)
    #define Ry_108 (mainziRy_103)
    #define tk_div_tx_111 (squot32(add32(mainziTk_99, sub32(mainziTx_100, 1)), mainziTx_100))
    #define tk_div_ty_114 (squot32(add32(mainziTk_99, sub32(mainziTy_101, 1)), mainziTy_101))
    #define TxRx_115 (mainziTx_100 * mainziRx_102)
    #define TyRy_116 (mainziTy_101 * mainziRy_103)
    #define a_loc_szz_118 (mainziTk_99 * (mainziTy_101 * mainziRy_103))
    #define b_loc_szz_120 (mainziRx_102 * (mainziTk_99 * mainziTx_100))
    
    const int block_dim0 = 0;
    const int block_dim1 = 1;
    const int block_dim2 = 2;
    __local volatile char *restrict mem_575_backing_1 = (__local volatile
                                                         char *) mem_575_backing_aligned_0;
    __local volatile char *restrict mem_572_backing_0 = (__local volatile
                                                         char *) mem_572_backing_aligned_1;
    volatile __local bool local_failure;
    
    if (failure_is_an_option) {
        int failed = *global_failure >= 0;
        
        if (failed)
            return;
    }
    local_failure = false;
    barrier(CLK_LOCAL_MEM_FENCE);
    
    int32_t global_tid_685;
    int32_t local_tid_686;
    int32_t group_sizze_689;
    int32_t wave_sizze_688;
    int32_t group_tid_687;
    
    global_tid_685 = get_global_id(0);
    local_tid_686 = get_local_id(0);
    group_sizze_689 = get_local_size(0);
    wave_sizze_688 = LOCKSTEP_WIDTH;
    group_tid_687 = get_group_id(0);
    
    int32_t gid_flat_131 = group_tid_687;
    int32_t ltid_pre_690 = squot32(local_tid_686, Tx_105);
    int32_t ltid_pre_691 = local_tid_686 - squot32(local_tid_686, Tx_105) *
            Tx_105;
    int32_t gid_y_130 = squot32(group_tid_687, gridDim_x_123);
    int32_t gid_x_129 = group_tid_687 - squot32(group_tid_687, gridDim_x_123) *
            gridDim_x_123;
    int32_t iii_132 = TyRy_116 * gid_y_130;
    int32_t jjj_133 = TxRx_115 * gid_x_129;
    int32_t mem_569[Ry_108 * Rx_107];
    int32_t thd_y_135 = ltid_pre_690;
    int32_t thd_x_134 = ltid_pre_691;
    int32_t ltid_flat_136 = local_tid_686;
    int32_t mem_563[Ry_108 * Rx_107];
    
    for (int32_t i_148 = 0; i_148 < Ry_108; i_148++) {
        for (int32_t i_151 = 0; i_151 < Rx_107; i_151++) {
            mem_563[i_148 * Rx_107 + i_151] = 0;
        }
    }
    for (int32_t i_694 = 0; i_694 < Ry_108; i_694++) {
        for (int32_t i_695 = 0; i_695 < Rx_107; i_695++) {
            mem_569[i_694 * Rx_107 + i_695] = mem_563[i_694 * Rx_107 + i_695];
        }
    }
    barrier(CLK_LOCAL_MEM_FENCE);
    
    __local char *mem_572;
    
    mem_572 = (__local char *) mem_572_backing_0;
    
    __local char *mem_575;
    
    mem_575 = (__local char *) mem_575_backing_1;
    
    int32_t mem_599[Ry_108];
    int32_t mem_604[Rx_107];
    int32_t mem_611[Ry_108 * Rx_107];
    
    for (int32_t i_157 = 0; i_157 < full_tiles_156; i_157++) {
        int32_t kk_161 = Tk_104 * i_157;
        
        for (int32_t i_162 = 0; i_162 < Ry_108; i_162++) {
            int32_t binop_y_185 = Ty_106 * i_162;
            
            for (int32_t i_164 = 0; i_164 < tk_div_tx_111; i_164++) {
                int32_t binop_y_183 = Tx_105 * i_164;
                int32_t thd_y_167 = ltid_pre_690;
                int32_t thd_x_166 = ltid_pre_691;
                int32_t ltid_flat_168 = local_tid_686;
                int32_t k_184 = thd_x_166 + binop_y_183;
                int32_t i_186 = thd_y_167 + binop_y_185;
                int32_t gtid_187 = iii_132 + i_186;
                int32_t A_col_idx_188 = kk_161 + k_184;
                bool cond_189 = slt32(gtid_187, M_47);
                int32_t A_elem_190;
                
                if (cond_189) {
                    int32_t A_elem_192 = ((__global
                                           int32_t *) A_mem_556)[gtid_187 *
                                                                 U_48 +
                                                                 A_col_idx_188];
                    
                    A_elem_190 = A_elem_192;
                } else {
                    A_elem_190 = 0;
                }
                
                bool cond_194 = slt32(k_184, Tk_104);
                int32_t a_loc_ind_195;
                
                if (cond_194) {
                    int32_t binop_y_196 = Tk_104 * i_186;
                    int32_t loc_fi_197 = k_184 + binop_y_196;
                    
                    a_loc_ind_195 = loc_fi_197;
                } else {
                    a_loc_ind_195 = -1;
                }
                if (sle32(0, a_loc_ind_195) && slt32(a_loc_ind_195,
                                                     a_loc_szz_118)) {
                    ((__local int32_t *) mem_572)[a_loc_ind_195] = A_elem_190;
                }
                barrier(CLK_LOCAL_MEM_FENCE);
            }
        }
        for (int32_t i_202 = 0; i_202 < tk_div_ty_114; i_202++) {
            int32_t binop_y_223 = Ty_106 * i_202;
            
            for (int32_t i_204 = 0; i_204 < Rx_107; i_204++) {
                int32_t binop_y_225 = Tx_105 * i_204;
                int32_t thd_y_207 = ltid_pre_690;
                int32_t thd_x_206 = ltid_pre_691;
                int32_t ltid_flat_208 = local_tid_686;
                int32_t k_224 = thd_y_207 + binop_y_223;
                int32_t j_226 = thd_x_206 + binop_y_225;
                int32_t gtid_227 = jjj_133 + j_226;
                int32_t B_row_idx_228 = kk_161 + k_224;
                bool cond_229 = slt32(gtid_227, N_50);
                int32_t B_elem_230;
                
                if (cond_229) {
                    int32_t B_elem_232 = ((__global
                                           int32_t *) B_mem_557)[B_row_idx_228 *
                                                                 N_50 +
                                                                 gtid_227];
                    
                    B_elem_230 = B_elem_232;
                } else {
                    B_elem_230 = 0;
                }
                
                bool cond_234 = slt32(k_224, Tk_104);
                int32_t b_loc_ind_235;
                
                if (cond_234) {
                    int32_t binop_y_236 = TxRx_115 * k_224;
                    int32_t loc_fi_237 = j_226 + binop_y_236;
                    
                    b_loc_ind_235 = loc_fi_237;
                } else {
                    b_loc_ind_235 = -1;
                }
                if (sle32(0, b_loc_ind_235) && slt32(b_loc_ind_235,
                                                     b_loc_szz_120)) {
                    ((__local int32_t *) mem_575)[b_loc_ind_235] = B_elem_230;
                }
                barrier(CLK_LOCAL_MEM_FENCE);
            }
        }
        for (int32_t i_242 = 0; i_242 < Tk_104; i_242++) {
            int32_t binop_y_281 = TxRx_115 * i_242;
            int32_t thd_y_245 = ltid_pre_690;
            int32_t thd_x_244 = ltid_pre_691;
            int32_t ltid_flat_246 = local_tid_686;
            int32_t mem_591[Ry_108];
            int32_t mem_594[Rx_107];
            int32_t binop_x_272 = Ry_108 * thd_y_245;
            
            for (int32_t i_271 = 0; i_271 < Ry_108; i_271++) {
                int32_t binop_x_273 = i_271 + binop_x_272;
                int32_t binop_y_274 = Tk_104 * binop_x_273;
                int32_t a_loc_ind_275 = i_242 + binop_y_274;
                
                for (int32_t i_705 = 0; i_705 < 1; i_705++) {
                    mem_591[i_271 + i_705] = ((__local
                                               int32_t *) mem_572)[a_loc_ind_275 +
                                                                   i_705];
                }
            }
            
            int32_t binop_y_283 = Rx_107 * thd_x_244;
            
            for (int32_t i_280 = 0; i_280 < Rx_107; i_280++) {
                int32_t binop_x_282 = i_280 + binop_y_281;
                int32_t b_loc_ind_284 = binop_x_282 + binop_y_283;
                
                // B_loc :: [Tk][Tx*Rx]
                // B_loc_row_idx = TxRx * k
                // B_loc_col_idx = i_280 + Rx * thd_x
                // f(i_280) = (TxRx*k) + i_280 + Rx * thd_x
                mem_594[i_280] = ((__local int32_t *) mem_575)[b_loc_ind_284];
            }
            for (int32_t i_708 = 0; i_708 < Ry_108; i_708++) {
                mem_599[i_708] = mem_591[i_708];
            }
            for (int32_t i_709 = 0; i_709 < Rx_107; i_709++) {
                mem_604[i_709] = mem_594[i_709];
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            
            int32_t thd_y_290 = ltid_pre_690;
            int32_t thd_x_289 = ltid_pre_691;
            int32_t ltid_flat_291 = local_tid_686;
            
            for (int32_t i_320 = 0; i_320 < Ry_108; i_320++) {
                int32_t a_321 = mem_599[i_320];
                
                for (int32_t i_324 = 0; i_324 < Rx_107; i_324++) {
                    int32_t b_325 = mem_604[i_324];
                    int32_t c_326 = mem_569[i_320 * Rx_107 + i_324];

                    int j = jjj_133 + i_324 + Rx_107 * thd_x_289;
                    if (j < N_50)
                    {

                        bool zzero_329 = b_325 == 0;
                        bool nonzzero_330 = !zzero_329;
                        bool nonzzero_cert_331;
                        
                        if (!nonzzero_330) {
                            if (atomic_cmpxchg_i32_global(global_failure, -1, 0) ==
                                -1) {
                                ;
                            }
                            local_failure = true;
                            goto error_4;
                        }
                        
                        int32_t res_332 = sdiv32(a_321, b_325);
                        int32_t res_336 = add32(c_326, res_332);
                        
                        mem_569[i_320 * Rx_107 + i_324] = res_336;
                    }
                }
            }
            for (int32_t i_712 = 0; i_712 < Ry_108; i_712++) {
                for (int32_t i_713 = 0; i_713 < Rx_107; i_713++) {
                    mem_611[i_712 * Rx_107 + i_713] = mem_569[i_712 * Rx_107 +
                                                              i_713];
                }
            }
            
          error_4:
            barrier(CLK_LOCAL_MEM_FENCE);
            if (local_failure)
                return;
            barrier(CLK_LOCAL_MEM_FENCE);
            for (int32_t i_714 = 0; i_714 < Ry_108; i_714++) {
                for (int32_t i_715 = 0; i_715 < Rx_107; i_715++) {
                    mem_569[i_714 * Rx_107 + i_715] = mem_611[i_714 * Rx_107 +
                                                              i_715];
                }
            }
        }
    }
    for (int32_t i_346 = 0; i_346 < Ry_108; i_346++) {
        int32_t binop_y_371 = Ty_106 * i_346;
        
        for (int32_t i_348 = 0; i_348 < tk_div_tx_111; i_348++) {
            int32_t binop_y_369 = Tx_105 * i_348;
            int32_t thd_y_351 = ltid_pre_690;
            int32_t thd_x_350 = ltid_pre_691;
            int32_t ltid_flat_352 = local_tid_686;
            int32_t k_370 = thd_x_350 + binop_y_369;
            int32_t i_372 = thd_y_351 + binop_y_371;
            int32_t gtid_373 = iii_132 + i_372;
            int32_t A_col_idx_374 = kk_345 + k_370;
            bool binop_x_375 = slt32(gtid_373, M_47);
            bool binop_y_376 = slt32(A_col_idx_374, U_48);
            bool cond_377 = binop_x_375 && binop_y_376;
            int32_t A_elem_378;
            
            if (cond_377) {
                int32_t A_elem_380 = ((__global int32_t *) A_mem_556)[gtid_373 *
                                                                      U_48 +
                                                                      A_col_idx_374];
                
                A_elem_378 = A_elem_380;
            } else {
                A_elem_378 = 0;
            }
            
            bool cond_382 = slt32(k_370, Tk_104);
            int32_t a_loc_ind_383;
            
            if (cond_382) {
                int32_t binop_y_384 = Tk_104 * i_372;
                int32_t loc_fi_385 = k_370 + binop_y_384;
                
                a_loc_ind_383 = loc_fi_385;
            } else {
                a_loc_ind_383 = -1;
            }
            if (sle32(0, a_loc_ind_383) && slt32(a_loc_ind_383,
                                                 a_loc_szz_118)) {
                ((__local int32_t *) mem_572)[a_loc_ind_383] = A_elem_378;
            }
            barrier(CLK_LOCAL_MEM_FENCE);
        }
    }
    for (int32_t i_390 = 0; i_390 < tk_div_ty_114; i_390++) {
        int32_t binop_y_413 = Ty_106 * i_390;
        
        for (int32_t i_392 = 0; i_392 < Rx_107; i_392++) {
            int32_t binop_y_415 = Tx_105 * i_392;
            int32_t thd_y_395 = ltid_pre_690;
            int32_t thd_x_394 = ltid_pre_691;
            int32_t ltid_flat_396 = local_tid_686;
            int32_t k_414 = thd_y_395 + binop_y_413;
            int32_t j_416 = thd_x_394 + binop_y_415;
            int32_t gtid_417 = jjj_133 + j_416;
            int32_t B_row_idx_418 = kk_345 + k_414;
            bool binop_x_419 = slt32(gtid_417, N_50);
            bool binop_y_420 = slt32(B_row_idx_418, U_48);
            bool cond_421 = binop_x_419 && binop_y_420;
            int32_t B_elem_422;
            
            if (cond_421) {
                int32_t B_elem_424 = ((__global
                                       int32_t *) B_mem_557)[B_row_idx_418 *
                                                             N_50 + gtid_417];
                
                B_elem_422 = B_elem_424;
            } else {
                B_elem_422 = 0;
            }
            
            bool cond_426 = slt32(k_414, Tk_104);
            int32_t b_loc_ind_427;
            
            if (cond_426) {
                int32_t binop_y_428 = TxRx_115 * k_414;
                int32_t loc_fi_429 = j_416 + binop_y_428;
                
                b_loc_ind_427 = loc_fi_429;
            } else {
                b_loc_ind_427 = -1;
            }
            if (sle32(0, b_loc_ind_427) && slt32(b_loc_ind_427,
                                                 b_loc_szz_120)) {
                ((__local int32_t *) mem_575)[b_loc_ind_427] = B_elem_422;
            }
            barrier(CLK_LOCAL_MEM_FENCE);
        }
    }
    
    int32_t mem_636[Ry_108];
    int32_t mem_641[Rx_107];
    int32_t mem_648[Ry_108 * Rx_107];
    int32_t mem_672[Ry_108 * Rx_107];
    
    for (int32_t i_434 = 0; i_434 < Tk_104; i_434++) {
        int32_t cmpop_x_436 = kk_345 + i_434;
        bool cond_437 = slt32(cmpop_x_436, U_48);
        
        if (cond_437) {
            int32_t binop_y_475 = TxRx_115 * i_434;
            int64_t binop_x_627 = sext_i32_i64(Ry_108);
            int64_t bytes_626 = 4 * binop_x_627;
            int64_t binop_x_630 = sext_i32_i64(Rx_107);
            int64_t bytes_629 = 4 * binop_x_630;
            int32_t thd_y_439 = ltid_pre_690;
            int32_t thd_x_438 = ltid_pre_691;
            int32_t ltid_flat_440 = local_tid_686;
            int32_t mem_628[Ry_108];
            int32_t mem_631[Rx_107];
            int32_t binop_x_466 = Ry_108 * thd_y_439;
            
            for (int32_t i_465 = 0; i_465 < Ry_108; i_465++) {
                int32_t binop_x_467 = i_465 + binop_x_466;
                int32_t binop_y_468 = Tk_104 * binop_x_467;
                int32_t a_loc_ind_469 = i_434 + binop_y_468;
                
                for (int32_t i_722 = 0; i_722 < 1; i_722++) {
                    mem_628[i_465 + i_722] = ((__local
                                               int32_t *) mem_572)[a_loc_ind_469 +
                                                                   i_722];
                }
            }
            
            int32_t binop_y_477 = Rx_107 * thd_x_438;
            
            for (int32_t i_474 = 0; i_474 < Rx_107; i_474++) {
                int32_t binop_x_476 = i_474 + binop_y_475;
                int32_t b_loc_ind_478 = binop_x_476 + binop_y_477;
                
                for (int32_t i_724 = 0; i_724 < 1; i_724++) {
                    mem_631[i_474 + i_724] = ((__local
                                               int32_t *) mem_575)[b_loc_ind_478 +
                                                                   i_724];
                }
            }
            for (int32_t i_725 = 0; i_725 < Ry_108; i_725++) {
                mem_636[i_725] = mem_628[i_725];
            }
            for (int32_t i_726 = 0; i_726 < Rx_107; i_726++) {
                mem_641[i_726] = mem_631[i_726];
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            
            int32_t thd_y_484 = ltid_pre_690;
            int32_t thd_x_483 = ltid_pre_691;
            int32_t ltid_flat_485 = local_tid_686;
            
            for (int32_t i_514 = 0; i_514 < Ry_108; i_514++) {
                int32_t a_515 = mem_636[i_514];
                
                for (int32_t i_518 = 0; i_518 < Rx_107; i_518++) {
                    int j = jjj_133 + i_518 + Rx_107 * thd_x_483;
                    if (j < N_50)
                    {
                      int32_t b_519 = mem_641[i_518];
                      int32_t c_520 = mem_569[i_514 * Rx_107 + i_518];

                      bool zzero_523 = b_519 == 0;
                      bool nonzzero_524 = !zzero_523;
                      bool nonzzero_cert_525;
                      
                      if (!nonzzero_524) {
                          if (atomic_cmpxchg_i32_global(global_failure, -1, 1) ==
                              -1) {
                              ;
                          }
                          local_failure = true;
                          goto error_8;
                      }
                      
                      int32_t res_526 = sdiv32(a_515, b_519);
                      int32_t res_530 = add32(c_520, res_526);
                      
                      mem_569[i_514 * Rx_107 + i_518] = res_530;
                  }
                }
            }
            for (int32_t i_729 = 0; i_729 < Ry_108; i_729++) {
                for (int32_t i_730 = 0; i_730 < Rx_107; i_730++) {
                    mem_648[i_729 * Rx_107 + i_730] = mem_569[i_729 * Rx_107 +
                                                              i_730];
                }
            }
            
          error_8:
            barrier(CLK_LOCAL_MEM_FENCE);
            if (local_failure)
                return;
            barrier(CLK_LOCAL_MEM_FENCE);
            for (int32_t i_731 = 0; i_731 < Ry_108; i_731++) {
                for (int32_t i_732 = 0; i_732 < Rx_107; i_732++) {
                    mem_672[i_731 * Rx_107 + i_732] = mem_648[i_731 * Rx_107 + i_732];
                }
            }
        } else {
            for (int32_t i_733 = 0; i_733 < Ry_108; i_733++) {
                for (int32_t i_734 = 0; i_734 < Rx_107; i_734++) {
                    mem_672[i_733 * Rx_107 + i_734] = mem_569[i_733 * Rx_107 + i_734];
                }
            }
        }
        for (int32_t i_735 = 0; i_735 < Ry_108; i_735++) {
            for (int32_t i_736 = 0; i_736 < Rx_107; i_736++) {
                mem_569[i_735 * Rx_107 + i_736] = mem_672[i_735 * Rx_107 + i_736];
            }
        }
    }
    
    int32_t reg_tile_i_737 = squot32(local_tid_686, Tx_105);
    int32_t reg_tile_i_738 = local_tid_686 - squot32(local_tid_686, Tx_105) *
            Tx_105;
    int32_t tile_dim_start_739 = Ry_108 * (Ty_106 * gid_y_130 + reg_tile_i_737);
    int32_t tile_dim_start_740 = Rx_107 * (Tx_105 * gid_x_129 + reg_tile_i_738);
    
    for (int32_t i_741 = 0; i_741 < Ry_108; i_741++) {
        for (int32_t i_742 = 0; i_742 < Rx_107; i_742++) {

int C_row_idx = (tile_dim_start_739 + i_741);
int C_col_idx = (tile_dim_start_740 + i_742);
if (C_row_idx < M_47 && C_col_idx < N_50)
            ((__global int32_t *) mem_655)[C_row_idx * N_50 + C_col_idx] =
                mem_569[i_741 * Rx_107 + i_742];
        }
    }
    
  error_9:
    return;
    #undef Tk_104
    #undef Tx_105
    #undef Ty_106
    #undef Rx_107
    #undef Ry_108
    #undef tk_div_tx_111
    #undef tk_div_ty_114
    #undef TxRx_115
    #undef TyRy_116
    #undef a_loc_szz_118
    #undef b_loc_szz_120
}
