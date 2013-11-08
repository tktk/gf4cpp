#include "gf/util/export.h"
#include "gf4cpp/common/stringconverter.h"

#include "sucrose4cpp/common/linux/stringconverter.h"
#include "gf4cpp/common/primitives.h"

#include <iconv.h>
#include <locale.h>
#include <langinfo.h>

namespace {
    const auto  MAX_CHARACTER_SIZE = 6; // UTF-8の1文字最大符号数

    const gf::StringChar    ENCODE_UTF8[] = "UTF-8";
    const gf::StringChar    ENCODE_UTF16[] = "UTF-16LE";
    const gf::StringChar    ENCODE_UTF32[] = "UTF-32LE";
    const gf::StringChar *  ENCODE_STRING;

    class IconvDeleter
    {
    private:
        iconv_t &   iconv_;

    public:
        IconvDeleter(
            iconv_t &   _iconv_
        )
            : iconv_( _iconv_ )
        {
        }

        ~IconvDeleter(
        )
        {
            iconv_close( this->iconv_ );
        }
    };

    template< typename T >
    const gf::StringChar * getEncodeUnicode(
        const T &
    );

    template<>
    const gf::StringChar * getEncodeUnicode(
        const gf::Utf8 &
    )
    {
        return ENCODE_UTF8;
    }

    template<>
    const gf::StringChar * getEncodeUnicode(
        const gf::Utf16 &
    )
    {
        return ENCODE_UTF16;
    }

    template<>
    const gf::StringChar * getEncodeUnicode(
        const gf::Utf32 &
    )
    {
        return ENCODE_UTF32;
    }

    const gf::StringChar * getEncodeString(
    )
    {
        return ENCODE_STRING;
    }

    gf::Bool convert(
        const gf::StringChar *      _ENCODE_TO
        , const gf::StringChar *    _ENCODE_FROM
        , gf::Byte *                _buffer
        , gf::Size &                _bufferSize
        , void *                    _input
        , gf::Size                  _inputSize
    )
    {
        auto    iconv_ = iconv_open(
            _ENCODE_TO
            , _ENCODE_FROM
        );
        if( iconv_ == reinterpret_cast< iconv_t >( -1 ) ) {
            return false;
        }
        IconvDeleter    deleter( iconv_ );

        auto    input = static_cast< gf::Byte * >( _input );

        auto    outputSize = _bufferSize;

        if( iconv(
            iconv_
            , &input
            , &_inputSize
            , &_buffer
            , &outputSize
        ) < 0 ) {
            return false;
        }

        if( _inputSize > 0 ) {
            return false;
        }

        _bufferSize -= outputSize;

        return true;
    }

    template<
        typename TO_T
        , typename FROM_T
    >
    gf::Bool convert(
        const gf::StringChar *      _ENCODE_TO
        , const gf::StringChar *    _ENCODE_FROM
        , TO_T &                    _to
        , const FROM_T &            _FROM
    )
    {
        const auto  LENGTH = _FROM.length();

        const auto  INPUT_SIZE = LENGTH * sizeof( typename FROM_T::value_type );
        auto        input = const_cast< typename FROM_T::value_type * >( _FROM.c_str() );

        auto        bufferSize = LENGTH * MAX_CHARACTER_SIZE;
        gf::Byte    buffer[ bufferSize ];

        const auto  CONVERTED = convert(
            _ENCODE_TO
            , _ENCODE_FROM
            , buffer
            , bufferSize
            , input
            , INPUT_SIZE
        );

        if( CONVERTED == false ) {
            return false;
        }

        _to.assign(
            reinterpret_cast< typename TO_T::value_type * >( buffer )
            , bufferSize / sizeof( typename TO_T::value_type )
        );

        return true;
    }

    template< typename TO_T >
    gf::Bool fromString(
        TO_T &                  _to
        , const gf::String &    _FROM
    )
    {
        return convert(
            getEncodeUnicode( _to )
            , getEncodeString()
            , _to
            , _FROM
        );
    }

    template< typename FROM_T >
    gf::Bool toString(
        gf::String &        _to
        , const FROM_T &    _FROM
    )
    {
        return convert(
            getEncodeString()
            , getEncodeUnicode( _FROM )
            , _to
            , _FROM
        );
    }

    template<
        typename TO_T
        , typename FROM_T
    >
    gf::Bool convertUnicode(
        TO_T &              _to
        , const FROM_T &    _FROM
    )
    {
        return convert(
            getEncodeUnicode( _to )
            , getEncodeUnicode( _FROM )
            , _to
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
        return ::convertUnicode(
            _to
            , _FROM
        );
    }

    Bool toUtf8(
        Utf8 &          _to
        , const Utf32 & _FROM
    )
    {
        return ::convertUnicode(
            _to
            , _FROM
        );
    }

    Bool toUtf16(
        Utf16 &         _to
        , const Utf8 &  _FROM
    )
    {
        return ::convertUnicode(
            _to
            , _FROM
        );
    }

    Bool toUtf16(
        Utf16 &         _to
        , const Utf32 & _FROM
    )
    {
        return ::convertUnicode(
            _to
            , _FROM
        );
    }

    Bool toUtf32(
        Utf32 &         _to
        , const Utf8 &  _FROM
    )
    {
        return ::convertUnicode(
            _to
            , _FROM
        );
    }

    Bool toUtf32(
        Utf32 &         _to
        , const Utf16 & _FROM
    )
    {
        return ::convertUnicode(
            _to
            , _FROM
        );
    }
}

namespace sucrose {
    void initializeStringConverter(
    )
    {
        setlocale( LC_CTYPE, "" );

        ENCODE_STRING = nl_langinfo( CODESET );
    }
}
