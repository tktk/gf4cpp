#ifndef FG4CPP_GL_TYPES_H
#define FG4CPP_GL_TYPES_H

#include "fgpp/gl/types.h"
#include "fg/gl/types.h"

namespace fg {
    template<
        typename TO_T
        , typename FROM_T
    >
    TO_T & toFgGL(
        FROM_T &    _value
    )
    {
        return _value;
    }

    template<
        typename TO_T
        , typename FROM_T
    >
    TO_T toFgppGL(
        FROM_T  _value
    )
    {
        return _value;
    }

    template<>
    inline FgGLsync & toFgGL(
        GLsync &    _sync
    )
    {
        return reinterpret_cast< FgGLsync & >( _sync );
    }

    template<>
    inline GLsync toFgppGL(
        FgGLsync    _sync
    )
    {
        return reinterpret_cast< GLsync >( _sync );
    }

    template<>
    inline FgGLclcontext & toFgGL(
        GLclcontext &   _context
    )
    {
        return reinterpret_cast< FgGLclcontext & >( _context );
    }

    template<>
    inline GLclcontext toFgppGL(
        FgGLclcontext   _context
    )
    {
        return reinterpret_cast< GLclcontext >( _context );
    }

    template<>
    inline FgGLclevent & toFgGL(
        GLclevent & _event
    )
    {
        return reinterpret_cast< FgGLclevent & >( _event );
    }

    template<>
    inline GLclevent toFgppGL(
        FgGLclevent _event
    )
    {
        return reinterpret_cast< GLclevent >( _event );
    }
}

#endif  // FG4CPP_GL_TYPES_H
