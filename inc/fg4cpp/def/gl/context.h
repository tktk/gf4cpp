#ifndef FG4CPP_DEF_GL_CONTEXT_H
#define FG4CPP_DEF_GL_CONTEXT_H

#include "fgpp/def/gl/context.h"
#include "fg/def/gl/context.h"

namespace fg {
    inline const FgGLContext & toFg(
        const GLContext &   _CONTEXT
    )
    {
        return reinterpret_cast< const FgGLContext & >( _CONTEXT );
    }

    inline FgGLContext & toFg(
        GLContext & _context
    )
    {
        return reinterpret_cast< FgGLContext & >( _context );
    }

    inline const FgGLContext * toFg(
        const GLContext *   _CONTEXT
    )
    {
        return reinterpret_cast< const FgGLContext * >( _CONTEXT );
    }

    inline FgGLContext * toFg(
        GLContext * _context
    )
    {
        return reinterpret_cast< FgGLContext * >( _context );
    }

    inline const GLContext & toFgpp(
        const FgGLContext & _CONTEXT
    )
    {
        return reinterpret_cast< const GLContext & >( _CONTEXT );
    }

    inline GLContext & toFgpp(
        FgGLContext &   _context
    )
    {
        return reinterpret_cast< GLContext & >( _context );
    }

    inline const GLContext * toFgpp(
        const FgGLContext * _CONTEXT
    )
    {
        return reinterpret_cast< const GLContext * >( _CONTEXT );
    }

    inline GLContext * toFgpp(
        FgGLContext *   _context
    )
    {
        return reinterpret_cast< GLContext * >( _context );
    }
}

#endif  // FG4CPP_DEF_GL_CONTEXT_H
