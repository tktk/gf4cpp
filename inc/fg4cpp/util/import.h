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
#endif  // FG4CPPEXPORT

#endif  // FG4CPP_UTIL_IMPORT_H
