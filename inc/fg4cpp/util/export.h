#ifndef FG4CPP_UTIL_EXPORT_H
#define FG4CPP_UTIL_EXPORT_H

#include "fg4cpp/util/exportcommon.h"

#define FG4CPP_DECLARE_FUNCTION( _func ) \
    FG4CPPEXPORT _func;
#define FG4CPP_FUNCTION_VOID( _func ) \
    FG4CPP_DECLARE_FUNCTION( _func )

#endif  // FG4CPP_UTIL_EXPORT_H
