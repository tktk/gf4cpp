#ifndef FG4CPP_BOOT_CONFIG_H
#define FG4CPP_BOOT_CONFIG_H

#include "fgpp/boot/config.h"
#include "fg/boot/config.h"

namespace fg {
    inline const FgBootConfig & toFg(
        const BootConfig &  _CONFIG
    )
    {
        return reinterpret_cast< const FgBootConfig & >( _CONFIG );
    }

    inline FgBootConfig & toFg(
        BootConfig & _config
    )
    {
        return reinterpret_cast< FgBootConfig & >( _config );
    }

    inline const FgBootConfig * toFg(
        const BootConfig *  _CONFIG
    )
    {
        return reinterpret_cast< const FgBootConfig * >( _CONFIG );
    }

    inline FgBootConfig * toFg(
        BootConfig *    _config
    )
    {
        return reinterpret_cast< FgBootConfig * >( _config );
    }

    inline const BootConfig & toFgpp(
        const FgBootConfig &    _CONFIG
    )
    {
        return reinterpret_cast< const BootConfig & >( _CONFIG );
    }

    inline BootConfig & toFgpp(
        FgBootConfig &  _config
    )
    {
        return reinterpret_cast< BootConfig & >( _config );
    }

    inline const BootConfig * toFgpp(
        const FgBootConfig *    _CONFIG
    )
    {
        return reinterpret_cast< const BootConfig * >( _CONFIG );
    }

    inline BootConfig * toFgpp(
        FgBootConfig *  _config
    )
    {
        return reinterpret_cast< BootConfig * >( _config );
    }
}

#include "fg4cpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace fg {
    inline BootConfig * newBootConfig(
    )
    {
        return toFgpp( fgBootConfigNew() );
    }

    inline void free(
        BootConfig &    _config
    )
    {
        fgBootConfigFree(
            toFg( &_config )
        );
    }

    inline const Utf32 * getBinDir(
        const BootConfig &  _CONFIG
    )
    {
        return toFgpp(
            fgBootConfigGetBinDir(
                toFg( &_CONFIG )
            )
        );
    }

    inline Bool setBinDir(
        BootConfig &    _config
        , const Utf32 & _BIN_DIR
    )
    {
        return fgBootConfigSetBinDir(
            toFg( &_config )
            , toFg( &_BIN_DIR )
        );
    }
}

#endif  // FG4CPP_BOOT_CONFIG_H
