#ifndef FG4CPP_UTIL_EXPORTCOMMON_H
#define FG4CPP_UTIL_EXPORTCOMMON_H

#if defined COMPILER_TYPE_CLANG // COMPILER_TYPE
#   define FG4CPPEXPORT extern __attribute__( ( visibility( "default" ) ) )
#elif defined COMPILER_TYPE_MSVC    // COMPILER_TYPE
#   define FG4CPPEXPORT extern __declspec( dllexport )
#else   // COMPILER_TYPE
#   error 未対応のコンパイラタイプ
#endif  // COMPILER_TYPE

#endif  // FG4CPP_UTIL_EXPORTCOMMON_H
