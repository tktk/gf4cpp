#ifndef FG4CPP_UTIL_EXPORTDUMMY_H
#define FG4CPP_UTIL_EXPORTDUMMY_H

#include "fg4cpp/util/exportcommon.h"

#define FG4CPP_DEFINE_FUNCTION( _func, _dummyProc ) \
    FG4CPPEXPORT _func { _dummyProc };
#define FG4CPP_FUNCTION_VOID( _func ) \
    FG4CPP_DEFINE_FUNCTION( _func, )

#endif  // FG4CPP_UTIL_EXPORTDUMMY_H
