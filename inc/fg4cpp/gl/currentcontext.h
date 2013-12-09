#ifndef FG4CPP_GL_CURRENTCONTEXT_H
#define FG4CPP_GL_CURRENTCONTEXT_H

#include "fgpp/gl/currentcontext.h"
#include "fg/gl/currentcontext.h"

namespace fg {
    inline const FgGLCurrentContext & toFg(
        const GLCurrentContext &    _CONTEXT
    )
    {
        return reinterpret_cast< const FgGLCurrentContext & >( _CONTEXT );
    }

    inline FgGLCurrentContext & toFg(
        GLCurrentContext &  _context
    )
    {
        return reinterpret_cast< FgGLCurrentContext & >( _context );
    }

    inline const FgGLCurrentContext * toFg(
        const GLCurrentContext *    _CONTEXT
    )
    {
        return reinterpret_cast< const FgGLCurrentContext * >( _CONTEXT );
    }

    inline FgGLCurrentContext * toFg(
        GLCurrentContext *  _context
    )
    {
        return reinterpret_cast< FgGLCurrentContext * >( _context );
    }

    inline const GLCurrentContext & toFgpp(
        const FgGLCurrentContext &  _CONTEXT
    )
    {
        return reinterpret_cast< const GLCurrentContext & >( _CONTEXT );
    }

    inline GLCurrentContext & toFgpp(
        FgGLCurrentContext &    _context
    )
    {
        return reinterpret_cast< GLCurrentContext & >( _context );
    }

    inline const GLCurrentContext * toFgpp(
        const FgGLCurrentContext *  _CONTEXT
    )
    {
        return reinterpret_cast< const GLCurrentContext * >( _CONTEXT );
    }

    inline GLCurrentContext * toFgpp(
        FgGLCurrentContext *    _context
    )
    {
        return reinterpret_cast< GLCurrentContext * >( _context );
    }
}

#include "fg4cpp/gl/context.h"
#include "fg4cpp/gl/functions.h"
#include "fg4cpp/window/window.h"

namespace fg {
    inline GLCurrentContext * getOrNewGLCurrentContext(
        GLContext & _context
        , Window &  _window
    )
    {
        return toFgpp(
            fgGLCurrentContextGetOrNew(
                toFg( &_context )
                , toFg( &_window )
            )
        );
    }

    inline void free(
        GLCurrentContext &  _context
    )
    {
        fgGLCurrentContextFree(
            toFg( &_context )
        );
    }

    inline void swapBuffers(
        GLCurrentContext &  _context
    )
    {
        fgGLCurrentContextSwapBuffers(
            toFg( &_context )
        );
    }
}

#define GL_ARGS( ... ) \
    GLCurrentContext & _context __VA_ARGS__
#define GL_VALUES( ... ) \
    toFg( &_context ) __VA_ARGS__
#define GL_DEFINE_FUNCTION( _proc, _name, _returnType, _args ) \
    inline _returnType FGPP_GL_FUNCTION_NAME( _name )( GL_ARGS _args ) { _proc }
#define FG4CPP_GL_FUNCTION_NUM( _name, _returnType, _args, _values ) \
    GL_DEFINE_FUNCTION( return FG_GL_FUNCTION_NAME( _name )( GL_VALUES _values );, _name, _returnType, _args )
#define FG4CPP_GL_FUNCTION_PTR( _name, _returnType, _args, _values ) \
    GL_DEFINE_FUNCTION( return reinterpret_cast< _returnType >( FG_GL_FUNCTION_NAME( _name )( GL_VALUES _values ) );, _name, _returnType, _args )
#define FG4CPP_GL_FUNCTION_VOID( _name, _args, _values ) \
    GL_DEFINE_FUNCTION( FG_GL_FUNCTION_NAME( _name )( GL_VALUES _values );, _name, void, _args )
namespace fg {
    FG4CPP_GL_FUNCTIONS
}
#undef  FG4CPP_GL_FUNCTION_VOID
#undef  FG4CPP_GL_FUNCTION_PTR
#undef  FG4CPP_GL_FUNCTION_NUM
#undef  GL_DEFINE_FUNCTION
#undef  GL_VALUES
#undef  GL_ARGS

#endif  // FG4CPP_GL_CURRENTCONTEXT_H
