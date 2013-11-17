#ifndef SUCROSE4CPP_BOOT_LIBRARY_H
#define SUCROSE4CPP_BOOT_LIBRARY_H

#include "gf4cpp/boot/library.h"
#include "gf/boot/library.h"

#include "gf4cpp/string/utf32.h"

namespace gf {
    inline Library * newLibrary(
        const Utf32 &   _FILE
        , const Utf32 & _DIR
    )
    {
        return gfLibraryNew(
            &_FILE
            , &_DIR
        );
    }

    inline void free(
        Library &   _library
    )
    {
        gfLibraryFree(
            &_library
        );
    }

    inline void * getAddress(
        Library &       _library
        , const Utf32 & _SYMBOL_NAME
    )
    {
        return gfLibraryGetAddress(
            &_library
            , &_SYMBOL_NAME
        );
    }
}

#endif  // SUCROSE4CPP_BOOT_LIBRARY_H
