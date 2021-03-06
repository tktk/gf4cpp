﻿#ifndef FG4CPP_STRING_UTF16_H
#define FG4CPP_STRING_UTF16_H

#include "fgpp/string/utf16.h"
#include "fg/string/utf16.h"
#include "fg4cpp/def/string/utf16.h"
#include "fg4cpp/def/string/string.h"
#include "fg4cpp/def/string/utf8.h"
#include "fg4cpp/def/string/utf32.h"
#include "fgpp/def/common/primitives.h"

namespace fg {
    inline Utf16 * newUtf16(
    )
    {
        return toFgpp( fgUtf16New() );
    }

    inline Utf16 * clone(
        const Utf16 &   _UTF16
    )
    {
        return toFgpp(
            fgUtf16Clone(
                toFg( &_UTF16 )
            )
        );
    }

    inline Utf16 * newUtf16(
        const Utf16Char *   _FROM
    )
    {
        return toFgpp(
            fgUtf16NewFromCharPtr(
                _FROM
            )
        );
    }

    inline Utf16 * newUtf16(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgUtf16NewFromCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf16 * newUtf16FromString(
        const String &  _FROM
    )
    {
        return toFgpp(
            fgUtf16NewFromString(
                toFg( &_FROM )
            )
        );
    }

    inline Utf16 * newUtf16FromString(
        const StringChar *  _FROM
    )
    {
        return toFgpp(
            fgUtf16NewFromStringCharPtr(
                _FROM
            )
        );
    }

    inline Utf16 * newUtf16FromString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgUtf16NewFromStringCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf8 &    _FROM
    )
    {
        return toFgpp(
            fgUtf16NewFromUtf8(
                toFg( &_FROM )
            )
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf8Char *    _FROM
    )
    {
        return toFgpp(
            fgUtf16NewFromUtf8CharPtr(
                _FROM
            )
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgUtf16NewFromUtf8CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf32 &   _FROM
    )
    {
        return toFgpp(
            fgUtf16NewFromUtf32(
                toFg( &_FROM )
            )
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf32Char *   _FROM
    )
    {
        return toFgpp(
            fgUtf16NewFromUtf32CharPtr(
                _FROM
            )
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgUtf16NewFromUtf32CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline void free(
        Utf16 & _utf16
    )
    {
        fgUtf16Free(
            toFg( &_utf16 )
        );
    }

    inline const Utf16Char * getPtr(
        const Utf16 &  _UTF16
    )
    {
        return fgUtf16GetPtr(
            toFg( &_UTF16 )
        );
    }

    inline Size getLength(
        const Utf16 &  _UTF16
    )
    {
        return fgUtf16GetLength(
            toFg( &_UTF16 )
        );
    }

    inline Bool assign(
        Utf16 &         _to
        , const Utf16 & _FROM
    )
    {
        return fgUtf16Assign(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assign(
        Utf16 &             _to
        , const Utf16Char * _FROM
    )
    {
        return fgUtf16AssignFromCharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assign(
        Utf16 &             _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return fgUtf16AssignFromCharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromString(
        Utf16 &             _to
        , const String &    _FROM
    )
    {
        return fgUtf16AssignFromString(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assignFromString(
        Utf16 &                 _to
        , const StringChar *    _FROM
    )
    {
        return fgUtf16AssignFromStringCharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assignFromString(
        Utf16 &                 _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return fgUtf16AssignFromStringCharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &         _to
        , const Utf8 &  _FROM
    )
    {
        return fgUtf16AssignFromUtf8(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &             _to
        , const Utf8Char *  _FROM
    )
    {
        return fgUtf16AssignFromUtf8CharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &             _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return fgUtf16AssignFromUtf8CharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &         _to
        , const Utf32 & _FROM
    )
    {
        return fgUtf16AssignFromUtf32(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &             _to
        , const Utf32Char * _FROM
    )
    {
        return fgUtf16AssignFromUtf32CharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &             _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return fgUtf16AssignFromUtf32CharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool toInt(
        Int &           _int
        , const Utf16 & _UTF16
    )
    {
        return fgUtf16ToInt(
            &_int
            , toFg( &_UTF16 )
        );
    }

    inline Bool toInt(
        Int &           _int
        , const Utf16 & _UTF16
        , Int           _base
    )
    {
        return fgUtf16ToIntWithBase(
            &_int
            , toFg( &_UTF16 )
            , _base
        );
    }

    inline Bool toUInt(
        UInt &          _uint
        , const Utf16 & _UTF16
    )
    {
        return fgUtf16ToUInt(
            &_uint
            , toFg( &_UTF16 )
        );
    }

    inline Bool toUInt(
        UInt &          _uint
        , const Utf16 & _UTF16
        , Int           _base
    )
    {
        return fgUtf16ToUIntWithBase(
            &_uint
            , toFg( &_UTF16 )
            , _base
        );
    }

    inline Bool toLong(
        Long &          _long
        , const Utf16 & _UTF16
    )
    {
        return fgUtf16ToLong(
            &_long
            , toFg( &_UTF16 )
        );
    }

    inline Bool toLong(
        Long &          _long
        , const Utf16 & _UTF16
        , Int           _base
    )
    {
        return fgUtf16ToLongWithBase(
            &_long
            , toFg( &_UTF16 )
            , _base
        );
    }

    inline Bool toULong(
        ULong &         _ulong
        , const Utf16 & _UTF16
    )
    {
        return fgUtf16ToULong(
            &_ulong
            , toFg( &_UTF16 )
        );
    }

    inline Bool toULong(
        ULong &         _ulong
        , const Utf16 & _UTF16
        , Int           _base
    )
    {
        return fgUtf16ToULongWithBase(
            &_ulong
            , toFg( &_UTF16 )
            , _base
        );
    }

    inline Bool toFloat(
        Float &         _float
        , const Utf16 & _UTF16
    )
    {
        return fgUtf16ToFloat(
            &_float
            , toFg( &_UTF16 )
        );
    }

    inline Bool toDouble(
        Double &        _double
        , const Utf16 & _UTF16
    )
    {
        return fgUtf16ToDouble(
            &_double
            , toFg( &_UTF16 )
        );
    }
}

#endif  // FG4CPP_STRING_UTF16_H
