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

#include "gfpp/common/primitives.h"

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

    inline Bool getDoubleBuffer(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoGetDoubleBuffer(
            toGf( &_INFO )
        );
    }

    inline void setDoubleBuffer(
        GLContextInfo & _info
        , Bool          _doubleBuffer
    )
    {
        gfGLContextInfoSetDoubleBuffer(
            toGf( &_info )
            , _doubleBuffer
        );
    }

    inline Bool existsAuxBuffers(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoExistsAuxBuffers(
            toGf( &_INFO )
        );
    }

    inline Int getAuxBuffers(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoGetAuxBuffers(
            toGf( &_INFO )
        );
    }

    inline void setAuxBuffers(
        GLContextInfo & _info
        , Int           _auxBuffers
    )
    {
        gfGLContextInfoSetAuxBuffers(
            toGf( &_info )
            , _auxBuffers
        );
    }

    inline void clearAuxBuffers(
        GLContextInfo & _info
    )
    {
        gfGLContextInfoClearAuxBuffers(
            toGf( &_info )
        );
    }

    inline Bool existsRedBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoExistsRedBits(
            toGf( &_INFO )
        );
    }

    inline Int getRedBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoGetRedBits(
            toGf( &_INFO )
        );
    }

    inline void setRedBits(
        GLContextInfo & _info
        , Int           _redBits
    )
    {
        gfGLContextInfoSetRedBits(
            toGf( &_info )
            , _redBits
        );
    }

    inline void clearRedBits(
        GLContextInfo & _info
    )
    {
        gfGLContextInfoClearRedBits(
            toGf( &_info )
        );
    }

    inline Bool existsGreenBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoExistsGreenBits(
            toGf( &_INFO )
        );
    }

    inline Int getGreenBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoGetGreenBits(
            toGf( &_INFO )
        );
    }

    inline void setGreenBits(
        GLContextInfo & _info
        , Int           _greenBits
    )
    {
        gfGLContextInfoSetGreenBits(
            toGf( &_info )
            , _greenBits
        );
    }

    inline void clearGreenBits(
        GLContextInfo & _info
    )
    {
        gfGLContextInfoClearGreenBits(
            toGf( &_info )
        );
    }

    inline Bool existsBlueBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoExistsBlueBits(
            toGf( &_INFO )
        );
    }

    inline Int getBlueBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoGetBlueBits(
            toGf( &_INFO )
        );
    }

    inline void setBlueBits(
        GLContextInfo & _info
        , Int           _blueBits
    )
    {
        gfGLContextInfoSetBlueBits(
            toGf( &_info )
            , _blueBits
        );
    }

    inline void clearBlueBits(
        GLContextInfo & _info
    )
    {
        gfGLContextInfoClearBlueBits(
            toGf( &_info )
        );
    }

    inline Bool existsAlphaBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoExistsAlphaBits(
            toGf( &_INFO )
        );
    }

    inline Int getAlphaBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoGetAlphaBits(
            toGf( &_INFO )
        );
    }

    inline void setAlphaBits(
        GLContextInfo & _info
        , Int           _alphaBits
    )
    {
        gfGLContextInfoSetAlphaBits(
            toGf( &_info )
            , _alphaBits
        );
    }

    inline void clearAlphaBits(
        GLContextInfo & _info
    )
    {
        gfGLContextInfoClearAlphaBits(
            toGf( &_info )
        );
    }

    inline Bool existsDepthBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoExistsDepthBits(
            toGf( &_INFO )
        );
    }

    inline Int getDepthBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoGetDepthBits(
            toGf( &_INFO )
        );
    }

    inline void setDepthBits(
        GLContextInfo & _info
        , Int           _depthBits
    )
    {
        gfGLContextInfoSetDepthBits(
            toGf( &_info )
            , _depthBits
        );
    }

    inline void clearDepthBits(
        GLContextInfo & _info
    )
    {
        gfGLContextInfoClearDepthBits(
            toGf( &_info )
        );
    }

    inline Bool existsStencilBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoExistsStencilBits(
            toGf( &_INFO )
        );
    }

    inline Int getStencilBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoGetStencilBits(
            toGf( &_INFO )
        );
    }

    inline void setStencilBits(
        GLContextInfo & _info
        , Int           _stencilBits
    )
    {
        gfGLContextInfoSetStencilBits(
            toGf( &_info )
            , _stencilBits
        );
    }

    inline void clearStencilBits(
        GLContextInfo & _info
    )
    {
        gfGLContextInfoClearStencilBits(
            toGf( &_info )
        );
    }

    inline Bool existsAccumRedBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoExistsAccumRedBits(
            toGf( &_INFO )
        );
    }

    inline Int getAccumRedBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoGetAccumRedBits(
            toGf( &_INFO )
        );
    }

    inline void setAccumRedBits(
        GLContextInfo & _info
        , Int           _accumRedBits
    )
    {
        gfGLContextInfoSetAccumRedBits(
            toGf( &_info )
            , _accumRedBits
        );
    }

    inline void clearAccumRedBits(
        GLContextInfo & _info
    )
    {
        gfGLContextInfoClearAccumRedBits(
            toGf( &_info )
        );
    }

    inline Bool existsAccumGreenBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoExistsAccumGreenBits(
            toGf( &_INFO )
        );
    }

    inline Int getAccumGreenBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoGetAccumGreenBits(
            toGf( &_INFO )
        );
    }

    inline void setAccumGreenBits(
        GLContextInfo & _info
        , Int           _accumGreenBits
    )
    {
        gfGLContextInfoSetAccumGreenBits(
            toGf( &_info )
            , _accumGreenBits
        );
    }

    inline void clearAccumGreenBits(
        GLContextInfo & _info
    )
    {
        gfGLContextInfoClearAccumGreenBits(
            toGf( &_info )
        );
    }

    inline Bool existsAccumBlueBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoExistsAccumBlueBits(
            toGf( &_INFO )
        );
    }

    inline Int getAccumBlueBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoGetAccumBlueBits(
            toGf( &_INFO )
        );
    }

    inline void setAccumBlueBits(
        GLContextInfo & _info
        , Int           _accumBlueBits
    )
    {
        gfGLContextInfoSetAccumBlueBits(
            toGf( &_info )
            , _accumBlueBits
        );
    }

    inline void clearAccumBlueBits(
        GLContextInfo & _info
    )
    {
        gfGLContextInfoClearAccumBlueBits(
            toGf( &_info )
        );
    }

    inline Bool existsAccumAlphaBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoExistsAccumAlphaBits(
            toGf( &_INFO )
        );
    }

    inline Int getAccumAlphaBits(
        const GLContextInfo &   _INFO
    )
    {
        return gfGLContextInfoGetAccumAlphaBits(
            toGf( &_INFO )
        );
    }

    inline void setAccumAlphaBits(
        GLContextInfo & _info
        , Int           _accumAlphaBits
    )
    {
        gfGLContextInfoSetAccumAlphaBits(
            toGf( &_info )
            , _accumAlphaBits
        );
    }

    inline void clearAccumAlphaBits(
        GLContextInfo & _info
    )
    {
        gfGLContextInfoClearAccumAlphaBits(
            toGf( &_info )
        );
    }
}

#endif  // GF4CPP_GL_CONTEXTINFO_H
