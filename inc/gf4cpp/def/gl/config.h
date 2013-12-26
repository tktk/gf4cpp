#ifndef GF4CPP_DEF_GL_CONFIG_H
#define GF4CPP_DEF_GL_CONFIG_H

#include "fgpp/def/gl/config.h"
#include "fg/def/gl/config.h"

namespace gf {
    inline FgGLConfig & toGf(
        fg::GLConfig &  _config
    )
    {
        return reinterpret_cast< FgGLConfig & >( _config );
    }

    inline FgGLConfig * toGf(
        fg::GLConfig *  _config
    )
    {
        return reinterpret_cast< FgGLConfig * >( _config );
    }

    inline fg::GLConfig & toGfpp(
        FgGLConfig &    _config
    )
    {
        return reinterpret_cast< fg::GLConfig & >( _config );
    }

    inline fg::GLConfig * toGfpp(
        FgGLConfig *    _config
    )
    {
        return reinterpret_cast< fg::GLConfig * >( _config );
    }
}

#endif  // GF4CPP_DEF_GL_CONFIG_H
