#line 1 "numpy\\core\\src\\common\\npy_cpu_features.c.src"

/*
 *****************************************************************************
 **       This file was autogenerated from a template  DO NOT EDIT!!!!      **
 **       Changes should be made to the original source (.src) file         **
 *****************************************************************************
 */

#line 1
#include "npy_cpu_features.h"
#include "numpy/npy_common.h" // for NPY_INLINE
#include "numpy/npy_cpu.h" // To guarantee of having CPU definitions in scope.

/******************** Private Definitions *********************/

// Hold all CPU features boolean values
static unsigned char npy__cpu_have[NPY_CPU_FEATURE_MAX];

/******************** Private Declarations *********************/

// Almost detect all CPU features in runtime
static void
npy__cpu_init_features(void);

/******************** Public Definitions *********************/

NPY_VISIBILITY_HIDDEN int
npy_cpu_have(int feature_id)
{
    if (feature_id <= NPY_CPU_FEATURE_NONE || feature_id >= NPY_CPU_FEATURE_MAX)
        return 0;
    return npy__cpu_have[feature_id];
}

NPY_VISIBILITY_HIDDEN int
npy_cpu_init(void)
{
    npy__cpu_init_features();
    return 0;
}

NPY_VISIBILITY_HIDDEN PyObject *
npy_cpu_features_dict(void)
{
    PyObject *dict = PyDict_New();
    if (dict) {
    #line 48
        if (PyDict_SetItemString(dict, "MMX",
            npy__cpu_have[NPY_CPU_FEATURE_MMX] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "SSE",
            npy__cpu_have[NPY_CPU_FEATURE_SSE] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "SSE2",
            npy__cpu_have[NPY_CPU_FEATURE_SSE2] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "SSE3",
            npy__cpu_have[NPY_CPU_FEATURE_SSE3] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "SSSE3",
            npy__cpu_have[NPY_CPU_FEATURE_SSSE3] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "SSE41",
            npy__cpu_have[NPY_CPU_FEATURE_SSE41] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "POPCNT",
            npy__cpu_have[NPY_CPU_FEATURE_POPCNT] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "SSE42",
            npy__cpu_have[NPY_CPU_FEATURE_SSE42] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX",
            npy__cpu_have[NPY_CPU_FEATURE_AVX] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "F16C",
            npy__cpu_have[NPY_CPU_FEATURE_F16C] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "XOP",
            npy__cpu_have[NPY_CPU_FEATURE_XOP] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "FMA4",
            npy__cpu_have[NPY_CPU_FEATURE_FMA4] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "FMA3",
            npy__cpu_have[NPY_CPU_FEATURE_FMA3] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX2",
            npy__cpu_have[NPY_CPU_FEATURE_AVX2] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512F",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512F] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512CD",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512CD] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512ER",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512ER] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512PF",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512PF] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX5124FMAPS",
            npy__cpu_have[NPY_CPU_FEATURE_AVX5124FMAPS] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX5124VNNIW",
            npy__cpu_have[NPY_CPU_FEATURE_AVX5124VNNIW] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512VPOPCNTDQ",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512VPOPCNTDQ] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512VL",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512VL] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512BW",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512BW] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512DQ",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512DQ] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512VNNI",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512VNNI] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512IFMA",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512IFMA] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512VBMI",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512VBMI] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512VBMI2",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512VBMI2] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512BITALG",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512BITALG] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512_KNL",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512_KNL] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512_KNM",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512_KNM] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512_SKX",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512_SKX] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512_CLX",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512_CLX] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512_CNL",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512_CNL] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "AVX512_ICL",
            npy__cpu_have[NPY_CPU_FEATURE_AVX512_ICL] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "VSX",
            npy__cpu_have[NPY_CPU_FEATURE_VSX] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "VSX2",
            npy__cpu_have[NPY_CPU_FEATURE_VSX2] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "VSX3",
            npy__cpu_have[NPY_CPU_FEATURE_VSX3] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "NEON",
            npy__cpu_have[NPY_CPU_FEATURE_NEON] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "NEON_FP16",
            npy__cpu_have[NPY_CPU_FEATURE_NEON_FP16] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "NEON_VFPV4",
            npy__cpu_have[NPY_CPU_FEATURE_NEON_VFPV4] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "ASIMD",
            npy__cpu_have[NPY_CPU_FEATURE_ASIMD] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "FPHP",
            npy__cpu_have[NPY_CPU_FEATURE_FPHP] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "ASIMDHP",
            npy__cpu_have[NPY_CPU_FEATURE_ASIMDHP] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "ASIMDDP",
            npy__cpu_have[NPY_CPU_FEATURE_ASIMDDP] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
#line 48
        if (PyDict_SetItemString(dict, "ASIMDFHM",
            npy__cpu_have[NPY_CPU_FEATURE_ASIMDFHM] ? Py_True : Py_False) < 0) {
            Py_DECREF(dict);
            return NULL;
        }
    
    }
    return dict;
}

/****************************************************************
 * This section is reserved to defining @npy__cpu_init_features
 * for each CPU architecture, please try to keep it clean. Ty
 ****************************************************************/

/***************** X86 ******************/

#if defined(NPY_CPU_AMD64) || defined(NPY_CPU_X86)

#ifdef _MSC_VER
    #include <intrin.h>
#elif defined(__INTEL_COMPILER)
    #include <immintrin.h>
#endif

static int
npy__cpu_getxcr0(void)
{
#if defined(_MSC_VER) || defined (__INTEL_COMPILER)
    return _xgetbv(0);
#elif defined(__GNUC__) || defined(__clang__)
    /* named form of xgetbv not supported on OSX, so must use byte form, see:
     * https://github.com/asmjit/asmjit/issues/78
    */
    unsigned int eax, edx;
    __asm(".byte 0x0F, 0x01, 0xd0" : "=a"(eax), "=d"(edx) : "c"(0));
    return eax;
#else
    return 0;
#endif
}

static void
npy__cpu_cpuid(int reg[4], int func_id)
{
#if defined(_MSC_VER)
    __cpuidex(reg, func_id, 0);
#elif defined(__INTEL_COMPILER)
    __cpuid(reg, func_id);
#elif defined(__GNUC__) || defined(__clang__)
    #if defined(NPY_CPU_X86) && defined(__PIC__)
        // %ebx may be the PIC register
        __asm__("xchg{l}\t{%%}ebx, %1\n\t"
                "cpuid\n\t"
                "xchg{l}\t{%%}ebx, %1\n\t"
                : "=a" (reg[0]), "=r" (reg[1]), "=c" (reg[2]),
                  "=d" (reg[3])
                : "a" (func_id), "c" (0)
        );
    #else
        __asm__("cpuid\n\t"
                : "=a" (reg[0]), "=b" (reg[1]), "=c" (reg[2]),
                  "=d" (reg[3])
                : "a" (func_id), "c" (0)
        );
    #endif
#else
    reg[0] = 0;
#endif
}

static void
npy__cpu_init_features(void)
{
    memset(npy__cpu_have, 0, sizeof(npy__cpu_have[0]) * NPY_CPU_FEATURE_MAX);

    // validate platform support
    int reg[] = {0, 0, 0, 0};
    npy__cpu_cpuid(reg, 0);
    if (reg[0] == 0) {
       npy__cpu_have[NPY_CPU_FEATURE_MMX]  = 1;
       npy__cpu_have[NPY_CPU_FEATURE_SSE]  = 1;
       npy__cpu_have[NPY_CPU_FEATURE_SSE2] = 1;
       #ifdef NPY_CPU_AMD64
           npy__cpu_have[NPY_CPU_FEATURE_SSE3] = 1;
       #endif
       return;
    }

    npy__cpu_cpuid(reg, 1);
    npy__cpu_have[NPY_CPU_FEATURE_MMX]    = (reg[3] & (1 << 23)) != 0;
    npy__cpu_have[NPY_CPU_FEATURE_SSE]    = (reg[3] & (1 << 25)) != 0;
    npy__cpu_have[NPY_CPU_FEATURE_SSE2]   = (reg[3] & (1 << 26)) != 0;
    npy__cpu_have[NPY_CPU_FEATURE_SSE3]   = (reg[2] & (1 << 0))  != 0;
    npy__cpu_have[NPY_CPU_FEATURE_SSSE3]  = (reg[2] & (1 << 9))  != 0;
    npy__cpu_have[NPY_CPU_FEATURE_SSE41]  = (reg[2] & (1 << 19)) != 0;
    npy__cpu_have[NPY_CPU_FEATURE_POPCNT] = (reg[2] & (1 << 23)) != 0;
    npy__cpu_have[NPY_CPU_FEATURE_SSE42]  = (reg[2] & (1 << 20)) != 0;
    npy__cpu_have[NPY_CPU_FEATURE_F16C]   = (reg[2] & (1 << 29)) != 0;

    // check OSXSAVE
    if ((reg[2] & (1 << 27)) == 0)
        return;
    // check AVX OS support
    int xcr = npy__cpu_getxcr0();
    if ((xcr & 6) != 6)
        return;
    npy__cpu_have[NPY_CPU_FEATURE_AVX]    = (reg[2] & (1 << 28)) != 0;
    if (!npy__cpu_have[NPY_CPU_FEATURE_AVX])
        return;
    npy__cpu_have[NPY_CPU_FEATURE_FMA3]   = (reg[2] & (1 << 12)) != 0;

    // second call to the cpuid to get extended AMD feature bits
    npy__cpu_cpuid(reg, 0x80000001);
    npy__cpu_have[NPY_CPU_FEATURE_XOP]    = (reg[2] & (1 << 11)) != 0;
    npy__cpu_have[NPY_CPU_FEATURE_FMA4]   = (reg[2] & (1 << 16)) != 0;

    // third call to the cpuid to get extended AVX2 & AVX512 feature bits
    npy__cpu_cpuid(reg, 7);
    npy__cpu_have[NPY_CPU_FEATURE_AVX2]   = (reg[1] & (1 << 5))  != 0;
    if (!npy__cpu_have[NPY_CPU_FEATURE_AVX2])
        return;
    // detect AVX2 & FMA3
    npy__cpu_have[NPY_CPU_FEATURE_FMA]    = npy__cpu_have[NPY_CPU_FEATURE_FMA3];

    // check AVX512 OS support
    if ((xcr & 0xe6) != 0xe6)
        return;
    npy__cpu_have[NPY_CPU_FEATURE_AVX512F]  = (reg[1] & (1 << 16)) != 0;
    npy__cpu_have[NPY_CPU_FEATURE_AVX512CD] = (reg[1] & (1 << 28)) != 0;
    if (npy__cpu_have[NPY_CPU_FEATURE_AVX512F] && npy__cpu_have[NPY_CPU_FEATURE_AVX512CD]) {
        // Knights Landing
        npy__cpu_have[NPY_CPU_FEATURE_AVX512PF]        = (reg[1] & (1 << 26)) != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX512ER]        = (reg[1] & (1 << 27)) != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX512_KNL]      = npy__cpu_have[NPY_CPU_FEATURE_AVX512ER] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX512PF];
        // Knights Mill
        npy__cpu_have[NPY_CPU_FEATURE_AVX512VPOPCNTDQ] = (reg[2] & (1 << 14)) != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX5124VNNIW]    = (reg[3] & (1 << 2))  != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX5124FMAPS]    = (reg[3] & (1 << 3))  != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX512_KNM]      = npy__cpu_have[NPY_CPU_FEATURE_AVX512_KNL] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX5124FMAPS] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX5124VNNIW] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX512VPOPCNTDQ];

        // Skylake-X
        npy__cpu_have[NPY_CPU_FEATURE_AVX512DQ]        = (reg[1] & (1 << 17)) != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX512BW]        = (reg[1] & (1 << 30)) != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX512VL]        = (reg[1] & (1 << 31)) != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX512_SKX]      = npy__cpu_have[NPY_CPU_FEATURE_AVX512BW] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX512DQ] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX512VL];
        // Cascade Lake
        npy__cpu_have[NPY_CPU_FEATURE_AVX512VNNI]      = (reg[2] & (1 << 11)) != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX512_CLX]      = npy__cpu_have[NPY_CPU_FEATURE_AVX512_SKX] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX512VNNI];

        // Cannon Lake
        npy__cpu_have[NPY_CPU_FEATURE_AVX512IFMA]      = (reg[1] & (1 << 21)) != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX512VBMI]      = (reg[2] & (1 << 1))  != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX512_CNL]      = npy__cpu_have[NPY_CPU_FEATURE_AVX512_SKX] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX512IFMA] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX512VBMI];
        // Ice Lake
        npy__cpu_have[NPY_CPU_FEATURE_AVX512VBMI2]     = (reg[2] & (1 << 6))  != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX512BITALG]    = (reg[2] & (1 << 12)) != 0;
        npy__cpu_have[NPY_CPU_FEATURE_AVX512_ICL]      = npy__cpu_have[NPY_CPU_FEATURE_AVX512_CLX] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX512_CNL] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX512VBMI2] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX512BITALG] &&
                                                         npy__cpu_have[NPY_CPU_FEATURE_AVX512VPOPCNTDQ];
    }
}

/***************** POWER ******************/

#elif defined(NPY_CPU_PPC64) || defined(NPY_CPU_PPC64LE)

#ifdef __linux__
    #include <sys/auxv.h>
    #ifndef AT_HWCAP2
        #define AT_HWCAP2 26
    #endif
    #ifndef PPC_FEATURE2_ARCH_3_00
        #define PPC_FEATURE2_ARCH_3_00 0x00800000
    #endif
#endif

static void
npy__cpu_init_features(void)
{
    memset(npy__cpu_have, 0, sizeof(npy__cpu_have[0]) * NPY_CPU_FEATURE_MAX);
#ifdef __linux__
    unsigned int hwcap = getauxval(AT_HWCAP);
    if ((hwcap & PPC_FEATURE_HAS_VSX) == 0)
        return;

    hwcap = getauxval(AT_HWCAP2);
    if (hwcap & PPC_FEATURE2_ARCH_3_00)
    {
        npy__cpu_have[NPY_CPU_FEATURE_VSX]  =
        npy__cpu_have[NPY_CPU_FEATURE_VSX2] =
        npy__cpu_have[NPY_CPU_FEATURE_VSX3] = 1;
        return;
    }
    npy__cpu_have[NPY_CPU_FEATURE_VSX2] = (hwcap & PPC_FEATURE2_ARCH_2_07) != 0;
    npy__cpu_have[NPY_CPU_FEATURE_VSX]  = 1;
// TODO: AIX, FreeBSD
#else
    npy__cpu_have[NPY_CPU_FEATURE_VSX]  = 1;
    #if defined(NPY_CPU_PPC64LE) || defined(NPY_HAVE_VSX2)
    npy__cpu_have[NPY_CPU_FEATURE_VSX2] = 1;
    #endif
    #ifdef NPY_HAVE_VSX3
    npy__cpu_have[NPY_CPU_FEATURE_VSX3] = 1;
    #endif
#endif
}

/***************** ARM ******************/

#elif defined(__arm__) || defined(__aarch64__)

static NPY_INLINE void
npy__cpu_init_features_arm8(void)
{
    npy__cpu_have[NPY_CPU_FEATURE_NEON]       =
    npy__cpu_have[NPY_CPU_FEATURE_NEON_FP16]  =
    npy__cpu_have[NPY_CPU_FEATURE_NEON_VFPV4] =
    npy__cpu_have[NPY_CPU_FEATURE_ASIMD]      = 1;
}

#ifdef __linux__
/*
 * we aren't sure of what kind kernel or clib we deal with
 * so we play it safe
*/
#include <stdio.h>
#include <fcntl.h>

#define NPY__HWCAP  16
#define NPY__HWCAP2 26

// arch/arm/include/uapi/asm/hwcap.h
#define NPY__HWCAP_HALF   (1 << 1)
#define NPY__HWCAP_NEON   (1 << 12)
#define NPY__HWCAP_VFPv3  (1 << 13)
#define NPY__HWCAP_VFPv4  (1 << 16)
#define NPY__HWCAP2_AES   (1 << 0)
#define NPY__HWCAP2_PMULL (1 << 1)
#define NPY__HWCAP2_SHA1  (1 << 2)
#define NPY__HWCAP2_SHA2  (1 << 3)
#define NPY__HWCAP2_CRC32 (1 << 4)
// arch/arm64/include/uapi/asm/hwcap.h
#define NPY__HWCAP_FP       (1 << 0)
#define NPY__HWCAP_ASIMD    (1 << 1)
#define NPY__HWCAP_FPHP     (1 << 9)
#define NPY__HWCAP_ASIMDHP  (1 << 10)
#define NPY__HWCAP_ASIMDDP  (1 << 20)
#define NPY__HWCAP_ASIMDFHM (1 << 23)

__attribute__((weak)) unsigned long getauxval(unsigned long); // linker should handle it
static int
npy__cpu_init_features_linux(void)
{
    unsigned long hwcap = 0, hwcap2 = 0;
    if (getauxval != 0) {
        hwcap = getauxval(NPY__HWCAP);
    #ifdef __arm__
        hwcap2 = getauxval(NPY__HWCAP2);
    #endif
    } else {
        unsigned long auxv[2];
        int fd = open("/proc/self/auxv", O_RDONLY);
        if (fd >= 0) {
            while (read(fd, &auxv, sizeof(auxv)) == sizeof(auxv)) {
                if (auxv[0] == NPY__HWCAP) {
                    hwcap = auxv[1];
                }
            #ifdef __arm__
                else if (auxv[0] == NPY__HWCAP2) {
                    hwcap2 = auxv[1];
                }
            #endif
                // detect the end
                else if (auxv[0] == 0 && auxv[1] == 0) {
                    break;
                }
            }
            close(fd);
        }
    }
    if (hwcap == 0 && hwcap2 == 0) {
        /*
         * FIXME: failback to compiler definitions,
         * BTW we can parse /proc/cpuinfo for badly patched kernels
        */
        return 0;
    }
#ifdef __arm__
    // Detect Arm8 (aarch32 state)
    if ((hwcap2 & NPY__HWCAP2_AES)  || (hwcap2 & NPY__HWCAP2_SHA1)  ||
        (hwcap2 & NPY__HWCAP2_SHA2) || (hwcap2 & NPY__HWCAP2_PMULL) ||
        (hwcap2 & NPY__HWCAP2_CRC32))
    {
        hwcap = hwcap2;
#else
    if (1)
    {
        if (!(hwcap & (NPY__HWCAP_FP | NPY__HWCAP_ASIMD))) {
            // Is this could happen? maybe disabled by kernel
            // BTW this will break the baseline of AARCH64
            return 1;
        }
#endif
        npy__cpu_have[NPY_CPU_FEATURE_FPHP]       = (hwcap & NPY__HWCAP_FPHP)     != 0;
        npy__cpu_have[NPY_CPU_FEATURE_ASIMDHP]    = (hwcap & NPY__HWCAP_ASIMDHP)  != 0;
        npy__cpu_have[NPY_CPU_FEATURE_ASIMDDP]    = (hwcap & NPY__HWCAP_ASIMDDP)  != 0;
        npy__cpu_have[NPY_CPU_FEATURE_ASIMDFHM]   = (hwcap & NPY__HWCAP_ASIMDFHM) != 0;
        npy__cpu_init_features_arm8();
    } else {
        npy__cpu_have[NPY_CPU_FEATURE_NEON]       = (hwcap & NPY__HWCAP_NEON)   != 0;
        if (npy__cpu_have[NPY_CPU_FEATURE_NEON]) {
            npy__cpu_have[NPY_CPU_FEATURE_NEON_FP16]  = (hwcap & NPY__HWCAP_HALF) != 0;
            npy__cpu_have[NPY_CPU_FEATURE_NEON_VFPV4] = (hwcap & NPY__HWCAP_VFPv4) != 0;
        }
    }
    return 1;
}
#endif

static void
npy__cpu_init_features(void)
{
    memset(npy__cpu_have, 0, sizeof(npy__cpu_have[0]) * NPY_CPU_FEATURE_MAX);
#ifdef __linux__
    if (npy__cpu_init_features_linux())
        return;
#endif
    // We have nothing else todo
#if defined(NPY_HAVE_NEON_ARM8) || defined(__aarch64__) || (defined(__ARM_ARCH) && __ARM_ARCH >= 8)
    #if defined(NPY_HAVE_FPHP) || defined(__ARM_FEATURE_FP16_VECTOR_ARITHMETIC)
    npy__cpu_have[NPY_CPU_FEATURE_FPHP] = 1;
    #endif
    #if defined(NPY_HAVE_ASIMDHP) || defined(__ARM_FEATURE_FP16_VECTOR_ARITHMETIC)
    npy__cpu_have[NPY_CPU_FEATURE_ASIMDHP] = 1;
    #endif
    #if defined(NPY_HAVE_ASIMDDP) || defined(__ARM_FEATURE_DOTPROD)
    npy__cpu_have[NPY_CPU_FEATURE_ASIMDDP] = 1;
    #endif
    #if defined(NPY_HAVE_ASIMDFHM) || defined(__ARM_FEATURE_FP16FML)
    npy__cpu_have[NPY_CPU_FEATURE_ASIMDFHM] = 1;
    #endif
    npy__cpu_init_features_arm8();
#else
    #if defined(NPY_HAVE_NEON) || defined(__ARM_NEON__)
        npy__cpu_have[NPY_CPU_FEATURE_NEON] = 1;
    #endif
    #if defined(NPY_HAVE_NEON_FP16) || defined(__ARM_FP16_FORMAT_IEEE) || (defined(__ARM_FP) && (__ARM_FP & 2))
        npy__cpu_have[NPY_CPU_FEATURE_NEON_FP16] = npy__cpu_have[NPY_CPU_FEATURE_NEON];
    #endif
    #if defined(NPY_HAVE_NEON_VFPV4) || defined(__ARM_FEATURE_FMA)
        npy__cpu_have[NPY_CPU_FEATURE_NEON_VFPV4] = npy__cpu_have[NPY_CPU_FEATURE_NEON];
    #endif
#endif
}

/*********** Unsupported ARCH ***********/
#else
static void
npy__cpu_init_features(void)
{
}
#endif

