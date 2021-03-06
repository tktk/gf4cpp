﻿#ifndef FG4CPP_STRING_UTF8_H
#define FG4CPP_STRING_UTF8_H

#include "fgpp/string/utf8.h"
#include "fg/string/utf8.h"
#include "fg4cpp/def/string/utf8.h"
#include "fg4cpp/def/string/string.h"
#include "fg4cpp/def/string/utf16.h"
#include "fg4cpp/def/string/utf32.h"
#include "fgpp/def/common/primitives.h"

namespace fg {
    inline Utf8 * newUtf8(
    )
    {
        return toFgpp( fgUtf8New() );
    }

    inline Utf8 * clone(
        const Utf8 &    _UTF8
    )
    {
        return toFgpp(
            fgUtf8Clone(
                toFg( &_UTF8 )
            )
        );
    }

    inline Utf8 * newUtf8(
        const Utf8Char *    _FROM
    )
    {
        return toFgpp(
            fgUtf8NewFromCharPtr(
                _FROM
            )
        );
    }

    inline Utf8 * newUtf8(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgUtf8NewFromCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf8 * newUtf8FromString(
        const String &  _FROM
    )
    {
        return toFgpp(
            fgUtf8NewFromString(
                toFg( &_FROM )
            )
        );
    }

    inline Utf8 * newUtf8FromString(
        const StringChar *  _FROM
    )
    {
        return toFgpp(
            fgUtf8NewFromStringCharPtr(
                _FROM
            )
        );
    }

    inline Utf8 * newUtf8FromString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgUtf8NewFromStringCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf16 &   _FROM
    )
    {
        return toFgpp(
            fgUtf8NewFromUtf16(
                toFg( &_FROM )
            )
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf16Char *   _FROM
    )
    {
        return toFgpp(
            fgUtf8NewFromUtf16CharPtr(
                _FROM
            )
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgUtf8NewFromUtf16CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf32 &   _FROM
    )
    {
        return toFgpp(
            fgUtf8NewFromUtf32(
                toFg( &_FROM )
            )
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf32Char *   _FROM
    )
    {
        return toFgpp(
            fgUtf8NewFromUtf32CharPtr(
                _FROM
            )
        );
    }

    inline Utf8 * newUtf8FromUnicode(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgUtf8NewFromUtf32CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline void free(
        Utf8 &  _utf8
    )
    {
        fgUtf8Free(
            toFg( &_utf8 )
        );
    }

    inline const Utf8Char * getPtr(
        const Utf8 &    _UTF8
    )
    {
        return fgUtf8GetPtr(
            toFg( &_UTF8 )
        );
    }

    inline Size getLength(
        const Utf8 &    _UTF8
    )
    {
        return fgUtf8GetLength(
            toFg( &_UTF8 )
        );
    }

    inline Bool assign(
        Utf8 &          _to
        , const Utf8 &  _FROM
    )
    {
        return fgUtf8Assign(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assign(
        Utf8 &              _to
        , const Utf8Char *  _FROM
    )
    {
        return fgUtf8AssignFromCharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assign(
        Utf8 &              _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return fgUtf8AssignFromCharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromString(
        Utf8 &              _to
        , const String &    _FROM
    )
    {
        return fgUtf8AssignFromString(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assignFromString(
        Utf8 &                  _to
        , const StringChar *    _FROM
    )
    {
        return fgUtf8AssignFromStringCharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assignFromString(
        Utf8 &                  _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return fgUtf8AssignFromStringCharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &          _to
        , const Utf16 & _FROM
    )
    {
        return fgUtf8AssignFromUtf16(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &              _to
        , const Utf16Char * _FROM
    )
    {
        return fgUtf8AssignFromUtf16CharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &              _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return fgUtf8AssignFromUtf16CharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &          _to
        , const Utf32 & _FROM
    )
    {
        return fgUtf8AssignFromUtf32(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &              _to
        , const Utf32Char * _FROM
    )
    {
        return fgUtf8AssignFromUtf32CharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf8 &              _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return fgUtf8AssignFromUtf32CharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool toInt(
        Int &           _int
        , const Utf8 &  _UTF8
    )
    {
        return fgUtf8ToInt(
            &_int
            , toFg( &_UTF8 )
        );
    }

    inline Bool toInt(
        Int &           _int
        , const Utf8 &  _UTF8
        , Int           _base
    )
    {
        return fgUtf8ToIntWithBase(
            &_int
            , toFg( &_UTF8 )
            , _base
        );
    }

    inline Bool toUInt(
        UInt &          _uint
        , const Utf8 &  _UTF8
    )
    {
        return fgUtf8ToUInt(
            &_uint
            , toFg( &_UTF8 )
        );
    }

    inline Bool toUInt(
        UInt &          _uint
        , const Utf8 &  _UTF8
        , Int           _base
    )
    {
        return fgUtf8ToUIntWithBase(
            &_uint
            , toFg( &_UTF8 )
            , _base
        );
    }

    inline Bool toLong(
        Long &          _long
        , const Utf8 &  _UTF8
    )
    {
        return fgUtf8ToLong(
            &_long
            , toFg( &_UTF8 )
        );
    }

    inline Bool toLong(
        Long &          _long
        , const Utf8 &  _UTF8
        , Int           _base
    )
    {
        return fgUtf8ToLongWithBase(
            &_long
            , toFg( &_UTF8 )
            , _base
        );
    }

    inline Bool toULong(
        ULong &         _ulong
        , const Utf8 &  _UTF8
    )
    {
        return fgUtf8ToULong(
            &_ulong
            , toFg( &_UTF8 )
        );
    }

    inline Bool toULong(
        ULong &         _ulong
        , const Utf8 &  _UTF8
        , Int           _base
    )
    {
        return fgUtf8ToULongWithBase(
            &_ulong
            , toFg( &_UTF8 )
            , _base
        );
    }

    inline Bool toFloat(
        Float &         _float
        , const Utf8 &  _UTF8
    )
    {
        return fgUtf8ToFloat(
            &_float
            , toFg( &_UTF8 )
        );
    }

    inline Bool toDouble(
        Double &        _double
        , const Utf8 &  _UTF8
    )
    {
        return fgUtf8ToDouble(
            &_double
            , toFg( &_UTF8 )
        );
    }
}

#endif  // FG4CPP_STRING_UTF8_H
