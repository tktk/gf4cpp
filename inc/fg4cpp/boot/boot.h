#ifndef FG4CPP_BOOT_BOOT_H
#define FG4CPP_BOOT_BOOT_H

#include "fg/boot/boot.h"

#include "fg4cpp/boot/config.h"
#include "fg4cpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace fg {
    inline Int boot(
        const Utf32 &           _MAIN_FILE_NAME
        , const Utf32 &         _MAIN_NAME
        , const BootConfig &    _CONFIG
    )
    {
        return fgBoot(
            toFg( &_MAIN_FILE_NAME )
            , toFg( &_MAIN_NAME )
            , toFg( &_CONFIG )
        );
    }
}

#endif  // FG4CPP_BOOT_BOOT_H
