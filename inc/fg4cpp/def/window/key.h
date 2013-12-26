#ifndef FG4CPP_DEF_WINDOW_KEY_H
#define FG4CPP_DEF_WINDOW_KEY_H

#include "fgpp/def/window/key.h"
#include "fg/def/window/key.h"

namespace fg {
    inline const FgKey & toFg(
        const Key & _KEY
    )
    {
        return reinterpret_cast< const FgKey & >( _KEY );
    }

    inline FgKey & toFg(
        Key &   _key
    )
    {
        return reinterpret_cast< FgKey & >( _key );
    }

    inline const FgKey * toFg(
        const Key * _KEY
    )
    {
        return reinterpret_cast< const FgKey * >( _KEY );
    }

    inline FgKey * toFg(
        Key *   _key
    )
    {
        return reinterpret_cast< FgKey * >( _key );
    }

    inline const Key & toFgpp(
        const FgKey &   _KEY
    )
    {
        return reinterpret_cast< const Key & >( _KEY );
    }

    inline Key & toFgpp(
        FgKey & _key
    )
    {
        return reinterpret_cast< Key & >( _key );
    }

    inline const Key * toFgpp(
        const FgKey *   _KEY
    )
    {
        return reinterpret_cast< const Key * >( _KEY );
    }

    inline Key * toFgpp(
        FgKey * _key
    )
    {
        return reinterpret_cast< Key * >( _key );
    }
}

#endif  // FG4CPP_DEF_WINDOW_KEY_H
