cmake_minimum_required(VERSION 3.6)

set(TARGET_NAME numpy)
project(${TARGET_NAME})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 99)

# [IGE]: tweaks for platforms
if(DEFINED ANDROID_PLATFORM)
    set (ANDROID 1)
    if(ANDROID_ABI STREQUAL "armeabi-v7a")
        add_compile_options(-marm -march=armv7-a -mtune=cortex-a15 -mfpu=neon-fp16 -mfloat-abi=softfp)
    elseif(ANDROID_ABI STREQUAL "x86")
        add_compile_options(-march=atom -m32 -msse -msse2 -msse3 -mssse3 -mfpmath=sse -mstackrealign)
    elseif(ANDROID_ABI STREQUAL "arm64-v8a")
        add_compile_options(-march=armv8-a+simd+sve -mtune=cortex-a53 -D__ARM_NEON -D__ARM_NEON__)
    elseif(ANDROID_ABI STREQUAL "x86_64")
        add_compile_options(-march=atom -m64 -msse -msse2 -msse3 -mssse3 -msse4.1 -msse4.2 -mfpmath=sse)
    endif()
    if(CMAKE_BUILD_TYPE STREQUAL "Release")
        add_compile_options(-g0 -Ofast)
    else(CMAKE_BUILD_TYPE STREQUAL "Debug")
        add_compile_options(-Og)
    endif()
elseif(MSVC)
    add_compile_options(/MP)
elseif(IOS)
    if(CMAKE_BUILD_TYPE STREQUAL "Release")
        add_compile_options(-g0 -Ofast)
    endif()
endif()
# [/IGE]

set(CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR} ${CMAKE_MODULE_PATH})
set(CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR} ${CMAKE_PREFIX_PATH})

if(${APP_STYLE} MATCHES "SHARED")
    find_package (Python3 ${PYTHON_VERSION} EXACT REQUIRED COMPONENTS Development)
else()
    find_package(Python REQUIRED)
    set (Python3_INCLUDE_DIRS ${Python_INCLUDE_DIRS})
    set (Python3_LIBRARIES ${Python_LIBRARIES})
endif()

set (NUMPY_INCLUDE
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/include
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/include/numpy
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/src/common
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/src/umath
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/src/multiarray
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/src/npysort
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/src/npymath
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/include
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/legacy
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/philox
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/mt19937
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/pcg64
)

file(GLOB NUMPY_SRC
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/src/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/src/common/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/src/npymath/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/src/npysort/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/src/umath/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/src/multiarray/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/linalg/lapack_lite/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/linalg/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/fft/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/aligned_malloc/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/distributions/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/entropy/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/legacy/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/mt19937/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/sfc64/**.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/splitmix64/**.c
)

set (NUMPY_SRC ${NUMPY_SRC}
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/pcg64/pcg64.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/pcg64/pcg64-benchmark.c
  ${CMAKE_CURRENT_SOURCE_DIR}/numpy/random/src/philox/philox.c
)

add_library(${TARGET_NAME} STATIC ${NUMPY_SRC})
target_include_directories(${TARGET_NAME} PRIVATE ${NUMPY_INCLUDE} ${Python3_INCLUDE_DIRS})
target_compile_definitions(${TARGET_NAME} PRIVATE RK_NO_WINCRYPT _FILE_OFFSET_BITS=64 _LARGEFILE_SOURCE=1 _LARGEFILE64_SOURCE=1 NPY_NO_DEPRECATED_API=0 BLAS_SYMBOL_PREFIX=np_)


# Install Targets
set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/install)

install(TARGETS
  ${TARGET_NAME}
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
)

file(GLOB_RECURSE PUBLIC_INCLUDE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/include/*.h*")
foreach(HEADER ${PUBLIC_INCLUDE_FILES})
    file(RELATIVE_PATH HEADER_RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}/numpy/core/include/" "${HEADER}")
    get_filename_component(DIR ${HEADER_RELATIVE} DIRECTORY)
    install(FILES ${HEADER} DESTINATION include/${DIR})
endforeach()


