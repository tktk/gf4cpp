#ifndef GF4CPP_WINDOW_KEY_H
#define GF4CPP_WINDOW_KEY_H

#include "gfpp/window/key.h"
#include "gf/window/key.h"

namespace gf {
    inline const GfKey & toGf(
        const Key & _KEY
    )
    {
        return reinterpret_cast< const GfKey & >( _KEY );
    }

    inline GfKey & toGf(
        Key &   _key
    )
    {
        return reinterpret_cast< GfKey & >( _key );
    }

    inline const GfKey * toGf(
        const Key * _KEY
    )
    {
        return reinterpret_cast< const GfKey * >( _KEY );
    }

    inline GfKey * toGf(
        Key *   _key
    )
    {
        return reinterpret_cast< GfKey * >( _key );
    }

    inline const Key & toGfpp(
        const GfKey &   _KEY
    )
    {
        return reinterpret_cast< const Key & >( _KEY );
    }

    inline Key & toGfpp(
        GfKey & _key
    )
    {
        return reinterpret_cast< Key & >( _key );
    }

    inline const Key * toGfpp(
        const GfKey *   _KEY
    )
    {
        return reinterpret_cast< const Key * >( _KEY );
    }

    inline Key * toGfpp(
        GfKey * _key
    )
    {
        return reinterpret_cast< Key * >( _key );
    }
}

#endif  // GF4CPP_WINDOW_KEY_H
