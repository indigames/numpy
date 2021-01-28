/// [IGE]: redefinition, rem
// #define SIZEOF_PY_INTPTR_T 8
// #define SIZEOF_OFF_T 4
// #define SIZEOF_PY_LONG_LONG 8
/// [/IGE]

#define MATHLIB 
#define HAVE_SIN 1
#define HAVE_COS 1
#define HAVE_TAN 1
#define HAVE_SINH 1
#define HAVE_COSH 1
#define HAVE_TANH 1
#define HAVE_FABS 1
#define HAVE_FLOOR 1
#define HAVE_CEIL 1
#define HAVE_SQRT 1
#define HAVE_LOG10 1
#define HAVE_LOG 1
#define HAVE_EXP 1
#define HAVE_ASIN 1
#define HAVE_ACOS 1
#define HAVE_ATAN 1
#define HAVE_FMOD 1
#define HAVE_MODF 1
#define HAVE_FREXP 1
#define HAVE_LDEXP 1
#define HAVE_EXPM1 1
#define HAVE_LOG1P 1
#define HAVE_ACOSH 1
#define HAVE_ASINH 1
#define HAVE_ATANH 1
#define HAVE_RINT 1
#define HAVE_TRUNC 1
#define HAVE_EXP2 1
#define HAVE_LOG2 1
#define HAVE_ATAN2 1
#define HAVE_POW 1
#define HAVE_NEXTAFTER 1
#define HAVE_STRTOLL 1
#define HAVE_STRTOULL 1
#define HAVE_CBRT 1

/// [IGE]: Only Windows
#if defined(WIN32)
#define HAVE_XMMINTRIN_H 1
#define HAVE_EMMINTRIN_H 1
#define HAVE_IMMINTRIN_H 1
#define HAVE__MM_LOAD_PS 1
#define HAVE__MM_PREFETCH 1
#define HAVE__MM_LOAD_PD 1
#endif
/// [/IGE]

#define HAVE___DECLSPEC_THREAD_ 1
#define HAVE_SINF 1
#define HAVE_COSF 1
#define HAVE_TANF 1
#define HAVE_SINHF 1
#define HAVE_COSHF 1
#define HAVE_TANHF 1
#define HAVE_FLOORF 1
#define HAVE_CEILF 1
#define HAVE_RINTF 1
#define HAVE_TRUNCF 1
#define HAVE_SQRTF 1
#define HAVE_LOG10F 1
#define HAVE_LOGF 1
#define HAVE_LOG1PF 1
#define HAVE_EXPF 1
#define HAVE_EXPM1F 1
#define HAVE_ASINF 1
#define HAVE_ACOSF 1
#define HAVE_ATANF 1
#define HAVE_ASINHF 1
#define HAVE_ACOSHF 1
#define HAVE_ATANHF 1
#define HAVE_ATAN2F 1
#define HAVE_POWF 1
#define HAVE_FMODF 1
#define HAVE_MODFF 1
#define HAVE_EXP2F 1
#define HAVE_LOG2F 1
#define HAVE_COPYSIGNF 1
#define HAVE_NEXTAFTERF 1
#define HAVE_CBRTF 1
#define HAVE_RINTL 1
#define HAVE_TRUNCL 1
#define HAVE_LOG1PL 1
#define HAVE_EXPM1L 1
#define HAVE_ASINHL 1
#define HAVE_ACOSHL 1
#define HAVE_ATANHL 1
#define HAVE_EXP2L 1
#define HAVE_LOG2L 1
#define HAVE_COPYSIGNL 1
#define HAVE_NEXTAFTERL 1
#define HAVE_CBRTL 1
#define HAVE_DECL_SIGNBIT
// #define HAVE_DECL_ISFINITE ///[IGE]: redefinition
#define HAVE_COMPLEX_H 1

/// [IGE]: Fix android linking
#if defined(__ANDROID__)
    #define HAVE_CIMAG 1
    #define HAVE_CONJ 1
    #define HAVE_CPROJ 1
    #define HAVE_CREAL 1
    #define HAVE_CIMAGF 1
    #define HAVE_CONJF 1
    #define HAVE_CPROJF 1
    #define HAVE_CREALF 1
    #define HAVE_CIMAGL 1
    #define HAVE_CONJL 1
    #define HAVE_CPROJL 1
    #define HAVE_CREALL 1
#else
    #define HAVE_CABS 1
    #define HAVE_CACOS 1
    #define HAVE_CACOSH 1
    #define HAVE_CARG 1
    #define HAVE_CASIN 1
    #define HAVE_CASINH 1
    #define HAVE_CATAN 1
    #define HAVE_CATANH 1
    #define HAVE_CCOS 1
    #define HAVE_CCOSH 1
    #define HAVE_CEXP 1
    #define HAVE_CIMAG 1
    #define HAVE_CLOG 1
    #define HAVE_CONJ 1
    #define HAVE_CPOW 1
    #define HAVE_CPROJ 1
    #define HAVE_CREAL 1
    #define HAVE_CSIN 1
    #define HAVE_CSINH 1
    #define HAVE_CSQRT 1
    #define HAVE_CTAN 1
    #define HAVE_CTANH 1
    #define HAVE_CABSF 1
    #define HAVE_CACOSF 1
    #define HAVE_CACOSHF 1
    #define HAVE_CARGF 1
    #define HAVE_CASINF 1
    #define HAVE_CASINHF 1
    #define HAVE_CATANF 1
    #define HAVE_CATANHF 1
    #define HAVE_CCOSF 1
    #define HAVE_CCOSHF 1
    #define HAVE_CEXPF 1
    #define HAVE_CIMAGF 1
    #define HAVE_CLOGF 1
    #define HAVE_CONJF 1
    #define HAVE_CPOWF 1
    #define HAVE_CPROJF 1
    #define HAVE_CREALF 1
    #define HAVE_CSINF 1
    #define HAVE_CSINHF 1
    #define HAVE_CSQRTF 1
    #define HAVE_CTANF 1
    #define HAVE_CTANHF 1
    #define HAVE_CABSL 1
    #define HAVE_CACOSL 1
    #define HAVE_CACOSHL 1
    #define HAVE_CARGL 1
    #define HAVE_CASINL 1
    #define HAVE_CASINHL 1
    #define HAVE_CATANL 1
    #define HAVE_CATANHL 1
    #define HAVE_CCOSL 1
    #define HAVE_CCOSHL 1
    #define HAVE_CEXPL 1
    #define HAVE_CIMAGL 1
    #define HAVE_CLOGL 1
    #define HAVE_CONJL 1
    #define HAVE_CPOWL 1
    #define HAVE_CPROJL 1
    #define HAVE_CREALL 1
    #define HAVE_CSINL 1
    #define HAVE_CSINHL 1
    #define HAVE_CSQRTL 1
    #define HAVE_CTANL 1
    #define HAVE_CTANHL 1
#endif // __ANDROID__
/// [/IGE]

#define __NPY_PRIVATE_NO_SIGNAL
#define DISTUTILS_USE_SDK
#define FORCE_NO_LONG_DOUBLE_FORMATTING
#define NPY_RESTRICT restrict
#define NPY_RELAXED_STRIDES_CHECKING 1
#define HAVE_LDOUBLE_IEEE_DOUBLE_LE 1
#ifndef __cplusplus
/* #undef inline */
#endif

#ifndef _NPY_NPY_CONFIG_H_
#error config.h should never be included directly, include npy_config.h instead
#endif
