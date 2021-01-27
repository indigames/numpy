#line 1 "numpy\\core\\src\\common\\templ_common.h.src"

/*
 *****************************************************************************
 **       This file was autogenerated from a template  DO NOT EDIT!!!!      **
 **       Changes should be made to the original source (.src) file         **
 *****************************************************************************
 */

#line 1
#ifndef __NPY_TYPED_COMMON_INC
#define __NPY_TYPED_COMMON_INC

/* utility functions that profit from templates */

#include "numpy/npy_common.h"

#line 16

/*
 * writes result of a * b into r
 * returns 1 if a * b overflowed else returns 0
 * 
 * These functions are not designed to work if either a or b is negative, but
 * that is not checked. Could use absolute values and adjust the sign if that
 * functionality was desired.
 */
static NPY_INLINE int
npy_mul_with_overflow_int(npy_int * r, npy_int a, npy_int b)
{
#ifdef HAVE___BUILTIN_MUL_OVERFLOW
    return __builtin_mul_overflow(a, b, r);
#else
    const npy_int half_sz = ((npy_int)1 << ((sizeof(a) * 8 - 1 ) / 2));

    *r = a * b;
    /*
     * avoid expensive division on common no overflow case
     */
    if (NPY_UNLIKELY((a | b) >= half_sz) &&
            a != 0 && b > NPY_MAX_INT / a) {
        return 1;
    }
    return 0;
#endif
}

#line 16

/*
 * writes result of a * b into r
 * returns 1 if a * b overflowed else returns 0
 * 
 * These functions are not designed to work if either a or b is negative, but
 * that is not checked. Could use absolute values and adjust the sign if that
 * functionality was desired.
 */
static NPY_INLINE int
npy_mul_with_overflow_uint(npy_uint * r, npy_uint a, npy_uint b)
{
#ifdef HAVE___BUILTIN_MUL_OVERFLOW
    return __builtin_mul_overflow(a, b, r);
#else
    const npy_uint half_sz = ((npy_uint)1 << ((sizeof(a) * 8 - 1 ) / 2));

    *r = a * b;
    /*
     * avoid expensive division on common no overflow case
     */
    if (NPY_UNLIKELY((a | b) >= half_sz) &&
            a != 0 && b > NPY_MAX_UINT / a) {
        return 1;
    }
    return 0;
#endif
}

#line 16

/*
 * writes result of a * b into r
 * returns 1 if a * b overflowed else returns 0
 * 
 * These functions are not designed to work if either a or b is negative, but
 * that is not checked. Could use absolute values and adjust the sign if that
 * functionality was desired.
 */
static NPY_INLINE int
npy_mul_with_overflow_long(npy_long * r, npy_long a, npy_long b)
{
#ifdef HAVE___BUILTIN_MUL_OVERFLOW
    return __builtin_mul_overflow(a, b, r);
#else
    const npy_long half_sz = ((npy_long)1 << ((sizeof(a) * 8 - 1 ) / 2));

    *r = a * b;
    /*
     * avoid expensive division on common no overflow case
     */
    if (NPY_UNLIKELY((a | b) >= half_sz) &&
            a != 0 && b > NPY_MAX_LONG / a) {
        return 1;
    }
    return 0;
#endif
}

#line 16

/*
 * writes result of a * b into r
 * returns 1 if a * b overflowed else returns 0
 * 
 * These functions are not designed to work if either a or b is negative, but
 * that is not checked. Could use absolute values and adjust the sign if that
 * functionality was desired.
 */
static NPY_INLINE int
npy_mul_with_overflow_ulong(npy_ulong * r, npy_ulong a, npy_ulong b)
{
#ifdef HAVE___BUILTIN_MUL_OVERFLOW
    return __builtin_mul_overflow(a, b, r);
#else
    const npy_ulong half_sz = ((npy_ulong)1 << ((sizeof(a) * 8 - 1 ) / 2));

    *r = a * b;
    /*
     * avoid expensive division on common no overflow case
     */
    if (NPY_UNLIKELY((a | b) >= half_sz) &&
            a != 0 && b > NPY_MAX_ULONG / a) {
        return 1;
    }
    return 0;
#endif
}

#line 16

/*
 * writes result of a * b into r
 * returns 1 if a * b overflowed else returns 0
 * 
 * These functions are not designed to work if either a or b is negative, but
 * that is not checked. Could use absolute values and adjust the sign if that
 * functionality was desired.
 */
static NPY_INLINE int
npy_mul_with_overflow_longlong(npy_longlong * r, npy_longlong a, npy_longlong b)
{
#ifdef HAVE___BUILTIN_MUL_OVERFLOW
    return __builtin_mul_overflow(a, b, r);
#else
    const npy_longlong half_sz = ((npy_longlong)1 << ((sizeof(a) * 8 - 1 ) / 2));

    *r = a * b;
    /*
     * avoid expensive division on common no overflow case
     */
    if (NPY_UNLIKELY((a | b) >= half_sz) &&
            a != 0 && b > NPY_MAX_LONGLONG / a) {
        return 1;
    }
    return 0;
#endif
}

#line 16

/*
 * writes result of a * b into r
 * returns 1 if a * b overflowed else returns 0
 * 
 * These functions are not designed to work if either a or b is negative, but
 * that is not checked. Could use absolute values and adjust the sign if that
 * functionality was desired.
 */
static NPY_INLINE int
npy_mul_with_overflow_ulonglong(npy_ulonglong * r, npy_ulonglong a, npy_ulonglong b)
{
#ifdef HAVE___BUILTIN_MUL_OVERFLOW
    return __builtin_mul_overflow(a, b, r);
#else
    const npy_ulonglong half_sz = ((npy_ulonglong)1 << ((sizeof(a) * 8 - 1 ) / 2));

    *r = a * b;
    /*
     * avoid expensive division on common no overflow case
     */
    if (NPY_UNLIKELY((a | b) >= half_sz) &&
            a != 0 && b > NPY_MAX_ULONGLONG / a) {
        return 1;
    }
    return 0;
#endif
}

#line 16

/*
 * writes result of a * b into r
 * returns 1 if a * b overflowed else returns 0
 * 
 * These functions are not designed to work if either a or b is negative, but
 * that is not checked. Could use absolute values and adjust the sign if that
 * functionality was desired.
 */
static NPY_INLINE int
npy_mul_with_overflow_intp(npy_intp * r, npy_intp a, npy_intp b)
{
#ifdef HAVE___BUILTIN_MUL_OVERFLOW
    return __builtin_mul_overflow(a, b, r);
#else
    const npy_intp half_sz = ((npy_intp)1 << ((sizeof(a) * 8 - 1 ) / 2));

    *r = a * b;
    /*
     * avoid expensive division on common no overflow case
     */
    if (NPY_UNLIKELY((a | b) >= half_sz) &&
            a != 0 && b > NPY_MAX_INTP / a) {
        return 1;
    }
    return 0;
#endif
}


#endif

