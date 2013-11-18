#ifndef GF4CPP_BOOT_LIBRARY_H
#define GF4CPP_BOOT_LIBRARY_H

#include "gfpp/boot/library.h"
#include "gf/boot/library.h"

namespace gf {
    inline const GfLibrary & toGf(
        const gf::Library & _LIBRARY
    )
    {
        return reinterpret_cast< const GfLibrary & >( _LIBRARY );
    }

    inline GfLibrary & toGf(
        gf::Library &   _library
    )
    {
        return reinterpret_cast< GfLibrary & >( _library );
    }

    inline const GfLibrary * toGf(
        const gf::Library * _LIBRARY
    )
    {
        return reinterpret_cast< const GfLibrary * >( _LIBRARY );
    }

    inline GfLibrary * toGf(
        gf::Library *   _library
    )
    {
        return reinterpret_cast< GfLibrary * >( _library );
    }

    inline const gf::Library & toGfpp(
        const GfLibrary &   _LIBRARY
    )
    {
        return reinterpret_cast< const gf::Library & >( _LIBRARY );
    }

    inline gf::Library & toGfpp(
        GfLibrary & _library
    )
    {
        return reinterpret_cast< gf::Library & >( _library );
    }

    inline const gf::Library * toGfpp(
        const GfLibrary *   _LIBRARY
    )
    {
        return reinterpret_cast< const gf::Library * >( _LIBRARY );
    }

    inline gf::Library * toGfpp(
        GfLibrary * _library
    )
    {
        return reinterpret_cast< gf::Library * >( _library );
    }
}

#include "gf4cpp/string/utf32.h"

namespace gf {
    inline Library * newLibrary(
        const Utf32 &   _FILE
        , const Utf32 & _DIR
    )
    {
        return toGfpp(
            gfLibraryNew(
                toGf( &_FILE )
                , toGf( &_DIR )
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
        Library &       _library
        , const Utf32 & _SYMBOL_NAME
    )
    {
        return gfLibraryGetAddress(
            toGf( &_library )
            , toGf( &_SYMBOL_NAME )
        );
    }
}

#endif  // GF4CPP_BOOT_LIBRARY_H
