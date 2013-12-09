#ifndef FG4CPP_GL_CONTEXT_H
#define FG4CPP_GL_CONTEXT_H

#include "fgpp/gl/context.h"
#include "fg/gl/context.h"

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

#include "fg4cpp/gl/config.h"

namespace fg {
    inline GLContext * newGLContext(
        const GLConfig &    _CONFIG
    )
    {
        return toFgpp(
            fgGLContextNew(
                toFg( &_CONFIG )
            )
        );
    }

    inline void free(
        GLContext & _context
    )
    {
        fgGLContextFree( toFg( &_context ) );
    }
}

#endif  // FG4CPP_GL_CONTEXT_H
