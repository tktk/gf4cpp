#ifndef FG4CPP_STRING_UTF32_H
#define FG4CPP_STRING_UTF32_H

#include "fgpp/string/utf32.h"
#include "fg/string/utf32.h"

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

#include "fg4cpp/string/string.h"
#include "fg4cpp/string/utf8.h"
#include "fg4cpp/string/utf16.h"
#include "fgpp/common/primitives.h"

namespace fg {
    inline Utf32 * newUtf32(
    )
    {
        return toFgpp( fgUtf32New() );
    }

    inline Utf32 * clone(
        const Utf32 &   _UTF32
    )
    {
        return toFgpp(
            fgUtf32Clone(
                toFg( &_UTF32 )
            )
        );
    }

    inline Utf32 * newUtf32(
        const Utf32Char *   _FROM
    )
    {
        return toFgpp(
            fgUtf32NewFromCharPtr(
                _FROM
            )
        );
    }

    inline Utf32 * newUtf32(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgUtf32NewFromCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf32 * newUtf32FromString(
        const String &  _FROM
    )
    {
        return toFgpp(
            fgUtf32NewFromString(
                toFg( &_FROM )
            )
        );
    }

    inline Utf32 * newUtf32FromString(
        const StringChar *  _FROM
    )
    {
        return toFgpp(
            fgUtf32NewFromStringCharPtr(
                _FROM
            )
        );
    }

    inline Utf32 * newUtf32FromString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgUtf32NewFromStringCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf8 &    _FROM
    )
    {
        return toFgpp(
            fgUtf32NewFromUtf8(
                toFg( &_FROM )
            )
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf8Char *    _FROM
    )
    {
        return toFgpp(
            fgUtf32NewFromUtf8CharPtr(
                _FROM
            )
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgUtf32NewFromUtf8CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf16 &   _FROM
    )
    {
        return toFgpp(
            fgUtf32NewFromUtf16(
                toFg( &_FROM )
            )
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf16Char *   _FROM
    )
    {
        return toFgpp(
            fgUtf32NewFromUtf16CharPtr(
                _FROM
            )
        );
    }

    inline Utf32 * newUtf32FromUnicode(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgUtf32NewFromUtf16CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline void free(
        Utf32 & _utf32
    )
    {
        fgUtf32Free(
            toFg( &_utf32 )
        );
    }

    inline const Utf32Char * getPtr(
        const Utf32 &  _UTF32
    )
    {
        return fgUtf32GetPtr(
            toFg( &_UTF32 )
        );
    }

    inline Size getLength(
        const Utf32 &  _UTF32
    )
    {
        return fgUtf32GetLength(
            toFg( &_UTF32 )
        );
    }

    inline Bool assign(
        Utf32 &         _to
        , const Utf32 & _FROM
    )
    {
        return fgUtf32Assign(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assign(
        Utf32 &             _to
        , const Utf32Char * _FROM
    )
    {
        return fgUtf32AssignFromCharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assign(
        Utf32 &             _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return fgUtf32AssignFromCharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromString(
        Utf32 &             _to
        , const String &    _FROM
    )
    {
        return fgUtf32AssignFromString(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assignFromString(
        Utf32 &                 _to
        , const StringChar *    _FROM
    )
    {
        return fgUtf32AssignFromStringCharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assignFromString(
        Utf32 &                 _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return fgUtf32AssignFromStringCharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &         _to
        , const Utf8 &  _FROM
    )
    {
        return fgUtf32AssignFromUtf8(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &             _to
        , const Utf8Char *  _FROM
    )
    {
        return fgUtf32AssignFromUtf8CharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &             _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return fgUtf32AssignFromUtf8CharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &         _to
        , const Utf16 & _FROM
    )
    {
        return fgUtf32AssignFromUtf16(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &             _to
        , const Utf16Char * _FROM
    )
    {
        return fgUtf32AssignFromUtf16CharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf32 &             _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return fgUtf32AssignFromUtf16CharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool toInt(
        Int &           _int
        , const Utf32 & _UTF32
    )
    {
        return fgUtf32ToInt(
            &_int
            , toFg( &_UTF32 )
        );
    }

    inline Bool toInt(
        Int &           _int
        , const Utf32 & _UTF32
        , Int           _base
    )
    {
        return fgUtf32ToIntWithBase(
            &_int
            , toFg( &_UTF32 )
            , _base
        );
    }

    inline Bool toUInt(
        UInt &          _uint
        , const Utf32 & _UTF32
    )
    {
        return fgUtf32ToUInt(
            &_uint
            , toFg( &_UTF32 )
        );
    }

    inline Bool toUInt(
        UInt &          _uint
        , const Utf32 & _UTF32
        , Int           _base
    )
    {
        return fgUtf32ToUIntWithBase(
            &_uint
            , toFg( &_UTF32 )
            , _base
        );
    }

    inline Bool toLong(
        Long &          _long
        , const Utf32 & _UTF32
    )
    {
        return fgUtf32ToLong(
            &_long
            , toFg( &_UTF32 )
        );
    }

    inline Bool toLong(
        Long &          _long
        , const Utf32 & _UTF32
        , Int           _base
    )
    {
        return fgUtf32ToLongWithBase(
            &_long
            , toFg( &_UTF32 )
            , _base
        );
    }

    inline Bool toULong(
        ULong &         _ulong
        , const Utf32 & _UTF32
    )
    {
        return fgUtf32ToULong(
            &_ulong
            , toFg( &_UTF32 )
        );
    }

    inline Bool toULong(
        ULong &         _ulong
        , const Utf32 & _UTF32
        , Int           _base
    )
    {
        return fgUtf32ToULongWithBase(
            &_ulong
            , toFg( &_UTF32 )
            , _base
        );
    }

    inline Bool toFloat(
        Float &         _float
        , const Utf32 & _UTF32
    )
    {
        return fgUtf32ToFloat(
            &_float
            , toFg( &_UTF32 )
        );
    }

    inline Bool toDouble(
        Double &        _double
        , const Utf32 & _UTF32
    )
    {
        return fgUtf32ToDouble(
            &_double
            , toFg( &_UTF32 )
        );
    }
}

#endif  // FG4CPP_STRING_UTF32_H
