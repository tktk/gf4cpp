#ifndef FG4CPP_DEF_STRING_UTF16_H
#define FG4CPP_DEF_STRING_UTF16_H

#include "fgpp/def/string/utf16.h"
#include "fg/def/string/utf16.h"

namespace fg {
    inline const FgUtf16 & toFg(
        const Utf16 &   _UTF16
    )
    {
        return reinterpret_cast< const FgUtf16 & >( _UTF16 );
    }

    inline FgUtf16 & toFg(
        Utf16 & _utf16
    )
    {
        return reinterpret_cast< FgUtf16 & >( _utf16 );
    }

    inline const FgUtf16 * toFg(
        const Utf16 *   _UTF16
    )
    {
        return reinterpret_cast< const FgUtf16 * >( _UTF16 );
    }

    inline FgUtf16 * toFg(
        Utf16 * _utf16
    )
    {
        return reinterpret_cast< FgUtf16 * >( _utf16 );
    }

    inline const Utf16 & toFgpp(
        const FgUtf16 & _UTF16
    )
    {
        return reinterpret_cast< const Utf16 & >( _UTF16 );
    }

    inline Utf16 & toFgpp(
        FgUtf16 &   _utf16
    )
    {
        return reinterpret_cast< Utf16 & >( _utf16 );
    }

    inline const Utf16 * toFgpp(
        const FgUtf16 * _UTF16
    )
    {
        return reinterpret_cast< const Utf16 * >( _UTF16 );
    }

    inline Utf16 * toFgpp(
        FgUtf16 *   _utf16
    )
    {
        return reinterpret_cast< Utf16 * >( _utf16 );
    }
}

#endif  // FG4CPP_DEF_STRING_UTF16_H
