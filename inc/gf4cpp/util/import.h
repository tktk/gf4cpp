#ifndef GF4CPP_UTIL_IMPORT_H
#define GF4CPP_UTIL_IMPORT_H

#ifndef GF4CPPEXPORT
#   if defined OS_LINUX // OS
#       define GF4CPPEXPORT
#   elif defined OS_WINDOWS // OS
#       define GF4CPPEXPORT __declspec( dllimport )
#   else   // OS
#       error 未対応のOS
#   endif  // OS
#endif  // GF4CPPEXPORT

#endif  // GF4CPP_UTIL_IMPORT_H
