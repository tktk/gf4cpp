#ifndef GF4CPP_BOOT_LIBRARY_H
#define GF4CPP_BOOT_LIBRARY_H

#include "gfpp/boot/library.h"
#include "gf/boot/library.h"

namespace gf {
    inline const GfLibrary & toGf(
        const Library & _LIBRARY
    )
    {
        return reinterpret_cast< const GfLibrary & >( _LIBRARY );
    }

    inline GfLibrary & toGf(
        Library &   _library
    )
    {
        return reinterpret_cast< GfLibrary & >( _library );
    }

    inline const GfLibrary * toGf(
        const Library * _LIBRARY
    )
    {
        return reinterpret_cast< const GfLibrary * >( _LIBRARY );
    }

    inline GfLibrary * toGf(
        Library *   _library
    )
    {
        return reinterpret_cast< GfLibrary * >( _library );
    }

    inline const Library & toGfpp(
        const GfLibrary &   _LIBRARY
    )
    {
        return reinterpret_cast< const Library & >( _LIBRARY );
    }

    inline Library & toGfpp(
        GfLibrary & _library
    )
    {
        return reinterpret_cast< Library & >( _library );
    }

    inline const Library * toGfpp(
        const GfLibrary *   _LIBRARY
    )
    {
        return reinterpret_cast< const Library * >( _LIBRARY );
    }

    inline Library * toGfpp(
        GfLibrary * _library
    )
    {
        return reinterpret_cast< Library * >( _library );
    }
}

#include "fg4cpp/string/utf32.h"

namespace gf {
    inline Library * newLibrary(
        const fg::Utf32 &   _FILE
        , const fg::Utf32 & _DIR
    )
    {
        return toGfpp(
            gfLibraryNew(
                fg::toFg( &_FILE )
                , fg::toFg( &_DIR )
            )
        );
    }

    inline void free(
        Library &   _library
    )
    {
        gfLibraryFree(
            toGf( &_library )
        );
    }

    inline void * getAddress(
        Library &           _library
        , const fg::Utf32 & _SYMBOL_NAME
    )
    {
        return gfLibraryGetAddress(
            toGf( &_library )
            , fg::toFg( &_SYMBOL_NAME )
        );
    }
}

#endif  // GF4CPP_BOOT_LIBRARY_H
