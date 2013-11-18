#ifndef GF4CPP_STRING_UTF16_H
#define GF4CPP_STRING_UTF16_H

#include "gfpp/string/utf16.h"
#include "gf/string/utf16.h"

namespace gf {
    inline const GfUtf16 & toGf(
        const gf::Utf16 &   _UTF16
    )
    {
        return reinterpret_cast< const GfUtf16 & >( _UTF16 );
    }

    inline GfUtf16 & toGf(
        gf::Utf16 & _utf16
    )
    {
        return reinterpret_cast< GfUtf16 & >( _utf16 );
    }

    inline const GfUtf16 * toGf(
        const gf::Utf16 *   _UTF16
    )
    {
        return reinterpret_cast< const GfUtf16 * >( _UTF16 );
    }

    inline GfUtf16 * toGf(
        gf::Utf16 * _utf16
    )
    {
        return reinterpret_cast< GfUtf16 * >( _utf16 );
    }

    inline const gf::Utf16 & toGfpp(
        const GfUtf16 & _UTF16
    )
    {
        return reinterpret_cast< const gf::Utf16 & >( _UTF16 );
    }

    inline gf::Utf16 & toGfpp(
        GfUtf16 &   _utf16
    )
    {
        return reinterpret_cast< gf::Utf16 & >( _utf16 );
    }

    inline const gf::Utf16 * toGfpp(
        const GfUtf16 * _UTF16
    )
    {
        return reinterpret_cast< const gf::Utf16 * >( _UTF16 );
    }

    inline gf::Utf16 * toGfpp(
        GfUtf16 *   _utf16
    )
    {
        return reinterpret_cast< gf::Utf16 * >( _utf16 );
    }
}

#include "gf4cpp/string/string.h"
#include "gf4cpp/string/utf8.h"
#include "gf4cpp/string/utf32.h"
#include "gfpp/common/primitives.h"

namespace gf {
    inline Utf16 * newUtf16(
    )
    {
        return toGfpp( gfUtf16New() );
    }

    inline Utf16 * clone(
        const Utf16 &   _UTF16
    )
    {
        return toGfpp(
            gfUtf16Clone(
                toGf( &_UTF16 )
            )
        );
    }

    inline Utf16 * newUtf16(
        const Utf16Char *   _FROM
    )
    {
        return toGfpp(
            gfUtf16NewFromCharPtr(
                _FROM
            )
        );
    }

    inline Utf16 * newUtf16(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfUtf16NewFromCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf16 * newUtf16FromString(
        const String &  _FROM
    )
    {
        return toGfpp(
            gfUtf16NewFromString(
                toGf( &_FROM )
            )
        );
    }

    inline Utf16 * newUtf16FromString(
        const StringChar *  _FROM
    )
    {
        return toGfpp(
            gfUtf16NewFromStringCharPtr(
                _FROM
            )
        );
    }

    inline Utf16 * newUtf16FromString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfUtf16NewFromStringCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf8 &    _FROM
    )
    {
        return toGfpp(
            gfUtf16NewFromUtf8(
                toGf( &_FROM )
            )
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf8Char *    _FROM
    )
    {
        return toGfpp(
            gfUtf16NewFromUtf8CharPtr(
                _FROM
            )
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfUtf16NewFromUtf8CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf32 &   _FROM
    )
    {
        return toGfpp(
            gfUtf16NewFromUtf32(
                toGf( &_FROM )
            )
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf32Char *   _FROM
    )
    {
        return toGfpp(
            gfUtf16NewFromUtf32CharPtr(
                _FROM
            )
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfUtf16NewFromUtf32CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline void free(
        Utf16 & _utf16
    )
    {
        gfUtf16Free(
            toGf( &_utf16 )
        );
    }

    inline const Utf16Char * getPtr(
        const Utf16 &  _UTF16
    )
    {
        return gfUtf16GetPtr(
            toGf( &_UTF16 )
        );
    }

    inline Size getLength(
        const Utf16 &  _UTF16
    )
    {
        return gfUtf16GetLength(
            toGf( &_UTF16 )
        );
    }

    inline Bool assign(
        Utf16 &         _to
        , const Utf16 & _FROM
    )
    {
        return gfUtf16Assign(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assign(
        Utf16 &             _to
        , const Utf16Char * _FROM
    )
    {
        return gfUtf16AssignFromCharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assign(
        Utf16 &             _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return gfUtf16AssignFromCharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromString(
        Utf16 &             _to
        , const String &    _FROM
    )
    {
        return gfUtf16AssignFromString(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assignFromString(
        Utf16 &                 _to
        , const StringChar *    _FROM
    )
    {
        return gfUtf16AssignFromStringCharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assignFromString(
        Utf16 &                 _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return gfUtf16AssignFromStringCharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &         _to
        , const Utf8 &  _FROM
    )
    {
        return gfUtf16AssignFromUtf8(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &             _to
        , const Utf8Char *  _FROM
    )
    {
        return gfUtf16AssignFromUtf8CharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &             _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return gfUtf16AssignFromUtf8CharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &         _to
        , const Utf32 & _FROM
    )
    {
        return gfUtf16AssignFromUtf32(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &             _to
        , const Utf32Char * _FROM
    )
    {
        return gfUtf16AssignFromUtf32CharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &             _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return gfUtf16AssignFromUtf32CharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }
}

#endif  // GF4CPP_STRING_UTF16_H
