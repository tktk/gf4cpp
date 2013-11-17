#ifndef SUCROSE4CPP_BOOT_BOOT_H
#define SUCROSE4CPP_BOOT_BOOT_H

#include "gf/boot/boot.h"

#include "gf4cpp/boot/gameconfig.h"
#include "gf4cpp/common/primitives.h"

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

#endif  // SUCROSE4CPP_BOOT_BOOT_H
