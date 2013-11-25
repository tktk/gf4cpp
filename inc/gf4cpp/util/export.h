#ifndef GF4CPP_UTIL_EXPORT_H
#define GF4CPP_UTIL_EXPORT_H

#if defined OS_LINUX    // OS
#   define GF4CPPEXPORT extern __attribute__( ( visibility( "default" ) ) )
#elif defined OS_WINDOWS    // OS
#   define GF4CPPEXPORT extern __declspec( dllexport )
#else   // OS
#   error 未対応のOS
#endif  // OS

#endif  // GF4CPP_UTIL_EXPORT_H
