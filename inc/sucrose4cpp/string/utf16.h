#ifndef SUCROSE4CPP_STRING_UTF16_H
#define SUCROSE4CPP_STRING_UTF16_H

#include "gf4cpp/string/utf16.h"
#include "gf/string/utf16.h"

#include "gf4cpp/string/string.h"
#include "gf4cpp/string/utf8.h"
#include "gf4cpp/string/utf32.h"
#include "gf4cpp/common/primitives.h"

namespace gf {
    inline Utf16 * newUtf16(
    )
    {
        return gfUtf16New();
    }

    inline Utf16 * clone(
        const Utf16 &   _UTF16
    )
    {
        return gfUtf16Clone(
            &_UTF16
        );
    }

    inline Utf16 * newUtf16(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return gfUtf16NewFromCharPtr(
            _FROM
            , _length
        );
    }

    inline Utf16 * newUtf16FromString(
        const String &  _FROM
    )
    {
        return gfUtf16NewFromString(
            &_FROM
        );
    }

    inline Utf16 * newUtf16FromString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return gfUtf16NewFromStringCharPtr(
            _FROM
            , _length
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf8 &    _FROM
    )
    {
        return gfUtf16NewFromUtf8(
            &_FROM
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return gfUtf16NewFromUtf8CharPtr(
            _FROM
            , _length
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf32 &   _FROM
    )
    {
        return gfUtf16NewFromUtf32(
            &_FROM
        );
    }

    inline Utf16 * newUtf16FromUnicode(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return gfUtf16NewFromUtf32CharPtr(
            _FROM
            , _length
        );
    }

    inline void free(
        Utf16 & _utf16
    )
    {
        gfUtf16Free(
            &_utf16
        );
    }

    inline const Utf16Char * getPtr(
        const Utf16 &  _UTF16
    )
    {
        return gfUtf16GetPtr(
            &_UTF16
        );
    }

    inline Size getLength(
        const Utf16 &  _UTF16
    )
    {
        return gfUtf16GetLength(
            &_UTF16
        );
    }

    inline Bool assign(
        Utf16 &         _to
        , const Utf16 & _FROM
    )
    {
        return gfUtf16Assign(
            &_to
            , &_FROM
        );
    }

    inline Bool assign(
        Utf16 &             _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return gfUtf16AssignFromCharPtr(
            &_to
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
            &_to
            , &_FROM
        );
    }

    inline Bool assignFromString(
        Utf16 &                 _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return gfUtf16AssignFromStringCharPtr(
            &_to
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
            &_to
            , &_FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &             _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return gfUtf16AssignFromUtf8CharPtr(
            &_to
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
            &_to
            , &_FROM
        );
    }

    inline Bool assignFromUnicode(
        Utf16 &             _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return gfUtf16AssignFromUtf32CharPtr(
            &_to
            , _FROM
            , _length
        );
    }
}

#endif  // SUCROSE4CPP_STRING_UTF16_H
