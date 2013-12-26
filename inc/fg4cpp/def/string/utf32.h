#ifndef FG4CPP_DEF_STRING_UTF32_H
#define FG4CPP_DEF_STRING_UTF32_H

#include "fgpp/def/string/utf32.h"
#include "fg/def/string/utf32.h"

namespace fg {
    inline const FgUtf32 & toFg(
        const Utf32 &   _UTF32
    )
    {
        return reinterpret_cast< const FgUtf32 & >( _UTF32 );
    }

    inline FgUtf32 & toFg(
        Utf32 & _utf32
    )
    {
        return reinterpret_cast< FgUtf32 & >( _utf32 );
    }

    inline const FgUtf32 * toFg(
        const Utf32 *   _UTF32
    )
    {
        return reinterpret_cast< const FgUtf32 * >( _UTF32 );
    }

    inline FgUtf32 * toFg(
        Utf32 * _utf32
    )
    {
        return reinterpret_cast< FgUtf32 * >( _utf32 );
    }

    inline const Utf32 & toFgpp(
        const FgUtf32 & _UTF32
    )
    {
        return reinterpret_cast< const Utf32 & >( _UTF32 );
    }

    inline Utf32 & toFgpp(
        FgUtf32 &   _utf32
    )
    {
        return reinterpret_cast< Utf32 & >( _utf32 );
    }

    inline const Utf32 * toFgpp(
        const FgUtf32 * _UTF32
    )
    {
        return reinterpret_cast< const Utf32 * >( _UTF32 );
    }

    inline Utf32 * toFgpp(
        FgUtf32 *   _utf32
    )
    {
        return reinterpret_cast< Utf32 * >( _utf32 );
    }
}

#endif  // FG4CPP_DEF_STRING_UTF32_H
