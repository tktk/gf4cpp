#ifndef GF4CPP_MAIN_BOOT_H
#define GF4CPP_MAIN_BOOT_H

#include "gfpp/main/boot.h"
#include "gf/main/boot.h"
#include "gf4cpp/def/main/bootconfig.h"
#include "fg4cpp/def/string/utf32.h"
#include "fgpp/def/common/primitives.h"

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

#endif  // GF4CPP_MAIN_BOOT_H
