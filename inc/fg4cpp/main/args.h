#ifndef FG4CPP_MAIN_ARGS_H
#define FG4CPP_MAIN_ARGS_H

#include "fgpp/main/args.h"
#include "fg/main/args.h"

namespace fg {
    inline const FgArgs & toFg(
        const Args &    _GAME_CONFIG
    )
    {
        return reinterpret_cast< const FgArgs & >( _GAME_CONFIG );
    }

    inline const FgArgs * toFg(
        const Args *    _GAME_CONFIG
    )
    {
        return reinterpret_cast< const FgArgs * >( _GAME_CONFIG );
    }

    inline const Args & toFgpp(
        const FgArgs &  _GAME_CONFIG
    )
    {
        return reinterpret_cast< const Args & >( _GAME_CONFIG );
    }

    inline const Args * toFgpp(
        const FgArgs *  _GAME_CONFIG
    )
    {
        return reinterpret_cast< const Args * >( _GAME_CONFIG );
    }
}

#include "fg4cpp/gl/config.h"

namespace fg {
    inline const GLConfig & getGLConfig(
        const Args &    _ARGS
    )
    {
        return toFgpp(
            *fgArgsGetGLConfig(
                toFg( &_ARGS )
            )
        );
    }
}

#endif  // FG4CPP_MAIN_ARGS_H
