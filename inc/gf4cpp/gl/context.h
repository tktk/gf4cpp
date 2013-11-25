#ifndef GF4CPP_GL_CONTEXT_H
#define GF4CPP_GL_CONTEXT_H

#include "gfpp/gl/context.h"
#include "gf/gl/context.h"

namespace gf {
    inline const GfGLContext & toGf(
        const GLContext &   _CONTEXT
    )
    {
        return reinterpret_cast< const GfGLContext & >( _CONTEXT );
    }

    inline GfGLContext & toGf(
        GLContext & _context
    )
    {
        return reinterpret_cast< GfGLContext & >( _context );
    }

    inline const GfGLContext * toGf(
        const GLContext *   _CONTEXT
    )
    {
        return reinterpret_cast< const GfGLContext * >( _CONTEXT );
    }

    inline GfGLContext * toGf(
        GLContext * _context
    )
    {
        return reinterpret_cast< GfGLContext * >( _context );
    }

    inline const GLContext & toGfpp(
        const GfGLContext & _CONTEXT
    )
    {
        return reinterpret_cast< const GLContext & >( _CONTEXT );
    }

    inline GLContext & toGfpp(
        GfGLContext &   _context
    )
    {
        return reinterpret_cast< GLContext & >( _context );
    }

    inline const GLContext * toGfpp(
        const GfGLContext * _CONTEXT
    )
    {
        return reinterpret_cast< const GLContext * >( _CONTEXT );
    }

    inline GLContext * toGfpp(
        GfGLContext *   _context
    )
    {
        return reinterpret_cast< GLContext * >( _context );
    }
}

#include "gf4cpp/gl/contextinfo.h"
#include "gf4cpp/window/window.h"
#include "gfpp/common/primitives.h"

namespace gf {
    inline GLContext * newGLContext(
        const GLContextInfo &   _INFO
    )
    {
        return toGfpp(
            gfGLContextNew(
                toGf( &_INFO )
            )
        );
    }

    inline void free(
        GLContext & _context
    )
    {
        gfGLContextFree( toGf( &_context ) );
    }

    inline Bool glMakeCurrent(
        GLContext & _context
        , Window &  _window
    )
    {
        return gfGLContextMakeCurrent(
            toGf( &_context )
            , toGf( &_window )
        );
    }

    void glMakeCurrent(
    )
    {
        gfGLContextReleaseCurrent();
    }
}

#endif  // GF4CPP_GL_CONTEXT_H
