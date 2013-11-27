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

#include "fg4cpp/gl/contextinfo.h"
#include "fg4cpp/window/window.h"
#include "fgpp/common/primitives.h"

namespace fg {
    inline GLContext * newGLContext(
        const GLContextInfo &   _INFO
    )
    {
        return toFgpp(
            fgGLContextNew(
                toFg( &_INFO )
            )
        );
    }

    inline void free(
        GLContext & _context
    )
    {
        fgGLContextFree( toFg( &_context ) );
    }

    inline Bool glMakeCurrent(
        GLContext & _context
        , Window &  _window
    )
    {
        return fgGLContextMakeCurrent(
            toFg( &_context )
            , toFg( &_window )
        );
    }

    void glMakeCurrent(
    )
    {
        fgGLContextReleaseCurrent();
    }
}

#endif  // FG4CPP_GL_CONTEXT_H
