#ifndef GF4CPP_GL_CONTEXTINFO_H
#define GF4CPP_GL_CONTEXTINFO_H

#include "gfpp/gl/contextinfo.h"
#include "gf/gl/contextinfo.h"

namespace gf {
    inline const GfGLContextInfo & toGf(
        const GLContextInfo &   _INFO
    )
    {
        return reinterpret_cast< const GfGLContextInfo & >( _INFO );
    }

    inline GfGLContextInfo & toGf(
        GLContextInfo & _info
    )
    {
        return reinterpret_cast< GfGLContextInfo & >( _info );
    }

    inline const GfGLContextInfo * toGf(
        const GLContextInfo *   _INFO
    )
    {
        return reinterpret_cast< const GfGLContextInfo * >( _INFO );
    }

    inline GfGLContextInfo * toGf(
        GLContextInfo * _info
    )
    {
        return reinterpret_cast< GfGLContextInfo * >( _info );
    }

    inline const GLContextInfo & toGfpp(
        const GfGLContextInfo & _INFO
    )
    {
        return reinterpret_cast< const GLContextInfo & >( _INFO );
    }

    inline GLContextInfo & toGfpp(
        GfGLContextInfo &   _info
    )
    {
        return reinterpret_cast< GLContextInfo & >( _info );
    }

    inline const GLContextInfo * toGfpp(
        const GfGLContextInfo * _INFO
    )
    {
        return reinterpret_cast< const GLContextInfo * >( _INFO );
    }

    inline GLContextInfo * toGfpp(
        GfGLContextInfo *   _info
    )
    {
        return reinterpret_cast< GLContextInfo * >( _info );
    }
}

namespace gf {
    inline GLContextInfo * newGLContextInfo(
    )
    {
        return toGfpp( gfGLContextInfoNew() );
    }

    inline GLContextInfo * clone(
        const GLContextInfo &   _INFO
    )
    {
        return toGfpp(
            gfGLContextInfoClone(
                toGf( &_INFO )
            )
        );
    }

    inline void free(
        GLContextInfo & _info
    )
    {
        gfGLContextInfoFree( toGf( &_info ) );
    }
}

#endif  // GF4CPP_GL_CONTEXTINFO_H
