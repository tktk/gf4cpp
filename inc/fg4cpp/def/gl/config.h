#ifndef FG4CPP_DEF_GL_CONFIG_H
#define FG4CPP_DEF_GL_CONFIG_H

#include "fgpp/def/gl/config.h"
#include "fg/def/gl/config.h"

namespace fg {
    inline const FgGLConfig & toFg(
        const GLConfig &    _CONFIG
    )
    {
        return reinterpret_cast< const FgGLConfig & >( _CONFIG );
    }

    inline const FgGLConfig * toFg(
        const GLConfig *    _CONFIG
    )
    {
        return reinterpret_cast< const FgGLConfig * >( _CONFIG );
    }

    inline const GLConfig & toFgpp(
        const FgGLConfig &  _CONFIG
    )
    {
        return reinterpret_cast< const GLConfig & >( _CONFIG );
    }

    inline const GLConfig * toFgpp(
        const FgGLConfig *  _CONFIG
    )
    {
        return reinterpret_cast< const GLConfig * >( _CONFIG );
    }
}

#endif  // FG4CPP_DEF_GL_CONFIG_H
