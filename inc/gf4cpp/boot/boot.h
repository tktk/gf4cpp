#ifndef GF4CPP_BOOT_BOOT_H
#define GF4CPP_BOOT_BOOT_H

#include "gf/boot/boot.h"

#include "gfpp/boot/gameconfig.h"
#include "gfpp/common/primitives.h"

namespace gf {
    inline Int boot(
        const GameConfig &  _GAME_CONFIG
    )
    {
        return gfBoot(
            &_GAME_CONFIG
        );
    }
}

#endif  // GF4CPP_BOOT_BOOT_H
