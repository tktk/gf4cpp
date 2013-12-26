#ifndef GF4CPP_DEF_MAIN_ARGS_H
#define GF4CPP_DEF_MAIN_ARGS_H

#include "gfpp/def/main/args.h"
#include "gf/def/main/args.h"

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

#endif  // GF4CPP_DEF_MAIN_ARGS_H
