#ifndef GF4CPP_MAIN_ARGS_H
#define GF4CPP_MAIN_ARGS_H

#include "gfpp/main/args.h"
#include "gf/main/args.h"

namespace gf {
    inline FgArgs & toGf(
        fg::Args &  _gameConfig
    )
    {
        return reinterpret_cast< FgArgs & >( _gameConfig );
    }

    inline FgArgs * toGf(
        fg::Args *  _gameConfig
    )
    {
        return reinterpret_cast< FgArgs * >( _gameConfig );
    }

    inline fg::Args & toGfpp(
        FgArgs &    _gameConfig
    )
    {
        return reinterpret_cast< fg::Args & >( _gameConfig );
    }

    inline fg::Args * toGfpp(
        FgArgs *    _gameConfig
    )
    {
        return reinterpret_cast< fg::Args * >( _gameConfig );
    }
}

#include "fg4cpp/boot/gameconfig.h"

namespace gf {
    inline fg::Args * newArgs(
        const fg::GameConfig &  _CONFIG
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
