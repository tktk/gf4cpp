#ifndef GF4CPP_STRING_UTF32_H
#define GF4CPP_STRING_UTF32_H

#include "gfpp/string/utf32.h"
#include "gf/string/utf32.h"

namespace gf {
    inline const GfUtf32 & toGf(
        const gf::Utf32 &   _UTF32
    )
    {
        return reinterpret_cast< const GfUtf32 & >( _UTF32 );
    }

    inline GfUtf32 & toGf(
        gf::Utf32 & _utf32
    )
    {
        return reinterpret_cast< GfUtf32 & >( _utf32 );
    }

    inline const GfUtf32 * toGf(
        const gf::Utf32 *   _UTF32
    )
    {
        return reinterpret_cast< const GfUtf32 * >( _UTF32 );
    }

    inline GfUtf32 * toGf(
        gf::Utf32 * _utf32
    )
    {
        return reinterpret_cast< GfUtf32 * >( _utf32 );
    }

    inline const gf::Utf32 & toGfpp(
        const GfUtf32 & _UTF32
    )
    {
        return reinterpret_cast< const gf::Utf32 & >( _UTF32 );
    }

    inline gf::Utf32 & toGfpp(
        GfUtf32 &   _utf32
    )
    {
        return reinterpret_cast< gf::Utf32 & >( _utf32 );
    }

    inline const gf::Utf32 * toGfpp(
        const GfUtf32 * _UTF32
    )
    {
        return reinterpret_cast< const gf::Utf32 * >( _UTF32 );
    }

    inline gf::Utf32 * toGfpp(
        GfUtf32 *   _utf32
    )
    {
        return reinterpret_cast< gf::Utf32 * >( _utf32 );
    }
}

#include "gf4cpp/string/string.h"
#include "gf4cpp/string/utf8.h"
#include "gf4cpp/string/utf16.h"
#include "gfpp/common/primitives.h"

namespace gf {
    inline Utf32 * newUtf32(
    )
    {
        return toGfpp( gfUtf32New() );
    }

    inline Utf32 * clone(
        const Utf32 &   _UTF32
    )
    {
        return toGfpp(
            gfUtf32Clone(
                toGf( &_UTF32 )
            )
        );
    }

    inline Utf32 * newUtf32(
        const Utf32Char *   _FROM
    )
    {
        return toGfpp(
            gfUtf32NewFromCharPtr(
                _FROM
            )
        );
    }

    inline Utf32 * newUtf32(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfUtf32NewFromCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf32 * newUtf32FromString(
        const String &  _FROM
    )
    {
        return toGfpp(
            gfUtf32NewFromString(
                toGf( &_FROM )
            )
        );
    }

    inline Utf32 * newUtf32FromString(
        const StringChar *  _FROM
    )
    {
        return toGfpp(
            gfUtf32NewFromStringCharPtr(
                _FROM
            )
        );
    }

    inline Utf32 * newUtf32FromString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfUtf32NewFromStringCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf8 &    _FROM
    )
    {
        return toGfpp(
            gfUtf32NewFromUtf8(
                toGf( &_FROM )
            )
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf8Char *    _FROM
    )
    {
        return toGfpp(
            gfUtf32NewFromUtf8CharPtr(
                _FROM
            )
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfUtf32NewFromUtf8CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf16 &   _FROM
    )
    {
        return toGfpp(
            gfUtf32NewFromUtf16(
                toGf( &_FROM )
            )
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf16Char *   _FROM
    )
    {
        return toGfpp(
            gfUtf32NewFromUtf16CharPtr(
                _FROM
            )
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfUtf32NewFromUtf16CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline void free(
        Utf32 & _utf32
    )
    {
        gfUtf32Free(
            toGf( &_utf32 )
        );
    }

    inline const Utf32Char * getPtr(
        const Utf32 &  _UTF32
    )
    {
        return gfUtf32GetPtr(
            toGf( &_UTF32 )
        );
    }

    inline Size getLength(
        const Utf32 &  _UTF32
    )
    {
        return gfUtf32GetLength(
            toGf( &_UTF32 )
        );
    }

    inline Bool assign(
        Utf32 &         _to
        , const Utf32 & _FROM
    )
    {
        return gfUtf32Assign(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assign(
        Utf32 &             _to
        , const Utf32Char * _FROM
    )
    {
        return gfUtf32AssignFromCharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assign(
        Utf32 &             _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return gfUtf32AssignFromCharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromString(
        Utf32 &             _to
        , const String &    _FROM
    )
    {
        return gfUtf32AssignFromString(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assignFromString(
        Utf32 &                 _to
        , const StringChar *    _FROM
    )
    {
        return gfUtf32AssignFromStringCharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assignFromString(
        Utf32 &                 _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return gfUtf32AssignFromStringCharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &         _to
        , const Utf8 &  _FROM
    )
    {
        return gfUtf32AssignFromUtf8(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &             _to
        , const Utf8Char *  _FROM
    )
    {
        return gfUtf32AssignFromUtf8CharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &             _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return gfUtf32AssignFromUtf8CharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &         _to
        , const Utf16 & _FROM
    )
    {
        return gfUtf32AssignFromUtf16(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &             _to
        , const Utf16Char * _FROM
    )
    {
        return gfUtf32AssignFromUtf16CharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &             _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return gfUtf32AssignFromUtf16CharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }
}

#endif  // GF4CPP_STRING_UTF32_H
