#ifndef GF4CPP_STRING_STRING_H
#define GF4CPP_STRING_STRING_H

#include "gfpp/string/string.h"
#include "gf/string/string.h"

namespace gf {
    inline const GfString & toGf(
        const String &  _STRING
    )
    {
        return reinterpret_cast< const GfString & >( _STRING );
    }

    inline GfString & toGf(
        String & _string
    )
    {
        return reinterpret_cast< GfString & >( _string );
    }

    inline const GfString * toGf(
        const String *  _STRING
    )
    {
        return reinterpret_cast< const GfString * >( _STRING );
    }

    inline GfString * toGf(
        String *    _string
    )
    {
        return reinterpret_cast< GfString * >( _string );
    }

    inline const String & toGfpp(
        const GfString &    _STRING
    )
    {
        return reinterpret_cast< const String & >( _STRING );
    }

    inline String & toGfpp(
        GfString &  _string
    )
    {
        return reinterpret_cast< String & >( _string );
    }

    inline const String * toGfpp(
        const GfString *    _STRING
    )
    {
        return reinterpret_cast< const String * >( _STRING );
    }

    inline String * toGfpp(
        GfString *  _string
    )
    {
        return reinterpret_cast< String * >( _string );
    }
}

#include "gf4cpp/string/utf8.h"
#include "gf4cpp/string/utf16.h"
#include "gf4cpp/string/utf32.h"
#include "gfpp/common/primitives.h"

namespace gf {
    inline String * newString(
    )
    {
        return toGfpp( gfStringNew() );
    }

    inline String * clone(
        const String &  _STRING
    )
    {
        return toGfpp(
            gfStringClone(
                toGf( &_STRING )
            )
        );
    }

    inline String * newString(
        const StringChar *  _FROM
    )
    {
        return toGfpp(
            gfStringNewFromCharPtr(
                _FROM
            )
        );
    }

    inline String * newString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfStringNewFromCharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf8 &    _FROM
    )
    {
        return toGfpp(
            gfStringNewFromUtf8(
                toGf( &_FROM )
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf8Char *    _FROM
    )
    {
        return toGfpp(
            gfStringNewFromUtf8CharPtr(
                _FROM
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfStringNewFromUtf8CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf16 &   _FROM
    )
    {
        return toGfpp(
            gfStringNewFromUtf16(
                toGf( &_FROM )
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf16Char *   _FROM
    )
    {
        return toGfpp(
            gfStringNewFromUtf16CharPtr(
                _FROM
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfStringNewFromUtf16CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf32 &   _FROM
    )
    {
        return toGfpp(
            gfStringNewFromUtf32(
                toGf( &_FROM )
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf32Char *   _FROM
    )
    {
        return toGfpp(
            gfStringNewFromUtf32CharPtr(
                _FROM
            )
        );
    }

    inline String * newStringFromUnicode(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return toGfpp(
            gfStringNewFromUtf32CharPtrWithLength(
                _FROM
                , _length
            )
        );
    }

    inline void free(
        String &    _string
    )
    {
        gfStringFree(
            toGf( &_string )
        );
    }

    inline const StringChar * getPtr(
        const String &  _STRING
    )
    {
        return gfStringGetPtr(
            toGf( &_STRING )
        );
    }

    inline Size getLength(
        const String &  _STRING
    )
    {
        return gfStringGetLength(
            toGf( &_STRING )
        );
    }

    inline Bool assign(
        String &            _to
        , const String &    _FROM
    )
    {
        return gfStringAssign(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assign(
        String &                _to
        , const StringChar *    _FROM
    )
    {
        return gfStringAssignFromCharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assign(
        String &                _to
        , const StringChar *    _FROM
        , Size                  _length
    )
    {
        return gfStringAssignFromCharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        String &        _to
        , const Utf8 &  _FROM
    )
    {
        return gfStringAssignFromUtf8(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf8Char *  _FROM
    )
    {
        return gfStringAssignFromUtf8CharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf8Char *  _FROM
        , Size              _length
    )
    {
        return gfStringAssignFromUtf8CharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        String &        _to
        , const Utf16 & _FROM
    )
    {
        return gfStringAssignFromUtf16(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf16Char * _FROM
    )
    {
        return gfStringAssignFromUtf16CharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf16Char * _FROM
        , Size              _length
    )
    {
        return gfStringAssignFromUtf16CharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }

    inline Bool assignFromUnicode(
        String &        _to
        , const Utf32 & _FROM
    )
    {
        return gfStringAssignFromUtf32(
            toGf( &_to )
            , toGf( &_FROM )
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf32Char * _FROM
    )
    {
        return gfStringAssignFromUtf32CharPtr(
            toGf( &_to )
            , _FROM
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf32Char * _FROM
        , Size              _length
    )
    {
        return gfStringAssignFromUtf32CharPtrWithLength(
            toGf( &_to )
            , _FROM
            , _length
        );
    }
}

#endif  // GF4CPP_STRING_STRING_H
