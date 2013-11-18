#ifndef GF4CPP_STRING_UTF8_H
#define GF4CPP_STRING_UTF8_H

#include "gfpp/string/utf8.h"
#include "gf/string/utf8.h"

namespace gf {
    inline const GfUtf8 & toGf(
        const gf::Utf8 &    _UTF8
    )
    {
        return reinterpret_cast< const GfUtf8 & >( _UTF8 );
    }

    inline GfUtf8 & toGf(
        gf::Utf8 &  _utf8
    )
    {
        return reinterpret_cast< GfUtf8 & >( _utf8 );
    }

    inline const GfUtf8 * toGf(
        const gf::Utf8 *    _UTF8
    )
    {
        return reinterpret_cast< const GfUtf8 * >( _UTF8 );
    }

    inline GfUtf8 * toGf(
        gf::Utf8 *  _utf8
    )
    {
        return reinterpret_cast< GfUtf8 * >( _utf8 );
    }

    inline const gf::Utf8 & toGfpp(
        const GfUtf8 &  _UTF8
    )
    {
        return reinterpret_cast< const gf::Utf8 & >( _UTF8 );
    }

    inline gf::Utf8 & toGfpp(
        GfUtf8 &    _utf8
    )
    {
        return reinterpret_cast< gf::Utf8 & >( _utf8 );
    }

    inline const gf::Utf8 * toGfpp(
        const GfUtf8 *  _UTF8
    )
    {
        return reinterpret_cast< const gf::Utf8 * >( _UTF8 );
    }

    inline gf::Utf8 * toGfpp(
        GfUtf8 *    _utf8
    )
    {
        return reinterpret_cast< gf::Utf8 * >( _utf8 );
    }
}

#include "gf4cpp/string/string.h"
#include "gf4cpp/string/utf16.h"
#include "gf4cpp/string/utf32.h"
#include "gfpp/common/primitives.h"

namespace gf {
    inline Utf8 * newUtf8(
    )
    {
        return toGfpp( gfUtf8New() );
    }

    inline Utf8 * clone(
        const Utf8 &    _UTF8
    )
    {
        return toGfpp(
            gfUtf8Clone(
                toGf( &_UTF8 )
            )
        );
    }

    inline Utf8 * newUtf8(
        const Utf8Char *    _FROM
    )
    {
        return toGfpp(
            gfUtf8NewFromCharPtr(
                _FROM
            )
        );
    }

    inline Utf8 * newUtf8(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfUtf8NewFromCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf8 * newUtf8FromString(
        const String &  _FROM
    )
    {
        return toGfpp(
            gfUtf8NewFromString(
                toGf( &_FROM )
            )
        );
    }

    inline Utf8 * newUtf8FromString(
        const StringChar *  _FROM
    )
    {
        return toGfpp(
            gfUtf8NewFromStringCharPtr(
                _FROM
            )
        );
    }

    inline Utf8 * newUtf8FromString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfUtf8NewFromStringCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf16 &   _FROM
    )
    {
        return toGfpp(
            gfUtf8NewFromUtf16(
                toGf( &_FROM )
            )
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf16Char *   _FROM
    )
    {
        return toGfpp(
            gfUtf8NewFromUtf16CharPtr(
                _FROM
            )
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfUtf8NewFromUtf16CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf32 &   _FROM
    )
    {
        return toGfpp(
            gfUtf8NewFromUtf32(
                toGf( &_FROM )
            )
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf32Char *   _FROM
    )
    {
        return toGfpp(
            gfUtf8NewFromUtf32CharPtr(
                _FROM
            )
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfUtf8NewFromUtf32CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline void free(
        Utf8 &  _utf8
    )
    {
        gfUtf8Free(
            toGf( &_utf8 )
        );
    }

    inline const Utf8Char * getPtr(
        const Utf8 &    _UTF8
    )
    {
        return gfUtf8GetPtr(
            toGf( &_UTF8 )
        );
    }

    inline Size getLength(
        const Utf8 &    _UTF8
    )
    {
        return gfUtf8GetLength(
            toGf( &_UTF8 )
        );
    }

    inline Bool assign(
        Utf8 &          _to
        , const Utf8 &  _FROM
    )
    {
        return gfUtf8Assign(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assign(
        Utf8 &              _to
        , const Utf8Char *  _FROM
    )
    {
        return gfUtf8AssignFromCharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assign(
        Utf8 &              _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return gfUtf8AssignFromCharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromString(
        Utf8 &              _to
        , const String &    _FROM
    )
    {
        return gfUtf8AssignFromString(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assignFromString(
        Utf8 &                  _to
        , const StringChar *    _FROM
    )
    {
        return gfUtf8AssignFromStringCharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assignFromString(
        Utf8 &                  _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return gfUtf8AssignFromStringCharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &          _to
        , const Utf16 & _FROM
    )
    {
        return gfUtf8AssignFromUtf16(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &              _to
        , const Utf16Char * _FROM
    )
    {
        return gfUtf8AssignFromUtf16CharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &              _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return gfUtf8AssignFromUtf16CharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &          _to
        , const Utf32 & _FROM
    )
    {
        return gfUtf8AssignFromUtf32(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &              _to
        , const Utf32Char * _FROM
    )
    {
        return gfUtf8AssignFromUtf32CharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &              _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return gfUtf8AssignFromUtf32CharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }
}

#endif  // GF4CPP_STRING_UTF8_H
