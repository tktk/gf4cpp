#ifndef GF4CPP_DEF_MAIN_LIBRARY_H
#define GF4CPP_DEF_MAIN_LIBRARY_H

#include "gfpp/def/main/library.h"
#include "gf/def/main/library.h"

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

#endif  // GF4CPP_DEF_MAIN_LIBRARY_H
