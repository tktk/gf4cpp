#ifndef GF4CPP_STRING_STRING_H
#define GF4CPP_STRING_STRING_H

#include "gfpp/string/string.h"
#include "gf/string/string.h"

#include "gfpp/string/utf8.h"
#include "gfpp/string/utf16.h"
#include "gfpp/string/utf32.h"
#include "gfpp/common/primitives.h"

namespace gf {
    inline String * newString(
    )
    {
        return gfStringNew();
    }

    inline String * clone(
        const String &  _STRING
    )
    {
        return gfStringClone(
            &_STRING
        );
    }

    inline String * newString(
        const StringChar *  _FROM
    )
    {
        return gfStringNewFromCharPtr(
            _FROM
        );
    }

    inline String * newString(
        const StringChar *  _FROM
        , Size              _length
    )
    {
        return gfStringNewFromCharPtrWithLength(
            _FROM
            , _length
        );
    }

    inline String * newStringFromUnicode(
        const Utf8 &    _FROM
    )
    {
        return gfStringNewFromUtf8(
            &_FROM
        );
    }

    inline String * newStringFromUnicode(
        const Utf8Char *    _FROM
    )
    {
        return gfStringNewFromUtf8CharPtr(
            _FROM
        );
    }

    inline String * newStringFromUnicode(
        const Utf8Char *    _FROM
        , Size              _length
    )
    {
        return gfStringNewFromUtf8CharPtrWithLength(
            _FROM
            , _length
        );
    }

    inline String * newStringFromUnicode(
        const Utf16 &   _FROM
    )
    {
        return gfStringNewFromUtf16(
            &_FROM
        );
    }

    inline String * newStringFromUnicode(
        const Utf16Char *   _FROM
    )
    {
        return gfStringNewFromUtf16CharPtr(
            _FROM
        );
    }

    inline String * newStringFromUnicode(
        const Utf16Char *   _FROM
        , Size              _length
    )
    {
        return gfStringNewFromUtf16CharPtrWithLength(
            _FROM
            , _length
        );
    }

    inline String * newStringFromUnicode(
        const Utf32 &   _FROM
    )
    {
        return gfStringNewFromUtf32(
            &_FROM
        );
    }

    inline String * newStringFromUnicode(
        const Utf32Char *   _FROM
    )
    {
        return gfStringNewFromUtf32CharPtr(
            _FROM
        );
    }

    inline String * newStringFromUnicode(
        const Utf32Char *   _FROM
        , Size              _length
    )
    {
        return gfStringNewFromUtf32CharPtrWithLength(
            _FROM
            , _length
        );
    }

    inline void free(
        String &    _string
    )
    {
        gfStringFree(
            &_string
        );
    }

    inline const StringChar * getPtr(
        const String &  _STRING
    )
    {
        return gfStringGetPtr(
            &_STRING
        );
    }

    inline Size getLength(
        const String &  _STRING
    )
    {
        return gfStringGetLength(
            &_STRING
        );
    }

    inline Bool assign(
        String &            _to
        , const String &    _FROM
    )
    {
        return gfStringAssign(
            &_to
            , &_FROM
        );
    }

    inline Bool assign(
        String &                _to
        , const StringChar *    _FROM
    )
    {
        return gfStringAssignFromCharPtr(
            &_to
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
            &_to
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
            &_to
            , &_FROM
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf8Char *  _FROM
    )
    {
        return gfStringAssignFromUtf8CharPtr(
            &_to
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
            &_to
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
            &_to
            , &_FROM
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf16Char * _FROM
    )
    {
        return gfStringAssignFromUtf16CharPtr(
            &_to
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
            &_to
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
            &_to
            , &_FROM
        );
    }

    inline Bool assignFromUnicode(
        String &            _to
        , const Utf32Char * _FROM
    )
    {
        return gfStringAssignFromUtf32CharPtr(
            &_to
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
            &_to
            , _FROM
            , _length
        );
    }
}

#endif  // GF4CPP_STRING_STRING_H
