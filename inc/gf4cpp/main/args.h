#ifndef GF4CPP_MAIN_ARGS_H
#define GF4CPP_MAIN_ARGS_H

#include "gfpp/main/args.h"
#include "gf/main/args.h"
#include "gf4cpp/def/main/args.h"
#include "gf4cpp/def/main/bootconfig.h"

namespace gf {
    inline fg::Args * newArgs(
        const BootConfig &  _CONFIG
    )
    {
        return toGfpp(
            gfArgsNew(
                toGf( &_CONFIG )
            )
        );
    }

    inline void free(
        fg::Args &  _args
    )
    {
        gfArgsFree(
            toGf( &_args )
        );
    }
}

#endif  // GF4CPP_MAIN_ARGS_H
