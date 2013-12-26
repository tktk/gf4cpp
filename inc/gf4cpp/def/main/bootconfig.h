#ifndef GF4CPP_DEF_MAIN_BOOTCONFIG_H
#define GF4CPP_DEF_MAIN_BOOTCONFIG_H

#include "gfpp/def/main/bootconfig.h"
#include "gf/def/main/bootconfig.h"

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

#endif  // GF4CPP_DEF_MAIN_BOOTCONFIG_H
