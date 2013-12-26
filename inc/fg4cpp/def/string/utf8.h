#ifndef FG4CPP_DEF_STRING_UTF8_H
#define FG4CPP_DEF_STRING_UTF8_H

#include "fgpp/def/string/utf8.h"
#include "fg/def/string/utf8.h"

namespace fg {
    inline const FgUtf8 & toFg(
        const Utf8 &    _UTF8
    )
    {
        return reinterpret_cast< const FgUtf8 & >( _UTF8 );
    }

    inline FgUtf8 & toFg(
        Utf8 &  _utf8
    )
    {
        return reinterpret_cast< FgUtf8 & >( _utf8 );
    }

    inline const FgUtf8 * toFg(
        const Utf8 *    _UTF8
    )
    {
        return reinterpret_cast< const FgUtf8 * >( _UTF8 );
    }

    inline FgUtf8 * toFg(
        Utf8 *  _utf8
    )
    {
        return reinterpret_cast< FgUtf8 * >( _utf8 );
    }

    inline const Utf8 & toFgpp(
        const FgUtf8 &  _UTF8
    )
    {
        return reinterpret_cast< const Utf8 & >( _UTF8 );
    }

    inline Utf8 & toFgpp(
        FgUtf8 &    _utf8
    )
    {
        return reinterpret_cast< Utf8 & >( _utf8 );
    }

    inline const Utf8 * toFgpp(
        const FgUtf8 *  _UTF8
    )
    {
        return reinterpret_cast< const Utf8 * >( _UTF8 );
    }

    inline Utf8 * toFgpp(
        FgUtf8 *    _utf8
    )
    {
        return reinterpret_cast< Utf8 * >( _utf8 );
    }
}

#endif  // FG4CPP_DEF_STRING_UTF8_H
