#ifndef FG4CPP_UTIL_EXPORTCOMMON_H
#define FG4CPP_UTIL_EXPORTCOMMON_H

#if defined OS_LINUX    // OS
#   define FG4CPPEXPORT extern __attribute__( ( visibility( "default" ) ) )
#elif defined OS_WINDOWS    // OS
#   define FG4CPPEXPORT extern __declspec( dllexport )
#else   // OS
#   error 未対応のOS
#endif  // OS

#endif  // FG4CPP_UTIL_EXPORTCOMMON_H
