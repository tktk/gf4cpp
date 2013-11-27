#ifndef FG4CPP_BOOT_BOOT_H
#define FG4CPP_BOOT_BOOT_H

#include "fg/boot/boot.h"

#include "fg4cpp/boot/gameconfig.h"
#include "fgpp/common/primitives.h"

namespace fg {
    inline Int boot(
        const GameConfig &  _GAME_CONFIG
    )
    {
        return fgBoot(
            toFg( &_GAME_CONFIG )
        );
    }
}

#endif  // FG4CPP_BOOT_BOOT_H
