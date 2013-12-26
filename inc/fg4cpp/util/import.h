#ifndef FG4CPP_UTIL_IMPORT_H
#define FG4CPP_UTIL_IMPORT_H

#ifndef FG4CPPEXPORT

#   if defined OS_LINUX // OS
#       define FG4CPPEXPORT extern
#   elif defined OS_WINDOWS // OS
#       define FG4CPPEXPORT extern __declspec( dllimport )
#   else   // OS
#       error 未対応のOS
#   endif  // OS

#   define FG4CPP_DECLARE_FUNCTION( _func ) \
        FG4CPPEXPORT _func;
#   define FG4CPP_FUNCTION_VOID( _func ) \
        FG4CPP_DECLARE_FUNCTION( _func )

#endif  // FG4CPPEXPORT

#endif  // FG4CPP_UTIL_IMPORT_H
