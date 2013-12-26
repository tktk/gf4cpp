#ifndef FG4CPP_DEF_STRING_STRING_H
#define FG4CPP_DEF_STRING_STRING_H

#include "fgpp/def/string/string.h"
#include "fg/def/string/string.h"

namespace fg {
    inline const FgString & toFg(
        const String &  _STRING
    )
    {
        return reinterpret_cast< const FgString & >( _STRING );
    }

    inline FgString & toFg(
        String & _string
    )
    {
        return reinterpret_cast< FgString & >( _string );
    }

    inline const FgString * toFg(
        const String *  _STRING
    )
    {
        return reinterpret_cast< const FgString * >( _STRING );
    }

    inline FgString * toFg(
        String *    _string
    )
    {
        return reinterpret_cast< FgString * >( _string );
    }

    inline const String & toFgpp(
        const FgString &    _STRING
    )
    {
        return reinterpret_cast< const String & >( _STRING );
    }

    inline String & toFgpp(
        FgString &  _string
    )
    {
        return reinterpret_cast< String & >( _string );
    }

    inline const String * toFgpp(
        const FgString *    _STRING
    )
    {
        return reinterpret_cast< const String * >( _STRING );
    }

    inline String * toFgpp(
        FgString *  _string
    )
    {
        return reinterpret_cast< String * >( _string );
    }
}

#endif  // FG4CPP_DEF_STRING_STRING_H
