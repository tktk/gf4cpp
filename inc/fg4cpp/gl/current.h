#ifndef FG4CPP_GL_CURRENT_H
#define FG4CPP_GL_CURRENT_H

#include "fgpp/gl/current.h"
#include "fg/gl/current.h"
#include "fg4cpp/def/gl/current.h"
#include "fg4cpp/def/gl/context.h"
#include "fg4cpp/def/gl/functions.h"
#include "fg4cpp/def/window/window.h"

namespace fg {
    inline GLCurrent * getOrNewGLCurrent(
        GLContext & _context
        , Window &  _window
    )
    {
        return toFgpp(
            fgGLCurrentGetOrNew(
                toFg( &_context )
                , toFg( &_window )
            )
        );
    }

    inline void free(
        GLCurrent &  _current
    )
    {
        fgGLCurrentFree(
            toFg( &_current )
        );
    }

    inline void swapBuffers(
        GLCurrent &  _current
    )
    {
        fgGLCurrentSwapBuffers(
            toFg( &_current )
        );
    }

#define GL_ARGS( ... ) \
    GLCurrent & _current __VA_ARGS__
#define GL_VALUES( ... ) \
    toFg( &_current ) __VA_ARGS__
#define GL_DEFINE_FUNCTION( _proc, _name, _returnType, _args ) \
    inline _returnType FGPP_GL_FUNCTION_NAME( _name )( GL_ARGS _args ) { _proc }
#define FG4CPP_GL_FUNCTION_NUM( _name, _returnType, _args, _values ) \
    GL_DEFINE_FUNCTION( return FG_GL_FUNCTION_NAME( _name )( GL_VALUES _values );, _name, _returnType, _args )
#define FG4CPP_GL_FUNCTION_PTR( _name, _returnType, _args, _values ) \
    GL_DEFINE_FUNCTION( return reinterpret_cast< _returnType >( FG_GL_FUNCTION_NAME( _name )( GL_VALUES _values ) );, _name, _returnType, _args )
#define FG4CPP_GL_FUNCTION_VOID( _name, _args, _values ) \
    GL_DEFINE_FUNCTION( FG_GL_FUNCTION_NAME( _name )( GL_VALUES _values );, _name, void, _args )

    FG4CPP_GL_FUNCTIONS

#undef  FG4CPP_GL_FUNCTION_VOID
#undef  FG4CPP_GL_FUNCTION_PTR
#undef  FG4CPP_GL_FUNCTION_NUM
#undef  GL_DEFINE_FUNCTION
#undef  GL_VALUES
#undef  GL_ARGS
}

#endif  // FG4CPP_GL_CURRENT_H
