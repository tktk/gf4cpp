#ifndef FG4CPP_DEF_GL_CURRENT_H
#define FG4CPP_DEF_GL_CURRENT_H

#include "fgpp/def/gl/current.h"
#include "fg/def/gl/current.h"

namespace fg {
    inline const FgGLCurrent & toFg(
        const GLCurrent &   _CURRENT
    )
    {
        return reinterpret_cast< const FgGLCurrent & >( _CURRENT );
    }

    inline FgGLCurrent & toFg(
        GLCurrent & _current
    )
    {
        return reinterpret_cast< FgGLCurrent & >( _current );
    }

    inline const FgGLCurrent * toFg(
        const GLCurrent *   _CURRENT
    )
    {
        return reinterpret_cast< const FgGLCurrent * >( _CURRENT );
    }

    inline FgGLCurrent * toFg(
        GLCurrent * _current
    )
    {
        return reinterpret_cast< FgGLCurrent * >( _current );
    }

    inline const GLCurrent & toFgpp(
        const FgGLCurrent & _CURRENT
    )
    {
        return reinterpret_cast< const GLCurrent & >( _CURRENT );
    }

    inline GLCurrent & toFgpp(
        FgGLCurrent &   _current
    )
    {
        return reinterpret_cast< GLCurrent & >( _current );
    }

    inline const GLCurrent * toFgpp(
        const FgGLCurrent * _CURRENT
    )
    {
        return reinterpret_cast< const GLCurrent * >( _CURRENT );
    }

    inline GLCurrent * toFgpp(
        FgGLCurrent *   _current
    )
    {
        return reinterpret_cast< GLCurrent * >( _current );
    }
}

#endif  // FG4CPP_DEF_GL_CURRENT_H
