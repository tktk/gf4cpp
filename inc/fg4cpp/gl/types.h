#ifndef FG4CPP_GL_TYPES_H
#define FG4CPP_GL_TYPES_H

#include "fgpp/gl/types.h"
#include "fg/gl/types.h"

namespace fg {
    inline const FgGLsync & toFg(
        const GLsync &  _SYNC
    )
    {
        return reinterpret_cast< const FgGLsync & >( _SYNC );
    }

    inline FgGLsync & toFg(
        GLsync &    _sync
    )
    {
        return reinterpret_cast< FgGLsync & >( _sync );
    }

    inline const FgGLsync * toFg(
        const GLsync *  _SYNC
    )
    {
        return reinterpret_cast< const FgGLsync * >( _SYNC );
    }

    inline FgGLsync * toFg(
        GLsync *    _sync
    )
    {
        return reinterpret_cast< FgGLsync * >( _sync );
    }

    inline const GLsync & toFgpp(
        const FgGLsync &    _SYNC
    )
    {
        return reinterpret_cast< const GLsync & >( _SYNC );
    }

    inline GLsync & toFgpp(
        FgGLsync &  _sync
    )
    {
        return reinterpret_cast< GLsync & >( _sync );
    }

    inline const GLsync * toFgpp(
        const FgGLsync *    _SYNC
    )
    {
        return reinterpret_cast< const GLsync * >( _SYNC );
    }

    inline GLsync * toFgpp(
        FgGLsync *  _sync
    )
    {
        return reinterpret_cast< GLsync * >( _sync );
    }

    inline const FgGLclcontext & toFg(
        const GLclcontext & _CONTEXT
    )
    {
        return reinterpret_cast< const FgGLclcontext & >( _CONTEXT );
    }

    inline FgGLclcontext & toFg(
        GLclcontext &   _context
    )
    {
        return reinterpret_cast< FgGLclcontext & >( _context );
    }

    inline const FgGLclcontext * toFg(
        const GLclcontext * _CONTEXT
    )
    {
        return reinterpret_cast< const FgGLclcontext * >( _CONTEXT );
    }

    inline FgGLclcontext * toFg(
        GLclcontext *   _context
    )
    {
        return reinterpret_cast< FgGLclcontext * >( _context );
    }

    inline const GLclcontext & toFg(
        const FgGLclcontext &   _CONTEXT
    )
    {
        return reinterpret_cast< const GLclcontext & >( _CONTEXT );
    }

    inline GLclcontext & toFg(
        FgGLclcontext & _context
    )
    {
        return reinterpret_cast< GLclcontext & >( _context );
    }

    inline const GLclcontext * toFg(
        const FgGLclcontext *   _CONTEXT
    )
    {
        return reinterpret_cast< const GLclcontext * >( _CONTEXT );
    }

    inline GLclcontext * toFg(
        FgGLclcontext * _context
    )
    {
        return reinterpret_cast< GLclcontext * >( _context );
    }

    inline const FgGLclevent & toFg(
        const GLclevent &   _EVENT
    )
    {
        return reinterpret_cast< const FgGLclevent & >( _EVENT );
    }

    inline FgGLclevent & toFg(
        GLclevent & _event
    )
    {
        return reinterpret_cast< FgGLclevent & >( _event );
    }

    inline const FgGLclevent * toFg(
        const GLclevent *   _EVENT
    )
    {
        return reinterpret_cast< const FgGLclevent * >( _EVENT );
    }

    inline FgGLclevent * toFg(
        GLclevent * _event
    )
    {
        return reinterpret_cast< FgGLclevent * >( _event );
    }

    inline const GLclevent & toFg(
        const FgGLclevent & _EVENT
    )
    {
        return reinterpret_cast< const GLclevent & >( _EVENT );
    }

    inline GLclevent & toFg(
        FgGLclevent &   _event
    )
    {
        return reinterpret_cast< GLclevent & >( _event );
    }

    inline const GLclevent * toFg(
        const FgGLclevent * _EVENT
    )
    {
        return reinterpret_cast< const GLclevent * >( _EVENT );
    }

    inline GLclevent * toFg(
        FgGLclevent *   _event
    )
    {
        return reinterpret_cast< GLclevent * >( _event );
    }
}

#endif  // FG4CPP_GL_TYPES_H
