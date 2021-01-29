#define NPY_SIZEOF_SHORT SIZEOF_SHORT
#define NPY_SIZEOF_INT SIZEOF_INT
#define NPY_SIZEOF_LONG SIZEOF_LONG
#define NPY_SIZEOF_FLOAT 4
#define NPY_SIZEOF_COMPLEX_FLOAT 8
#define NPY_SIZEOF_DOUBLE 8
#define NPY_SIZEOF_COMPLEX_DOUBLE 16
#define NPY_SIZEOF_LONGDOUBLE 8
#define NPY_SIZEOF_COMPLEX_LONGDOUBLE 16

/// [IGE]: check 64bits environments
#if defined(__LP64__) || defined(_WIN64) || (defined(__x86_64__) && !defined(__ILP32__)) || defined(_M_X64) || defined(__ia64) || defined (_M_IA64) || defined(__aarch64__) || defined(__powerpc64__)
    #define NPY_SIZEOF_PY_INTPTR_T 8
#else
    #define NPY_SIZEOF_PY_INTPTR_T 4
#endif
/// [/IGE]

#define NPY_SIZEOF_OFF_T 4
#define NPY_SIZEOF_PY_LONG_LONG 8
#define NPY_SIZEOF_LONGLONG 8
#define NPY_NO_SIGNAL 1
#define NPY_NO_SMP 0
#define NPY_HAVE_DECL_ISNAN
#define NPY_HAVE_DECL_ISINF
#define NPY_HAVE_DECL_SIGNBIT
#define NPY_HAVE_DECL_ISFINITE
#define NPY_USE_C99_COMPLEX 1
#define NPY_RELAXED_STRIDES_CHECKING 1
#define NPY_USE_C99_FORMATS 1
#define NPY_VISIBILITY_HIDDEN 
#define NPY_ABI_VERSION 0x01000009
#define NPY_API_VERSION 0x0000000D

#ifndef __STDC_FORMAT_MACROS
#define __STDC_FORMAT_MACROS 1
#endif
