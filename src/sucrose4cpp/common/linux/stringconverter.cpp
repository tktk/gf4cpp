#include "gf/util/export.h"
#include "gf4cpp/common/stringconverter.h"

#include "gf/common/stringconverter.h"
#include "gf4cpp/common/primitives.h"

namespace {
    template<
        gf::Size MAX_TO_CHAR_LENGTH
        , typename CONVERTER
        , typename TO_T
        , typename FROM_T
    >
    gf::Bool convert(
        TO_T &              _to
        , const FROM_T &    _FROM
    )
    {
        const auto  FROM_LENGTH = _FROM.length();
        const auto  FROM = _FROM.c_str();

        auto                        bufferLength = FROM_LENGTH * MAX_TO_CHAR_LENGTH;
        typename TO_T::value_type   buffer[ bufferLength ];

        if( CONVERTER()(
            buffer
            , bufferLength
            , FROM
            , FROM_LENGTH
        ) == false ) {
            return false;
        }

        _to.assign(
            buffer
            , bufferLength
        );

        return true;
    }

    struct ToString
    {
        gf::Bool operator()(
            gf::StringChar *        _to
            , gf::Size &            _toLength
            , const gf::Utf8Char *  _FROM
            , gf::Size              _fromLength
        )
        {
            return gfStringFromUtf8(
                _to
                , &_toLength
                , _FROM
                , _fromLength
            );
        }

        gf::Bool operator()(
            gf::StringChar *        _to
            , gf::Size &            _toLength
            , const gf::Utf16Char * _FROM
            , gf::Size              _fromLength
        )
        {
            return gfStringFromUtf16(
                _to
                , &_toLength
                , _FROM
                , _fromLength
            );
        }

        gf::Bool operator()(
            gf::StringChar *        _to
            , gf::Size &            _toLength
            , const gf::Utf32Char * _FROM
            , gf::Size              _fromLength
        )
        {
            return gfStringFromUtf32(
                _to
                , &_toLength
                , _FROM
                , _fromLength
            );
        }
    };

    struct String
    {
        static const gf::Size   MAX_CHAR_LENGTH;
    };

    const gf::Size  String::MAX_CHAR_LENGTH = GF_STRING_MAX_CHAR_LENGTH;

    template< typename FROM_T >
    gf::Bool toString(
        gf::String &        _to
        , const FROM_T &    _FROM
    )
    {
        return convert<
            String::MAX_CHAR_LENGTH
            , ToString
        >(
            _to
            , _FROM
        );
    }

    template< typename T >
    struct Unicode
    {
        static const gf::Size   MAX_CHAR_LENGTH;
    };

    template<>
    const gf::Size  Unicode< gf::Utf8 >::MAX_CHAR_LENGTH = GF_UTF8_MAX_CHAR_LENGTH;

    template<>
    const gf::Size  Unicode< gf::Utf16 >::MAX_CHAR_LENGTH = GF_UTF16_MAX_CHAR_LENGTH;

    template<>
    const gf::Size  Unicode< gf::Utf32 >::MAX_CHAR_LENGTH = GF_UTF32_MAX_CHAR_LENGTH;

    template<
        typename CONVERTER
        , typename TO_T
        , typename FROM_T
    >
    gf::Bool toUnicode(
        TO_T &              _to
        , const FROM_T &    _FROM
    )
    {
        return convert<
            Unicode< TO_T >::MAX_CHAR_LENGTH
            , CONVERTER
        >(
            _to
            , _FROM
        );
    }

    struct FromString
    {
        gf::Bool operator()(
            gf::Utf8Char *              _to
            , gf::Size &                _toLength
            , const gf::StringChar *    _FROM
            , gf::Size                  _fromLength
        )
        {
            return gfUtf8FromString(
                _to
                , &_toLength
                , _FROM
                , _fromLength
            );
        }

        gf::Bool operator()(
            gf::Utf16Char *             _to
            , gf::Size &                _toLength
            , const gf::StringChar *    _FROM
            , gf::Size                  _fromLength
        )
        {
            return gfUtf16FromString(
                _to
                , &_toLength
                , _FROM
                , _fromLength
            );
        }

        gf::Bool operator()(
            gf::Utf32Char *             _to
            , gf::Size &                _toLength
            , const gf::StringChar *    _FROM
            , gf::Size                  _fromLength
        )
        {
            return gfUtf32FromString(
                _to
                , &_toLength
                , _FROM
                , _fromLength
            );
        }
    };

    template< typename TO_T >
    gf::Bool fromString(
        TO_T &                  _to
        , const gf::String &    _FROM
    )
    {
        return toUnicode< FromString >(
            _to
            , _FROM
        );
    }

    struct ConvertUnicode
    {
        gf::Bool operator()(
            gf::Utf8Char *          _to
            , gf::Size &            _toLength
            , const gf::Utf16Char * _FROM
            , gf::Size              _fromLength
        )
        {
            return gfUtf8FromUtf16(
                _to
                , &_toLength
                , _FROM
                , _fromLength
            );
        }

        gf::Bool operator()(
            gf::Utf8Char *          _to
            , gf::Size &            _toLength
            , const gf::Utf32Char * _FROM
            , gf::Size              _fromLength
        )
        {
            return gfUtf8FromUtf32(
                _to
                , &_toLength
                , _FROM
                , _fromLength
            );
        }

        gf::Bool operator()(
            gf::Utf16Char *         _to
            , gf::Size &            _toLength
            , const gf::Utf8Char *  _FROM
            , gf::Size              _fromLength
        )
        {
            return gfUtf16FromUtf8(
                _to
                , &_toLength
                , _FROM
                , _fromLength
            );
        }

        gf::Bool operator()(
            gf::Utf16Char *         _to
            , gf::Size &            _toLength
            , const gf::Utf32Char * _FROM
            , gf::Size              _fromLength
        )
        {
            return gfUtf16FromUtf32(
                _to
                , &_toLength
                , _FROM
                , _fromLength
            );
        }

        gf::Bool operator()(
            gf::Utf32Char *         _to
            , gf::Size &            _toLength
            , const gf::Utf8Char *  _FROM
            , gf::Size              _fromLength
        )
        {
            return gfUtf32FromUtf8(
                _to
                , &_toLength
                , _FROM
                , _fromLength
            );
        }

        gf::Bool operator()(
            gf::Utf32Char *         _to
            , gf::Size &            _toLength
            , const gf::Utf16Char * _FROM
            , gf::Size              _fromLength
        )
        {
            return gfUtf32FromUtf16(
                _to
                , &_toLength
                , _FROM
                , _fromLength
            );
        }
    };

    template<
        typename TO_T
        , typename FROM_T
    >
    gf::Bool convertUnicode(
        TO_T &              _to
        , const FROM_T &    _FROM
    )
    {
        return toUnicode< ConvertUnicode >(
            _to
            , _FROM
        );
    }
}

namespace gf {
    Bool fromString(
        Utf8 &              _to
        , const String &    _FROM
    )
    {
        return ::fromString(
            _to
            , _FROM
        );
    }

    Bool fromString(
        Utf16 &             _to
        , const String &    _FROM
    )
    {
        return ::fromString(
            _to
            , _FROM
        );
    }

    Bool fromString(
        Utf32 &             _to
        , const String &    _FROM
    )
    {
        return ::fromString(
            _to
            , _FROM
        );
    }

    Bool toString(
        String &        _to
        , const Utf8 &  _FROM
    )
    {
        return ::toString(
            _to
            , _FROM
        );
    }

    Bool toString(
        String &        _to
        , const Utf16 & _FROM
    )
    {
        return ::toString(
            _to
            , _FROM
        );
    }

    Bool toString(
        String &        _to
        , const Utf32 & _FROM
    )
    {
        return ::toString(
            _to
            , _FROM
        );
    }

    Bool toUtf8(
        Utf8 &          _to
        , const Utf16 & _FROM
    )
    {
        return convertUnicode(
            _to
            , _FROM
        );
    }

    Bool toUtf8(
        Utf8 &          _to
        , const Utf32 & _FROM
    )
    {
        return convertUnicode(
            _to
            , _FROM
        );
    }

    Bool toUtf16(
        Utf16 &         _to
        , const Utf8 &  _FROM
    )
    {
        return convertUnicode(
            _to
            , _FROM
        );
    }

    Bool toUtf16(
        Utf16 &         _to
        , const Utf32 & _FROM
    )
    {
        return convertUnicode(
            _to
            , _FROM
        );
    }

    Bool toUtf32(
        Utf32 &         _to
        , const Utf8 &  _FROM
    )
    {
        return convertUnicode(
            _to
            , _FROM
        );
    }

    Bool toUtf32(
        Utf32 &         _to
        , const Utf16 & _FROM
    )
    {
        return convertUnicode(
            _to
            , _FROM
        );
    }
}
