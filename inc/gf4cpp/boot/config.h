#ifndef GF4CPP_BOOT_CONFIG_H
#define GF4CPP_BOOT_CONFIG_H

#include "gfpp/boot/config.h"
#include "gf/boot/config.h"

namespace gf {
    inline const GfBootConfig & toGf(
        const BootConfig &  _CONFIG
    )
    {
        return reinterpret_cast< const GfBootConfig & >( _CONFIG );
    }

    inline GfBootConfig & toGf(
        BootConfig & _config
    )
    {
        return reinterpret_cast< GfBootConfig & >( _config );
    }

    inline const GfBootConfig * toGf(
        const BootConfig *  _CONFIG
    )
    {
        return reinterpret_cast< const GfBootConfig * >( _CONFIG );
    }

    inline GfBootConfig * toGf(
        BootConfig *    _config
    )
    {
        return reinterpret_cast< GfBootConfig * >( _config );
    }

    inline const BootConfig & toGfpp(
        const GfBootConfig &    _CONFIG
    )
    {
        return reinterpret_cast< const BootConfig & >( _CONFIG );
    }

    inline BootConfig & toGfpp(
        GfBootConfig &  _config
    )
    {
        return reinterpret_cast< BootConfig & >( _config );
    }

    inline const BootConfig * toGfpp(
        const GfBootConfig *    _CONFIG
    )
    {
        return reinterpret_cast< const BootConfig * >( _CONFIG );
    }

    inline BootConfig * toGfpp(
        GfBootConfig *  _config
    )
    {
        return reinterpret_cast< BootConfig * >( _config );
    }
}

#include "fg4cpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace gf {
    inline BootConfig * newBootConfig(
    )
    {
        return toGfpp( gfBootConfigNew() );
    }

    inline void free(
        BootConfig &    _config
    )
    {
        gfBootConfigFree(
            toGf( &_config )
        );
    }

    inline const fg::Utf32 * getBinDir(
        const BootConfig &  _CONFIG
    )
    {
        return fg::toFgpp(
            gfBootConfigGetBinDir(
                toGf( &_CONFIG )
            )
        );
    }

    inline fg::Bool setBinDir(
        BootConfig &        _config
        , const fg::Utf32 & _BIN_DIR
    )
    {
        return gfBootConfigSetBinDir(
            toGf( &_config )
            , fg::toFg( &_BIN_DIR )
        );
    }
}

#endif  // GF4CPP_BOOT_CONFIG_H
