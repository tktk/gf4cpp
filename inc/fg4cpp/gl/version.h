#ifndef FG4CPP_GL_VERSION_H
#define FG4CPP_GL_VERSION_H

#include "fgpp/gl/version.h"
#include "fg/gl/version.h"

namespace fg {
    inline const FgGLVersion & toFg(
        const GLVersion &   _KEY
    )
    {
        return reinterpret_cast< const FgGLVersion & >( _KEY );
    }

    inline FgGLVersion & toFg(
        GLVersion & _key
    )
    {
        return reinterpret_cast< FgGLVersion & >( _key );
    }

    inline const FgGLVersion * toFg(
        const GLVersion *   _KEY
    )
    {
        return reinterpret_cast< const FgGLVersion * >( _KEY );
    }

    inline FgGLVersion * toFg(
        GLVersion * _key
    )
    {
        return reinterpret_cast< FgGLVersion * >( _key );
    }

    inline const GLVersion & toFgpp(
        const FgGLVersion & _KEY
    )
    {
        return reinterpret_cast< const GLVersion & >( _KEY );
    }

    inline GLVersion & toFgpp(
        FgGLVersion &   _key
    )
    {
        return reinterpret_cast< GLVersion & >( _key );
    }

    inline const GLVersion * toFgpp(
        const FgGLVersion * _KEY
    )
    {
        return reinterpret_cast< const GLVersion * >( _KEY );
    }

    inline GLVersion * toFgpp(
        FgGLVersion *   _key
    )
    {
        return reinterpret_cast< GLVersion * >( _key );
    }
}

#endif  // FG4CPP_GL_VERSION_H
