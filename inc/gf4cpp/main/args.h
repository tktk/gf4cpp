#ifndef GF4CPP_MAIN_ARGS_H
#define GF4CPP_MAIN_ARGS_H

#include "gfpp/main/args.h"
#include "gf/main/args.h"

namespace gf {
    inline FgArgs & toGf(
        fg::Args &  _args
    )
    {
        return reinterpret_cast< FgArgs & >( _args );
    }

    inline FgArgs * toGf(
        fg::Args *  _args
    )
    {
        return reinterpret_cast< FgArgs * >( _args );
    }

    inline fg::Args & toGfpp(
        FgArgs &    _args
    )
    {
        return reinterpret_cast< fg::Args & >( _args );
    }

    inline fg::Args * toGfpp(
        FgArgs *    _args
    )
    {
        return reinterpret_cast< fg::Args * >( _args );
    }
}

#include "fg4cpp/boot/config.h"

namespace gf {
    inline fg::Args * newArgs(
        const fg::BootConfig &  _CONFIG
    )
    {
        return toGfpp(
            gfArgsNew(
                fg::toFg( &_CONFIG )
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
