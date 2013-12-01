#ifndef GF4CPP_BOOT_BOOT_H
#define GF4CPP_BOOT_BOOT_H

#include "gf/boot/boot.h"

#include "gf4cpp/boot/config.h"
#include "fg4cpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace gf {
    inline fg::Int boot(
        const fg::Utf32 &       _MAIN_FILE_NAME
        , const fg::Utf32 &     _MAIN_NAME
        , const BootConfig &    _CONFIG
    )
    {
        return gfBoot(
            fg::toFg( &_MAIN_FILE_NAME )
            , fg::toFg( &_MAIN_NAME )
            , toGf( &_CONFIG )
        );
    }
}

#endif  // GF4CPP_BOOT_BOOT_H
