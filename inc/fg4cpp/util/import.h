#ifndef FG4CPP_UTIL_IMPORT_H
#define FG4CPP_UTIL_IMPORT_H

#ifndef FG4CPPEXPORT

#   if defined COMPILER_TYPE_CLANG  // COMPILER_TYPE
#       define FG4CPPEXPORT extern
#   elif defined COMPILER_TYPE_MSVC // COMPILER_TYPE
#       define FG4CPPEXPORT extern __declspec( dllimport )
#   else   // COMPILER_TYPE
#       error 未対応のコンパイラタイプ
#   endif  // COMPILER_TYPE

#   define FG4CPP_DECLARE_FUNCTION( _func ) \
        FG4CPPEXPORT _func;
#   define FG4CPP_FUNCTION_VOID( _func ) \
        FG4CPP_DECLARE_FUNCTION( _func )

#endif  // FG4CPPEXPORT

#endif  // FG4CPP_UTIL_IMPORT_H
