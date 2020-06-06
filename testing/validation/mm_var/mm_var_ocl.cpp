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

__kernel void segmap_intragroup_147(__global int *global_failure,
                                    __local volatile
                                    int64_t *mem_590_backing_aligned_0,
                                    __local volatile
                                    int64_t *mem_587_backing_aligned_1,
                                    int32_t M_49, int32_t U_50, int32_t N_52,
                                    float res_60, int32_t gridDim_x_139,
                                    int32_t full_tiles_172, int32_t kk_357,
                                    __global unsigned char *A_mem_564, __global
                                    unsigned char *B_mem_565, __global
                                    unsigned char *mem_670)
{
    #define Tk_120 (mainziTk_115)
    #define Tx_121 (mainziTx_116)
    #define Ty_122 (mainziTy_117)
    #define Rx_123 (mainziRx_118)
    #define Ry_124 (mainziRy_119)
    #define tk_div_tx_127 (squot32(add32(mainziTk_115, sub32(mainziTx_116, 1)), mainziTx_116))
    #define tk_div_ty_130 (squot32(add32(mainziTk_115, sub32(mainziTy_117, 1)), mainziTy_117))
    #define TxRx_131 (mainziTx_116 * mainziRx_118)
    #define TyRy_132 (mainziTy_117 * mainziRy_119)
    #define a_loc_szz_134 (mainziTk_115 * (mainziTy_117 * mainziRy_119))
    #define b_loc_szz_136 (mainziRx_118 * (mainziTk_115 * mainziTx_116))
    
    const int block_dim0 = 0;
    const int block_dim1 = 1;
    const int block_dim2 = 2;
    __local volatile char *restrict mem_590_backing_1 = (__local volatile
                                                         char *) mem_590_backing_aligned_0;
    __local volatile char *restrict mem_587_backing_0 = (__local volatile
                                                         char *) mem_587_backing_aligned_1;
    
    if (*global_failure >= 0)
        return;
    
    int32_t global_tid_730;
    int32_t local_tid_731;
    int32_t group_sizze_734;
    int32_t wave_sizze_733;
    int32_t group_tid_732;
    
    global_tid_730 = get_global_id(0);
    local_tid_731 = get_local_id(0);
    group_sizze_734 = get_local_size(0);
    wave_sizze_733 = LOCKSTEP_WIDTH;
    group_tid_732 = get_group_id(0);
    
    int32_t gid_flat_147 = group_tid_732;
    int32_t ltid_pre_735 = squot32(local_tid_731, Tx_121);
    int32_t ltid_pre_736 = local_tid_731 - squot32(local_tid_731, Tx_121) *
            Tx_121;
    int32_t gid_y_146 = squot32(group_tid_732, gridDim_x_139);
    int32_t gid_x_145 = group_tid_732 - squot32(group_tid_732, gridDim_x_139) *
            gridDim_x_139;
    int32_t iii_148 = TyRy_132 * gid_y_146;
    int32_t jjj_149 = TxRx_131 * gid_x_145;
    float mem_584[Ry_124 * Rx_123];
    int32_t ltid_x_150 = ltid_pre_735;
    int32_t ltid_y_151 = ltid_pre_736;
    int32_t ltid_flat_152 = local_tid_731;
    float mem_578[Ry_124 * Rx_123];
    
    for (int32_t i_164 = 0; i_164 < Ry_124; i_164++) {
        for (int32_t i_167 = 0; i_167 < Rx_123; i_167++) {
            mem_578[i_164 * Rx_123 + i_167] = 0.0F;
        }
    }
    for (int32_t i_739 = 0; i_739 < Ry_124; i_739++) {
        for (int32_t i_740 = 0; i_740 < Rx_123; i_740++) {
            mem_584[i_739 * Rx_123 + i_740] = mem_578[i_739 * Rx_123 + i_740];
        }
    }
    barrier(CLK_LOCAL_MEM_FENCE);
    
    __local char *mem_587;
    
    mem_587 = (__local char *) mem_587_backing_0;
    
    __local char *mem_590;
    
    mem_590 = (__local char *) mem_590_backing_1;
    
    float mem_614[Ry_124];
    float mem_619[Rx_123];
    float mem_626[Ry_124 * Rx_123];
    
    for (int32_t i_173 = 0; i_173 < full_tiles_172; i_173++) {
        int32_t kk_177 = Tk_120 * i_173;
        
        for (int32_t i_178 = 0; i_178 < Ry_124; i_178++) {
            int32_t binop_y_201 = Ty_122 * i_178;
            
            for (int32_t i_180 = 0; i_180 < tk_div_tx_127; i_180++) {
                int32_t binop_y_199 = Tx_121 * i_180;
                int32_t ltid_x_182 = ltid_pre_735;
                int32_t ltid_y_183 = ltid_pre_736;
                int32_t ltid_flat_184 = local_tid_731;
                int32_t k_200 = ltid_y_183 + binop_y_199;
                int32_t i_202 = ltid_x_182 + binop_y_201;
                int32_t gtid_203 = iii_148 + i_202;
                int32_t A_col_idx_204 = kk_177 + k_200;
                bool cond_205 = slt32(gtid_203, M_49);
                float A_elem_206;
                
                if (cond_205) {
                    float A_elem_208 = ((__global float *) A_mem_564)[gtid_203 *
                                                                      U_50 +
                                                                      A_col_idx_204];
                    
                    A_elem_206 = A_elem_208;
                } else {
                    A_elem_206 = 0.0F;
                }
                
                bool cond_210 = slt32(k_200, Tk_120);
                int32_t a_loc_ind_211;
                
                if (cond_210) {
                    int32_t binop_y_212 = Tk_120 * i_202;
                    int32_t loc_fi_213 = k_200 + binop_y_212;
                    
                    a_loc_ind_211 = loc_fi_213;
                } else {
                    a_loc_ind_211 = -1;
                }
                if (sle32(0, a_loc_ind_211) && slt32(a_loc_ind_211,
                                                     a_loc_szz_134)) {
                    ((__local float *) mem_587)[a_loc_ind_211] = A_elem_206;
                }
                barrier(CLK_LOCAL_MEM_FENCE);
            }
        }
        for (int32_t i_218 = 0; i_218 < tk_div_ty_130; i_218++) {
            int32_t binop_y_239 = Ty_122 * i_218;
            
            for (int32_t i_220 = 0; i_220 < Rx_123; i_220++) {
                int32_t binop_y_241 = Tx_121 * i_220;
                int32_t ltid_x_222 = ltid_pre_735;
                int32_t ltid_y_223 = ltid_pre_736;
                int32_t ltid_flat_224 = local_tid_731;
                int32_t k_240 = ltid_x_222 + binop_y_239;
                int32_t j_242 = ltid_y_223 + binop_y_241;
                int32_t gtid_243 = jjj_149 + j_242;
                int32_t B_row_idx_244 = kk_177 + k_240;
                bool cond_245 = slt32(gtid_243, N_52);
                float B_elem_246;
                
                if (cond_245) {
                    float B_elem_248 = ((__global
                                         float *) B_mem_565)[B_row_idx_244 *
                                                             N_52 + gtid_243];
                    
                    B_elem_246 = B_elem_248;
                } else {
                    B_elem_246 = 0.0F;
                }
                
                bool cond_250 = slt32(k_240, Tk_120);
                int32_t b_loc_ind_251;
                
                if (cond_250) {
                    int32_t binop_y_252 = TxRx_131 * k_240;
                    int32_t loc_fi_253 = j_242 + binop_y_252;
                    
                    b_loc_ind_251 = loc_fi_253;
                } else {
                    b_loc_ind_251 = -1;
                }
                if (sle32(0, b_loc_ind_251) && slt32(b_loc_ind_251,
                                                     b_loc_szz_136)) {
                    ((__local float *) mem_590)[b_loc_ind_251] = B_elem_246;
                }
                barrier(CLK_LOCAL_MEM_FENCE);
            }
        }
        for (int32_t i_258 = 0; i_258 < Tk_120; i_258++) {
            int32_t binop_y_297 = TxRx_131 * i_258;
            int32_t ltid_x_260 = ltid_pre_735;
            int32_t ltid_y_261 = ltid_pre_736;
            int32_t ltid_flat_262 = local_tid_731;
            float mem_606[Ry_124];
            float mem_609[Rx_123];
            int32_t binop_x_288 = Ry_124 * ltid_x_260;
            
            for (int32_t i_287 = 0; i_287 < Ry_124; i_287++) {
                int32_t binop_x_289 = i_287 + binop_x_288;
                int32_t binop_y_290 = Tk_120 * binop_x_289;
                int32_t a_loc_ind_291 = i_258 + binop_y_290;
                
                for (int32_t i_750 = 0; i_750 < 1; i_750++) {
                    mem_606[i_287 + i_750] = ((__local
                                               float *) mem_587)[a_loc_ind_291 +
                                                                 i_750];
                }
            }
            
            int32_t binop_y_299 = Rx_123 * ltid_y_261;
            
            for (int32_t i_296 = 0; i_296 < Rx_123; i_296++) {
                int32_t binop_x_298 = i_296 + binop_y_297;
                int32_t b_loc_ind_300 = binop_x_298 + binop_y_299;
                
                for (int32_t i_752 = 0; i_752 < 1; i_752++) {
                    mem_609[i_296 + i_752] = ((__local
                                               float *) mem_590)[b_loc_ind_300 +
                                                                 i_752];
                }
            }
            for (int32_t i_753 = 0; i_753 < Ry_124; i_753++) {
                mem_614[i_753] = mem_606[i_753];
            }
            for (int32_t i_754 = 0; i_754 < Rx_123; i_754++) {
                mem_619[i_754] = mem_609[i_754];
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            
            int32_t ltid_x_305 = ltid_pre_735;
            int32_t ltid_y_306 = ltid_pre_736;
            int32_t ltid_flat_307 = local_tid_731;
            
            for (int32_t i_334 = 0; i_334 < Ry_124; i_334++) {
                float a_335 = mem_614[i_334];
                
                for (int32_t i_338 = 0; i_338 < Rx_123; i_338++) {
                    float b_339 = mem_619[i_338];
                    float c_340 = mem_584[i_334 * Rx_123 + i_338];
                    float x_343 = a_335 * b_339;
                    float res_344 = res_60 + x_343;
                    float res_348 = c_340 + res_344;
                    
                    mem_584[i_334 * Rx_123 + i_338] = res_348;
                }
            }
            for (int32_t i_757 = 0; i_757 < Ry_124; i_757++) {
                for (int32_t i_758 = 0; i_758 < Rx_123; i_758++) {
                    mem_626[i_757 * Rx_123 + i_758] = mem_584[i_757 * Rx_123 +
                                                              i_758];
                }
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            for (int32_t i_759 = 0; i_759 < Ry_124; i_759++) {
                for (int32_t i_760 = 0; i_760 < Rx_123; i_760++) {
                    mem_584[i_759 * Rx_123 + i_760] = mem_626[i_759 * Rx_123 +
                                                              i_760];
                }
            }
        }
    }
    for (int32_t i_358 = 0; i_358 < Ry_124; i_358++) {
        int32_t binop_y_383 = Ty_122 * i_358;
        
        for (int32_t i_360 = 0; i_360 < tk_div_tx_127; i_360++) {
            int32_t binop_y_381 = Tx_121 * i_360;
            int32_t ltid_x_362 = ltid_pre_735;
            int32_t ltid_y_363 = ltid_pre_736;
            int32_t ltid_flat_364 = local_tid_731;
            int32_t k_382 = ltid_y_363 + binop_y_381;
            int32_t i_384 = ltid_x_362 + binop_y_383;
            int32_t gtid_385 = iii_148 + i_384;
            int32_t A_col_idx_386 = kk_357 + k_382;
            bool binop_x_387 = slt32(gtid_385, M_49);
            bool binop_y_388 = slt32(A_col_idx_386, U_50);
            bool cond_389 = binop_x_387 && binop_y_388;
            float A_elem_390;
            
            if (cond_389) {
                float A_elem_392 = ((__global float *) A_mem_564)[gtid_385 *
                                                                  U_50 +
                                                                  A_col_idx_386];
                
                A_elem_390 = A_elem_392;
            } else {
                A_elem_390 = 0.0F;
            }
            
            bool cond_394 = slt32(k_382, Tk_120);
            int32_t a_loc_ind_395;
            
            if (cond_394) {
                int32_t binop_y_396 = Tk_120 * i_384;
                int32_t loc_fi_397 = k_382 + binop_y_396;
                
                a_loc_ind_395 = loc_fi_397;
            } else {
                a_loc_ind_395 = -1;
            }
            if (sle32(0, a_loc_ind_395) && slt32(a_loc_ind_395,
                                                 a_loc_szz_134)) {
                ((__local float *) mem_587)[a_loc_ind_395] = A_elem_390;
            }
            barrier(CLK_LOCAL_MEM_FENCE);
        }
    }
    for (int32_t i_402 = 0; i_402 < tk_div_ty_130; i_402++) {
        int32_t binop_y_425 = Ty_122 * i_402;
        
        for (int32_t i_404 = 0; i_404 < Rx_123; i_404++) {
            int32_t binop_y_427 = Tx_121 * i_404;
            int32_t ltid_x_406 = ltid_pre_735;
            int32_t ltid_y_407 = ltid_pre_736;
            int32_t ltid_flat_408 = local_tid_731;
            int32_t k_426 = ltid_x_406 + binop_y_425;
            int32_t j_428 = ltid_y_407 + binop_y_427;
            int32_t gtid_429 = jjj_149 + j_428;
            int32_t B_row_idx_430 = kk_357 + k_426;
            bool binop_x_431 = slt32(gtid_429, N_52);
            bool binop_y_432 = slt32(B_row_idx_430, U_50);
            bool cond_433 = binop_x_431 && binop_y_432;
            float B_elem_434;
            
            if (cond_433) {
                float B_elem_436 = ((__global
                                     float *) B_mem_565)[B_row_idx_430 * N_52 +
                                                         gtid_429];
                
                B_elem_434 = B_elem_436;
            } else {
                B_elem_434 = 0.0F;
            }
            
            bool cond_438 = slt32(k_426, Tk_120);
            int32_t b_loc_ind_439;
            
            if (cond_438) {
                int32_t binop_y_440 = TxRx_131 * k_426;
                int32_t loc_fi_441 = j_428 + binop_y_440;
                
                b_loc_ind_439 = loc_fi_441;
            } else {
                b_loc_ind_439 = -1;
            }
            if (sle32(0, b_loc_ind_439) && slt32(b_loc_ind_439,
                                                 b_loc_szz_136)) {
                ((__local float *) mem_590)[b_loc_ind_439] = B_elem_434;
            }
            barrier(CLK_LOCAL_MEM_FENCE);
        }
    }
    
    float mem_651[Ry_124];
    float mem_656[Rx_123];
    float mem_663[Ry_124 * Rx_123];
    float mem_687[Ry_124 * Rx_123];
    
    for (int32_t i_446 = 0; i_446 < Tk_120; i_446++) {
        int32_t cmpop_x_448 = kk_357 + i_446;
        bool cond_449 = slt32(cmpop_x_448, U_50);
        
        if (cond_449) {
            int32_t binop_y_487 = TxRx_131 * i_446;
            int64_t binop_x_642 = sext_i32_i64(Ry_124);
            int64_t bytes_641 = 4 * binop_x_642;
            int64_t binop_x_645 = sext_i32_i64(Rx_123);
            int64_t bytes_644 = 4 * binop_x_645;
            int32_t ltid_x_450 = ltid_pre_735;
            int32_t ltid_y_451 = ltid_pre_736;
            int32_t ltid_flat_452 = local_tid_731;
            float mem_643[Ry_124];
            float mem_646[Rx_123];
            int32_t binop_x_478 = Ry_124 * ltid_x_450;
            
            for (int32_t i_477 = 0; i_477 < Ry_124; i_477++) {
                int32_t binop_x_479 = i_477 + binop_x_478;
                int32_t binop_y_480 = Tk_120 * binop_x_479;
                int32_t a_loc_ind_481 = i_446 + binop_y_480;
                
                for (int32_t i_767 = 0; i_767 < 1; i_767++) {
                    mem_643[i_477 + i_767] = ((__local
                                               float *) mem_587)[a_loc_ind_481 +
                                                                 i_767];
                }
            }
            
            int32_t binop_y_489 = Rx_123 * ltid_y_451;
            
            for (int32_t i_486 = 0; i_486 < Rx_123; i_486++) {
                int32_t binop_x_488 = i_486 + binop_y_487;
                int32_t b_loc_ind_490 = binop_x_488 + binop_y_489;
                
                for (int32_t i_769 = 0; i_769 < 1; i_769++) {
                    mem_646[i_486 + i_769] = ((__local
                                               float *) mem_590)[b_loc_ind_490 +
                                                                 i_769];
                }
            }
            for (int32_t i_770 = 0; i_770 < Ry_124; i_770++) {
                mem_651[i_770] = mem_643[i_770];
            }
            for (int32_t i_771 = 0; i_771 < Rx_123; i_771++) {
                mem_656[i_771] = mem_646[i_771];
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            
            int32_t ltid_x_495 = ltid_pre_735;
            int32_t ltid_y_496 = ltid_pre_736;
            int32_t ltid_flat_497 = local_tid_731;
            
            for (int32_t i_524 = 0; i_524 < Ry_124; i_524++) {
                float a_525 = mem_651[i_524];
                
                for (int32_t i_528 = 0; i_528 < Rx_123; i_528++) {
                    float b_529 = mem_656[i_528];
                    float c_530 = mem_584[i_524 * Rx_123 + i_528];
                    float x_533 = a_525 * b_529;
                    float res_534 = res_60 + x_533;
                    float res_538 = c_530 + res_534;
                    
                    mem_584[i_524 * Rx_123 + i_528] = res_538;
                }
            }
            for (int32_t i_774 = 0; i_774 < Ry_124; i_774++) {
                for (int32_t i_775 = 0; i_775 < Rx_123; i_775++) {
                    mem_663[i_774 * Rx_123 + i_775] = mem_584[i_774 * Rx_123 +
                                                              i_775];
                }
            }
            barrier(CLK_LOCAL_MEM_FENCE);
            for (int32_t i_776 = 0; i_776 < Ry_124; i_776++) {
                for (int32_t i_777 = 0; i_777 < Rx_123; i_777++) {
                    mem_687[i_776 * Rx_123 + i_777] = mem_663[i_776 * Rx_123 +
                                                              i_777];
                }
            }
        } else {
            for (int32_t i_778 = 0; i_778 < Ry_124; i_778++) {
                for (int32_t i_779 = 0; i_779 < Rx_123; i_779++) {
                    mem_687[i_778 * Rx_123 + i_779] = mem_584[i_778 * Rx_123 +
                                                              i_779];
                }
            }
        }
        for (int32_t i_780 = 0; i_780 < Ry_124; i_780++) {
            for (int32_t i_781 = 0; i_781 < Rx_123; i_781++) {
                mem_584[i_780 * Rx_123 + i_781] = mem_687[i_780 * Rx_123 +
                                                          i_781];
            }
        }
    }
    
    int32_t reg_tile_i_782 = squot32(local_tid_731, Tx_121);
    int32_t reg_tile_i_783 = local_tid_731 - squot32(local_tid_731, Tx_121) *
            Tx_121;
    int32_t tile_dim_start_784 = Ry_124 * (Ty_122 * gid_y_146 + reg_tile_i_782);
    int32_t tile_dim_start_785 = Rx_123 * (Tx_121 * gid_x_145 + reg_tile_i_783);
    
    for (int32_t i_786 = 0; i_786 < Ry_124; i_786++) {
        for (int32_t i_787 = 0; i_787 < Rx_123; i_787++) {
          int C_row_idx = (tile_dim_start_784 + i_786);
          int C_col_idx = (tile_dim_start_785 + i_787);

          if (C_row_idx < M_49 && C_col_idx < N_52)
            ((__global float *) mem_670)[C_row_idx* N_52 + C_col_idx] =
                mem_584[i_786 * Rx_123 + i_787];
        }
    }
    
  error_9:
    return;
    #undef Tk_120
    #undef Tx_121
    #undef Ty_122
    #undef Rx_123
    #undef Ry_124
    #undef tk_div_tx_127
    #undef tk_div_ty_130
    #undef TxRx_131
    #undef TyRy_132
    #undef a_loc_szz_134
    #undef b_loc_szz_136
}
__kernel void segred_nonseg_87(__global int *global_failure, __local volatile
                               int64_t *red_arr_mem_716_backing_aligned_0,
                               __local volatile
                               int64_t *sync_arr_mem_714_backing_aligned_1,
                               int32_t num_groups_82, __global
                               unsigned char *mem_568, __global
                               unsigned char *mem_572, __global
                               unsigned char *counter_mem_704, __global
                               unsigned char *group_res_arr_mem_706,
                               int32_t num_threads_708)
{
    #define segred_group_sizze_80 (mainzisegred_group_sizze_79)
    
    const int block_dim0 = 0;
    const int block_dim1 = 1;
    const int block_dim2 = 2;
    __local volatile char *restrict red_arr_mem_716_backing_1 =
                          (__local volatile
                           char *) red_arr_mem_716_backing_aligned_0;
    __local volatile char *restrict sync_arr_mem_714_backing_0 =
                          (__local volatile
                           char *) sync_arr_mem_714_backing_aligned_1;
    
    if (*global_failure >= 0)
        return;
    
    int32_t global_tid_709;
    int32_t local_tid_710;
    int32_t group_sizze_713;
    int32_t wave_sizze_712;
    int32_t group_tid_711;
    
    global_tid_709 = get_global_id(0);
    local_tid_710 = get_local_id(0);
    group_sizze_713 = get_local_size(0);
    wave_sizze_712 = LOCKSTEP_WIDTH;
    group_tid_711 = get_group_id(0);
    
    int32_t phys_tid_87 = global_tid_709;
    __local char *sync_arr_mem_714;
    
    sync_arr_mem_714 = (__local char *) sync_arr_mem_714_backing_0;
    
    __local char *red_arr_mem_716;
    
    red_arr_mem_716 = (__local char *) red_arr_mem_716_backing_1;
    
    int32_t dummy_85 = 0;
    int32_t gtid_86 = 0;
    float x_acc_718;
    int32_t chunk_sizze_719 = smin32(squot32(3 + segred_group_sizze_80 *
                                             num_groups_82 - 1,
                                             segred_group_sizze_80 *
                                             num_groups_82), squot32(3 -
                                                                     phys_tid_87 +
                                                                     num_threads_708 -
                                                                     1,
                                                                     num_threads_708));
    float x_61;
    float x_62;
    
    // neutral-initialise the accumulators
    {
        x_acc_718 = 0.0F;
    }
    for (int32_t i_723 = 0; i_723 < chunk_sizze_719; i_723++) {
        gtid_86 = phys_tid_87 + num_threads_708 * i_723;
        // apply map function
        {
            float x_64 = ((__global float *) mem_568)[gtid_86];
            
            // save map-out results
            { }
            // load accumulator
            {
                x_61 = x_acc_718;
            }
            // load new values
            {
                x_62 = x_64;
            }
            // apply reduction operator
            {
                float res_63 = x_61 + x_62;
                
                // store in accumulator
                {
                    x_acc_718 = res_63;
                }
            }
        }
    }
    // to reduce current chunk, first store our result in memory
    {
        x_61 = x_acc_718;
        ((__local float *) red_arr_mem_716)[local_tid_710] = x_61;
    }
    barrier(CLK_LOCAL_MEM_FENCE);
    
    int32_t offset_724;
    int32_t skip_waves_725;
    float x_720;
    float x_721;
    
    offset_724 = 0;
    // participating threads read initial accumulator
    {
        if (slt32(local_tid_710, segred_group_sizze_80)) {
            x_720 = ((__local float *) red_arr_mem_716)[local_tid_710 +
                                                        offset_724];
        }
    }
    offset_724 = 1;
    while (slt32(offset_724, wave_sizze_712)) {
        if (slt32(local_tid_710 + offset_724, segred_group_sizze_80) &&
            ((local_tid_710 - squot32(local_tid_710, wave_sizze_712) *
              wave_sizze_712) & (2 * offset_724 - 1)) == 0) {
            // read array element
            {
                x_721 = ((volatile __local
                          float *) red_arr_mem_716)[local_tid_710 + offset_724];
            }
            // apply reduction operation
            {
                float res_722 = x_720 + x_721;
                
                x_720 = res_722;
            }
            // write result of operation
            {
                ((volatile __local float *) red_arr_mem_716)[local_tid_710] =
                    x_720;
            }
        }
        offset_724 *= 2;
    }
    skip_waves_725 = 1;
    while (slt32(skip_waves_725, squot32(segred_group_sizze_80 +
                                         wave_sizze_712 - 1, wave_sizze_712))) {
        barrier(CLK_LOCAL_MEM_FENCE);
        offset_724 = skip_waves_725 * wave_sizze_712;
        if (slt32(local_tid_710 + offset_724, segred_group_sizze_80) &&
            ((local_tid_710 - squot32(local_tid_710, wave_sizze_712) *
              wave_sizze_712) == 0 && (squot32(local_tid_710, wave_sizze_712) &
                                       (2 * skip_waves_725 - 1)) == 0)) {
            // read array element
            {
                x_721 = ((__local float *) red_arr_mem_716)[local_tid_710 +
                                                            offset_724];
            }
            // apply reduction operation
            {
                float res_722 = x_720 + x_721;
                
                x_720 = res_722;
            }
            // write result of operation
            {
                ((__local float *) red_arr_mem_716)[local_tid_710] = x_720;
            }
        }
        skip_waves_725 *= 2;
    }
    barrier(CLK_LOCAL_MEM_FENCE);
    // first thread saves the result in accumulator
    {
        if (local_tid_710 == 0) {
            x_acc_718 = x_720;
        }
    }
    
    int32_t old_counter_726;
    
    // first thread in group saves group result to global memory
    {
        if (local_tid_710 == 0) {
            ((__global float *) group_res_arr_mem_706)[group_tid_711 *
                                                       segred_group_sizze_80] =
                x_acc_718;
            mem_fence_global();
            old_counter_726 = atomic_add_i32_global(&((volatile __global
                                                       int *) counter_mem_704)[0],
                                                    (int) 1);
            ((__local bool *) sync_arr_mem_714)[0] = old_counter_726 ==
                num_groups_82 - 1;
        }
    }
    barrier(CLK_GLOBAL_MEM_FENCE);
    
    bool is_last_group_727 = ((__local bool *) sync_arr_mem_714)[0];
    
    if (is_last_group_727) {
        if (local_tid_710 == 0) {
            old_counter_726 = atomic_add_i32_global(&((volatile __global
                                                       int *) counter_mem_704)[0],
                                                    (int) (0 - num_groups_82));
        }
        // read in the per-group-results
        {
            if (slt32(local_tid_710, num_groups_82)) {
                x_61 = ((__global
                         float *) group_res_arr_mem_706)[local_tid_710 *
                                                         segred_group_sizze_80];
            } else {
                x_61 = 0.0F;
            }
            ((__local float *) red_arr_mem_716)[local_tid_710] = x_61;
        }
        barrier(CLK_LOCAL_MEM_FENCE);
        // reduce the per-group results
        {
            int32_t offset_728;
            int32_t skip_waves_729;
            float x_720;
            float x_721;
            
            offset_728 = 0;
            // participating threads read initial accumulator
            {
                if (slt32(local_tid_710, segred_group_sizze_80)) {
                    x_720 = ((__local float *) red_arr_mem_716)[local_tid_710 +
                                                                offset_728];
                }
            }
            offset_728 = 1;
            while (slt32(offset_728, wave_sizze_712)) {
                if (slt32(local_tid_710 + offset_728, segred_group_sizze_80) &&
                    ((local_tid_710 - squot32(local_tid_710, wave_sizze_712) *
                      wave_sizze_712) & (2 * offset_728 - 1)) == 0) {
                    // read array element
                    {
                        x_721 = ((volatile __local
                                  float *) red_arr_mem_716)[local_tid_710 +
                                                            offset_728];
                    }
                    // apply reduction operation
                    {
                        float res_722 = x_720 + x_721;
                        
                        x_720 = res_722;
                    }
                    // write result of operation
                    {
                        ((volatile __local
                          float *) red_arr_mem_716)[local_tid_710] = x_720;
                    }
                }
                offset_728 *= 2;
            }
            skip_waves_729 = 1;
            while (slt32(skip_waves_729, squot32(segred_group_sizze_80 +
                                                 wave_sizze_712 - 1,
                                                 wave_sizze_712))) {
                barrier(CLK_LOCAL_MEM_FENCE);
                offset_728 = skip_waves_729 * wave_sizze_712;
                if (slt32(local_tid_710 + offset_728, segred_group_sizze_80) &&
                    ((local_tid_710 - squot32(local_tid_710, wave_sizze_712) *
                      wave_sizze_712) == 0 && (squot32(local_tid_710,
                                                       wave_sizze_712) & (2 *
                                                                          skip_waves_729 -
                                                                          1)) ==
                     0)) {
                    // read array element
                    {
                        x_721 = ((__local
                                  float *) red_arr_mem_716)[local_tid_710 +
                                                            offset_728];
                    }
                    // apply reduction operation
                    {
                        float res_722 = x_720 + x_721;
                        
                        x_720 = res_722;
                    }
                    // write result of operation
                    {
                        ((__local float *) red_arr_mem_716)[local_tid_710] =
                            x_720;
                    }
                }
                skip_waves_729 *= 2;
            }
            // and back to memory with the final result
            {
                if (local_tid_710 == 0) {
                    ((__global float *) mem_572)[0] = x_720;
                }
            }
        }
    }
    
  error_1:
    return;
    #undef segred_group_sizze_80
}
