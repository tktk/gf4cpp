#ifndef FG4CPP_MAIN_ARGS_H
#define FG4CPP_MAIN_ARGS_H

#include "fgpp/main/args.h"
#include "fg/main/args.h"
#include "fg4cpp/def/main/args.h"
#include "fg4cpp/def/gl/config.h"

namespace fg {
    inline const GLConfig * getGLConfig(
        const Args &    _ARGS
    )
    {
        return toFgpp(
            fgArgsGetGLConfig(
                toFg( &_ARGS )
            )
        );
    }
}

#endif  // FG4CPP_MAIN_ARGS_H
