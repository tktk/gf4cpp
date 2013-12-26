#ifndef FG4CPP_DEF_MAIN_ARGS_H
#define FG4CPP_DEF_MAIN_ARGS_H

#include "fgpp/def/main/args.h"
#include "fg/def/main/args.h"

namespace fg {
    inline const FgArgs & toFg(
        const Args &    _ARGS
    )
    {
        return reinterpret_cast< const FgArgs & >( _ARGS );
    }

    inline const FgArgs * toFg(
        const Args *    _ARGS
    )
    {
        return reinterpret_cast< const FgArgs * >( _ARGS );
    }

    inline const Args & toFgpp(
        const FgArgs &  _ARGS
    )
    {
        return reinterpret_cast< const Args & >( _ARGS );
    }

    inline const Args * toFgpp(
        const FgArgs *  _ARGS
    )
    {
        return reinterpret_cast< const Args * >( _ARGS );
    }
}

#endif  // FG4CPP_DEF_MAIN_ARGS_H
