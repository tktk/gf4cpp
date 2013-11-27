#ifndef FG4CPP_BOOT_LIBRARY_H
#define FG4CPP_BOOT_LIBRARY_H

#include "fgpp/boot/library.h"
#include "fg/boot/library.h"

namespace fg {
    inline const FgLibrary & toFg(
        const Library & _LIBRARY
    )
    {
        return reinterpret_cast< const FgLibrary & >( _LIBRARY );
    }

    inline FgLibrary & toFg(
        Library &   _library
    )
    {
        return reinterpret_cast< FgLibrary & >( _library );
    }

    inline const FgLibrary * toFg(
        const Library * _LIBRARY
    )
    {
        return reinterpret_cast< const FgLibrary * >( _LIBRARY );
    }

    inline FgLibrary * toFg(
        Library *   _library
    )
    {
        return reinterpret_cast< FgLibrary * >( _library );
    }

    inline const Library & toFgpp(
        const FgLibrary &   _LIBRARY
    )
    {
        return reinterpret_cast< const Library & >( _LIBRARY );
    }

    inline Library & toFgpp(
        FgLibrary & _library
    )
    {
        return reinterpret_cast< Library & >( _library );
    }

    inline const Library * toFgpp(
        const FgLibrary *   _LIBRARY
    )
    {
        return reinterpret_cast< const Library * >( _LIBRARY );
    }

    inline Library * toFgpp(
        FgLibrary * _library
    )
    {
        return reinterpret_cast< Library * >( _library );
    }
}

#include "fg4cpp/string/utf32.h"

namespace fg {
    inline Library * newLibrary(
        const Utf32 &   _FILE
        , const Utf32 & _DIR
    )
    {
        return toFgpp(
            fgLibraryNew(
                toFg( &_FILE )
                , toFg( &_DIR )
            )
        );
    }

    inline void free(
        Library &   _library
    )
    {
        fgLibraryFree(
            toFg( &_library )
        );
    }

    inline void * getAddress(
        Library &       _library
        , const Utf32 & _SYMBOL_NAME
    )
    {
        return fgLibraryGetAddress(
            toFg( &_library )
            , toFg( &_SYMBOL_NAME )
        );
    }
}

#endif  // FG4CPP_BOOT_LIBRARY_H
