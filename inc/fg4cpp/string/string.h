﻿#ifndef FG4CPP_STRING_STRING_H
#define FG4CPP_STRING_STRING_H

#include "fgpp/string/string.h"
#include "fg/string/string.h"

namespace fg {
    inline const FgString & toFg(
        const String &  _STRING
    )
    {
        return reinterpret_cast< const FgString & >( _STRING );
    }

    inline FgString & toFg(
        String & _string
    )
    {
        return reinterpret_cast< FgString & >( _string );
    }

    inline const FgString * toFg(
        const String *  _STRING
    )
    {
        return reinterpret_cast< const FgString * >( _STRING );
    }

    inline FgString * toFg(
        String *    _string
    )
    {
        return reinterpret_cast< FgString * >( _string );
    }

    inline const String & toFgpp(
        const FgString &    _STRING
    )
    {
        return reinterpret_cast< const String & >( _STRING );
    }

    inline String & toFgpp(
        FgString &  _string
    )
    {
        return reinterpret_cast< String & >( _string );
    }

    inline const String * toFgpp(
        const FgString *    _STRING
    )
    {
        return reinterpret_cast< const String * >( _STRING );
    }

    inline String * toFgpp(
        FgString *  _string
    )
    {
        return reinterpret_cast< String * >( _string );
    }
}

#include "fg4cpp/string/utf8.h"
#include "fg4cpp/string/utf16.h"
#include "fg4cpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace fg {
    inline String * newString(
    )
    {
        return toFgpp( fgStringNew() );
    }

    inline String * clone(
        const String &  _STRING
    )
    {
        return toFgpp(
            fgStringClone(
                toFg( &_STRING )
            )
        );
    }

    inline String * newString(
        const StringChar *  _FROM
    )
    {
        return toFgpp(
            fgStringNewFromCharPtr(
                _FROM
            )
        );
    }

    inline String * newString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgStringNewFromCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf8 &    _FROM
    )
    {
        return toFgpp(
            fgStringNewFromUtf8(
                toFg( &_FROM )
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf8Char *    _FROM
    )
    {
        return toFgpp(
            fgStringNewFromUtf8CharPtr(
                _FROM
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgStringNewFromUtf8CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf16 &   _FROM
    )
    {
        return toFgpp(
            fgStringNewFromUtf16(
                toFg( &_FROM )
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf16Char *   _FROM
    )
    {
        return toFgpp(
            fgStringNewFromUtf16CharPtr(
                _FROM
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgStringNewFromUtf16CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf32 &   _FROM
    )
    {
        return toFgpp(
            fgStringNewFromUtf32(
                toFg( &_FROM )
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf32Char *   _FROM
    )
    {
        return toFgpp(
            fgStringNewFromUtf32CharPtr(
                _FROM
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return toFgpp(
            fgStringNewFromUtf32CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline void free(
        String &    _string
    )
    {
        fgStringFree(
            toFg( &_string )
        );
    }

    inline const StringChar * getPtr(
        const String &  _STRING
    )
    {
        return fgStringGetPtr(
            toFg( &_STRING )
        );
    }

    inline Size getLength(
        const String &  _STRING
    )
    {
        return fgStringGetLength(
            toFg( &_STRING )
        );
    }

    inline Bool assign(
        String &            _to
        , const String &    _FROM
    )
    {
        return fgStringAssign(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assign(
        String &                _to
        , const StringChar *    _FROM
    )
    {
        return fgStringAssignFromCharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assign(
        String &                _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return fgStringAssignFromCharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        String &        _to
        , const Utf8 &  _FROM
    )
    {
        return fgStringAssignFromUtf8(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf8Char *  _FROM
    )
    {
        return fgStringAssignFromUtf8CharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return fgStringAssignFromUtf8CharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        String &        _to
        , const Utf16 & _FROM
    )
    {
        return fgStringAssignFromUtf16(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf16Char * _FROM
    )
    {
        return fgStringAssignFromUtf16CharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return fgStringAssignFromUtf16CharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        String &        _to
        , const Utf32 & _FROM
    )
    {
        return fgStringAssignFromUtf32(
            toFg( &_to )
            , toFg( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf32Char * _FROM
    )
    {
        return fgStringAssignFromUtf32CharPtr(
            toFg( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return fgStringAssignFromUtf32CharPtrWithLength(
            toFg( &_to )
            , _FROM
            , _length
        );
    }
}

#endif  // FG4CPP_STRING_STRING_H