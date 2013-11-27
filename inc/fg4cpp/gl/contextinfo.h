#ifndef FG4CPP_GL_CONTEXTINFO_H
#define FG4CPP_GL_CONTEXTINFO_H

#include "fgpp/gl/contextinfo.h"
#include "fg/gl/contextinfo.h"

namespace fg {
    inline const FgGLContextInfo & toFg(
        const GLContextInfo &   _INFO
    )
    {
        return reinterpret_cast< const FgGLContextInfo & >( _INFO );
    }

    inline FgGLContextInfo & toFg(
        GLContextInfo & _info
    )
    {
        return reinterpret_cast< FgGLContextInfo & >( _info );
    }

    inline const FgGLContextInfo * toFg(
        const GLContextInfo *   _INFO
    )
    {
        return reinterpret_cast< const FgGLContextInfo * >( _INFO );
    }

    inline FgGLContextInfo * toFg(
        GLContextInfo * _info
    )
    {
        return reinterpret_cast< FgGLContextInfo * >( _info );
    }

    inline const GLContextInfo & toFgpp(
        const FgGLContextInfo & _INFO
    )
    {
        return reinterpret_cast< const GLContextInfo & >( _INFO );
    }

    inline GLContextInfo & toFgpp(
        FgGLContextInfo &   _info
    )
    {
        return reinterpret_cast< GLContextInfo & >( _info );
    }

    inline const GLContextInfo * toFgpp(
        const FgGLContextInfo * _INFO
    )
    {
        return reinterpret_cast< const GLContextInfo * >( _INFO );
    }

    inline GLContextInfo * toFgpp(
        FgGLContextInfo *   _info
    )
    {
        return reinterpret_cast< GLContextInfo * >( _info );
    }
}

#include "fgpp/common/primitives.h"

namespace fg {
    inline GLContextInfo * newGLContextInfo(
    )
    {
        return toFgpp( fgGLContextInfoNew() );
    }

    inline GLContextInfo * clone(
        const GLContextInfo &   _INFO
    )
    {
        return toFgpp(
            fgGLContextInfoClone(
                toFg( &_INFO )
            )
        );
    }

    inline void free(
        GLContextInfo & _info
    )
    {
        fgGLContextInfoFree( toFg( &_info ) );
    }

    inline Bool getDoubleBuffer(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoGetDoubleBuffer(
            toFg( &_INFO )
        );
    }

    inline void setDoubleBuffer(
        GLContextInfo & _info
        , Bool          _doubleBuffer
    )
    {
        fgGLContextInfoSetDoubleBuffer(
            toFg( &_info )
            , _doubleBuffer
        );
    }

    inline Bool existsAuxBuffers(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoExistsAuxBuffers(
            toFg( &_INFO )
        );
    }

    inline Int getAuxBuffers(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoGetAuxBuffers(
            toFg( &_INFO )
        );
    }

    inline void setAuxBuffers(
        GLContextInfo & _info
        , Int           _auxBuffers
    )
    {
        fgGLContextInfoSetAuxBuffers(
            toFg( &_info )
            , _auxBuffers
        );
    }

    inline void clearAuxBuffers(
        GLContextInfo & _info
    )
    {
        fgGLContextInfoClearAuxBuffers(
            toFg( &_info )
        );
    }

    inline Bool existsRedBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoExistsRedBits(
            toFg( &_INFO )
        );
    }

    inline Int getRedBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoGetRedBits(
            toFg( &_INFO )
        );
    }

    inline void setRedBits(
        GLContextInfo & _info
        , Int           _redBits
    )
    {
        fgGLContextInfoSetRedBits(
            toFg( &_info )
            , _redBits
        );
    }

    inline void clearRedBits(
        GLContextInfo & _info
    )
    {
        fgGLContextInfoClearRedBits(
            toFg( &_info )
        );
    }

    inline Bool existsGreenBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoExistsGreenBits(
            toFg( &_INFO )
        );
    }

    inline Int getGreenBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoGetGreenBits(
            toFg( &_INFO )
        );
    }

    inline void setGreenBits(
        GLContextInfo & _info
        , Int           _greenBits
    )
    {
        fgGLContextInfoSetGreenBits(
            toFg( &_info )
            , _greenBits
        );
    }

    inline void clearGreenBits(
        GLContextInfo & _info
    )
    {
        fgGLContextInfoClearGreenBits(
            toFg( &_info )
        );
    }

    inline Bool existsBlueBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoExistsBlueBits(
            toFg( &_INFO )
        );
    }

    inline Int getBlueBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoGetBlueBits(
            toFg( &_INFO )
        );
    }

    inline void setBlueBits(
        GLContextInfo & _info
        , Int           _blueBits
    )
    {
        fgGLContextInfoSetBlueBits(
            toFg( &_info )
            , _blueBits
        );
    }

    inline void clearBlueBits(
        GLContextInfo & _info
    )
    {
        fgGLContextInfoClearBlueBits(
            toFg( &_info )
        );
    }

    inline Bool existsAlphaBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoExistsAlphaBits(
            toFg( &_INFO )
        );
    }

    inline Int getAlphaBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoGetAlphaBits(
            toFg( &_INFO )
        );
    }

    inline void setAlphaBits(
        GLContextInfo & _info
        , Int           _alphaBits
    )
    {
        fgGLContextInfoSetAlphaBits(
            toFg( &_info )
            , _alphaBits
        );
    }

    inline void clearAlphaBits(
        GLContextInfo & _info
    )
    {
        fgGLContextInfoClearAlphaBits(
            toFg( &_info )
        );
    }

    inline Bool existsDepthBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoExistsDepthBits(
            toFg( &_INFO )
        );
    }

    inline Int getDepthBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoGetDepthBits(
            toFg( &_INFO )
        );
    }

    inline void setDepthBits(
        GLContextInfo & _info
        , Int           _depthBits
    )
    {
        fgGLContextInfoSetDepthBits(
            toFg( &_info )
            , _depthBits
        );
    }

    inline void clearDepthBits(
        GLContextInfo & _info
    )
    {
        fgGLContextInfoClearDepthBits(
            toFg( &_info )
        );
    }

    inline Bool existsStencilBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoExistsStencilBits(
            toFg( &_INFO )
        );
    }

    inline Int getStencilBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoGetStencilBits(
            toFg( &_INFO )
        );
    }

    inline void setStencilBits(
        GLContextInfo & _info
        , Int           _stencilBits
    )
    {
        fgGLContextInfoSetStencilBits(
            toFg( &_info )
            , _stencilBits
        );
    }

    inline void clearStencilBits(
        GLContextInfo & _info
    )
    {
        fgGLContextInfoClearStencilBits(
            toFg( &_info )
        );
    }

    inline Bool existsAccumRedBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoExistsAccumRedBits(
            toFg( &_INFO )
        );
    }

    inline Int getAccumRedBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoGetAccumRedBits(
            toFg( &_INFO )
        );
    }

    inline void setAccumRedBits(
        GLContextInfo & _info
        , Int           _accumRedBits
    )
    {
        fgGLContextInfoSetAccumRedBits(
            toFg( &_info )
            , _accumRedBits
        );
    }

    inline void clearAccumRedBits(
        GLContextInfo & _info
    )
    {
        fgGLContextInfoClearAccumRedBits(
            toFg( &_info )
        );
    }

    inline Bool existsAccumGreenBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoExistsAccumGreenBits(
            toFg( &_INFO )
        );
    }

    inline Int getAccumGreenBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoGetAccumGreenBits(
            toFg( &_INFO )
        );
    }

    inline void setAccumGreenBits(
        GLContextInfo & _info
        , Int           _accumGreenBits
    )
    {
        fgGLContextInfoSetAccumGreenBits(
            toFg( &_info )
            , _accumGreenBits
        );
    }

    inline void clearAccumGreenBits(
        GLContextInfo & _info
    )
    {
        fgGLContextInfoClearAccumGreenBits(
            toFg( &_info )
        );
    }

    inline Bool existsAccumBlueBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoExistsAccumBlueBits(
            toFg( &_INFO )
        );
    }

    inline Int getAccumBlueBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoGetAccumBlueBits(
            toFg( &_INFO )
        );
    }

    inline void setAccumBlueBits(
        GLContextInfo & _info
        , Int           _accumBlueBits
    )
    {
        fgGLContextInfoSetAccumBlueBits(
            toFg( &_info )
            , _accumBlueBits
        );
    }

    inline void clearAccumBlueBits(
        GLContextInfo & _info
    )
    {
        fgGLContextInfoClearAccumBlueBits(
            toFg( &_info )
        );
    }

    inline Bool existsAccumAlphaBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoExistsAccumAlphaBits(
            toFg( &_INFO )
        );
    }

    inline Int getAccumAlphaBits(
        const GLContextInfo &   _INFO
    )
    {
        return fgGLContextInfoGetAccumAlphaBits(
            toFg( &_INFO )
        );
    }

    inline void setAccumAlphaBits(
        GLContextInfo & _info
        , Int           _accumAlphaBits
    )
    {
        fgGLContextInfoSetAccumAlphaBits(
            toFg( &_info )
            , _accumAlphaBits
        );
    }

    inline void clearAccumAlphaBits(
        GLContextInfo & _info
    )
    {
        fgGLContextInfoClearAccumAlphaBits(
            toFg( &_info )
        );
    }
}

#endif  // FG4CPP_GL_CONTEXTINFO_H
