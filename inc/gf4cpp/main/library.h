#ifndef GF4CPP_MAIN_LIBRARY_H
#define GF4CPP_MAIN_LIBRARY_H

#include "gfpp/main/library.h"
#include "gf/main/library.h"
#include "gf4cpp/def/main/library.h"
#include "fg4cpp/def/string/utf32.h"

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

#endif  // GF4CPP_MAIN_LIBRARY_H
