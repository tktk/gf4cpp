#include "gf/util/export.h"
#include "gf4cpp/common/stringconverter.h"

#include "gf/common/stringconverter.h"
#include "gf4cpp/common/primitives.h"

namespace {
    gf::Size getMaxStringCharLength(
    )
    {
        return GF_STRING_MAX_CHAR_LENGTH;
    }

    gf::Size getMaxCharLength(
        const gf::Utf8 &
    )
    {
        return GF_UTF8_MAX_CHAR_LENGTH;
    }

    gf::Size getMaxCharLength(
        const gf::Utf16 &
    )
    {
        return GF_UTF16_MAX_CHAR_LENGTH;
    }

    gf::Size getMaxCharLength(
        const gf::Utf32 &
    )
    {
        return GF_UTF32_MAX_CHAR_LENGTH;
    }

    template<
        typename TO_T
        , typename FROM_T
        , typename CONVERTER
    >
    gf::Bool convert(
        TO_T &              _to
        , const FROM_T &    _FROM
        , const CONVERTER & _CONVERTER
        , gf::Size          _maxToCharLength
    )
    {
        const auto  FROM_LENGTH = _FROM.length();
        const auto  FROM = _FROM.c_str();

        auto                        bufferLength = FROM_LENGTH * _maxToCharLength;
        typename TO_T::value_type   buffer[ bufferLength ];

        if( _CONVERTER(
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

    template<
        typename FROM_T
        , typename CONVERTER
    >
    gf::Bool toString(
        gf::String &        _to
        , const FROM_T &    _FROM
        , const CONVERTER & _CONVERTER
    )
    {
        return convert(
            _to
            , _FROM
            , _CONVERTER
            , getMaxStringCharLength()
        );
    }

    template<
        typename TO_T
        , typename FROM_T
        , typename CONVERTER
    >
    gf::Bool toUnicode(
        TO_T &              _to
        , const FROM_T &    _FROM
        , const CONVERTER & _CONVERTER
    )
    {
        return convert(
            _to
            , _FROM
            , _CONVERTER
            , getMaxCharLength( _to )
        );
    }
}

namespace gf {
    Bool fromString(
        Utf8 &              _to
        , const String &    _FROM
    )
    {
        return toUnicode(
            _to
            , _FROM
            , [](
                Utf8Char *              _to
                , Size &                _toLength
                , const StringChar *    _FROM
                , Size                  _fromLength
            )
            {
                return gfUtf8FromString(
                    _to
                    , &_toLength
                    , _FROM
                    , _fromLength
                );
            }
        );
    }

    Bool fromString(
        Utf16 &             _to
        , const String &    _FROM
    )
    {
        return toUnicode(
            _to
            , _FROM
            , [](
                Utf16Char *             _to
                , Size &                _toLength
                , const StringChar *    _FROM
                , Size                  _fromLength
            )
            {
                return gfUtf16FromString(
                    _to
                    , &_toLength
                    , _FROM
                    , _fromLength
                );
            }
        );
    }

    Bool fromString(
        Utf32 &             _to
        , const String &    _FROM
    )
    {
        return toUnicode(
            _to
            , _FROM
            , [](
                Utf32Char *             _to
                , Size &                _toLength
                , const StringChar *    _FROM
                , Size                  _fromLength
            )
            {
                return gfUtf32FromString(
                    _to
                    , &_toLength
                    , _FROM
                    , _fromLength
                );
            }
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
            , [](
                StringChar *        _to
                , Size &            _toLength
                , const Utf8Char *  _FROM
                , Size              _fromLength
            )
            {
                return gfStringFromUtf8(
                    _to
                    , &_toLength
                    , _FROM
                    , _fromLength
                );
            }
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
            , [](
                StringChar *        _to
                , Size &            _toLength
                , const Utf16Char * _FROM
                , Size              _fromLength
            )
            {
                return gfStringFromUtf16(
                    _to
                    , &_toLength
                    , _FROM
                    , _fromLength
                );
            }
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
            , [](
                StringChar *        _to
                , Size &            _toLength
                , const Utf32Char * _FROM
                , Size              _fromLength
            )
            {
                return gfStringFromUtf32(
                    _to
                    , &_toLength
                    , _FROM
                    , _fromLength
                );
            }
        );
    }

    Bool toUtf8(
        Utf8 &          _to
        , const Utf16 & _FROM
    )
    {
        return toUnicode(
            _to
            , _FROM
            , [](
                Utf8Char *          _to
                , Size &            _toLength
                , const Utf16Char * _FROM
                , Size              _fromLength
            )
            {
                return gfUtf8FromUtf16(
                    _to
                    , &_toLength
                    , _FROM
                    , _fromLength
                );
            }
        );
    }

    Bool toUtf8(
        Utf8 &          _to
        , const Utf32 & _FROM
    )
    {
        return toUnicode(
            _to
            , _FROM
            , [](
                Utf8Char *          _to
                , Size &            _toLength
                , const Utf32Char * _FROM
                , Size              _fromLength
            )
            {
                return gfUtf8FromUtf32(
                    _to
                    , &_toLength
                    , _FROM
                    , _fromLength
                );
            }
        );
    }

    Bool toUtf16(
        Utf16 &         _to
        , const Utf8 &  _FROM
    )
    {
        return toUnicode(
            _to
            , _FROM
            , [](
                Utf16Char *         _to
                , Size &            _toLength
                , const Utf8Char *  _FROM
                , Size              _fromLength
            )
            {
                return gfUtf16FromUtf8(
                    _to
                    , &_toLength
                    , _FROM
                    , _fromLength
                );
            }
        );
    }

    Bool toUtf16(
        Utf16 &         _to
        , const Utf32 & _FROM
    )
    {
        return toUnicode(
            _to
            , _FROM
            , [](
                Utf16Char *         _to
                , Size &            _toLength
                , const Utf32Char * _FROM
                , Size              _fromLength
            )
            {
                return gfUtf16FromUtf32(
                    _to
                    , &_toLength
                    , _FROM
                    , _fromLength
                );
            }
        );
    }

    Bool toUtf32(
        Utf32 &         _to
        , const Utf8 &  _FROM
    )
    {
        return toUnicode(
            _to
            , _FROM
            , [](
                Utf32Char *         _to
                , Size &            _toLength
                , const Utf8Char *  _FROM
                , Size              _fromLength
            )
            {
                return gfUtf32FromUtf8(
                    _to
                    , &_toLength
                    , _FROM
                    , _fromLength
                );
            }
        );
    }

    Bool toUtf32(
        Utf32 &         _to
        , const Utf16 & _FROM
    )
    {
        return toUnicode(
            _to
            , _FROM
            , [](
                Utf32Char *         _to
                , Size &            _toLength
                , const Utf16Char * _FROM
                , Size              _fromLength
            )
            {
                return gfUtf32FromUtf16(
                    _to
                    , &_toLength
                    , _FROM
                    , _fromLength
                );
            }
        );
    }
}
