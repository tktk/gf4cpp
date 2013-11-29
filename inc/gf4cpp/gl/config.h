#ifndef GF4CPP_GL_CONFIG_H
#define GF4CPP_GL_CONFIG_H

#include "gfpp/gl/config.h"
#include "gf/gl/config.h"

namespace gf {
    inline FgGLConfig & toGf(
        fg::GLConfig &  _config
    )
    {
        return reinterpret_cast< FgGLConfig & >( _config );
    }

    inline FgGLConfig * toGf(
        fg::GLConfig *  _config
    )
    {
        return reinterpret_cast< FgGLConfig * >( _config );
    }

    inline fg::GLConfig & toGfpp(
        FgGLConfig &    _config
    )
    {
        return reinterpret_cast< fg::GLConfig & >( _config );
    }

    inline fg::GLConfig * toGfpp(
        FgGLConfig *    _config
    )
    {
        return reinterpret_cast< fg::GLConfig * >( _config );
    }
}

#include "fgpp/common/primitives.h"

namespace gf {
    inline fg::GLConfig * newGLConfig(
    )
    {
        return gf::toGfpp( gfGLConfigNew() );
    }

    inline void free(
        fg::GLConfig &  _config
    )
    {
        gfGLConfigFree( gf::toGf( &_config ) );
    }

    inline void setDoubleBuffer(
        fg::GLConfig &  _config
        , fg::Bool      _doubleBuffer
    )
    {
        gfGLConfigSetDoubleBuffer(
            gf::toGf( &_config )
            , _doubleBuffer
        );
    }

    inline void setAuxBuffers(
        fg::GLConfig &  _config
        , fg::Int       _auxBuffers
    )
    {
        gfGLConfigSetAuxBuffers(
            gf::toGf( &_config )
            , _auxBuffers
        );
    }

    inline void clearAuxBuffers(
        fg::GLConfig &  _config
    )
    {
        gfGLConfigClearAuxBuffers(
            gf::toGf( &_config )
        );
    }

    inline void setRedBits(
        fg::GLConfig &  _config
        , fg::Int       _redBits
    )
    {
        gfGLConfigSetRedBits(
            gf::toGf( &_config )
            , _redBits
        );
    }

    inline void clearRedBits(
        fg::GLConfig &  _config
    )
    {
        gfGLConfigClearRedBits(
            gf::toGf( &_config )
        );
    }

    inline void setGreenBits(
        fg::GLConfig &  _config
        , fg::Int       _greenBits
    )
    {
        gfGLConfigSetGreenBits(
            gf::toGf( &_config )
            , _greenBits
        );
    }

    inline void clearGreenBits(
        fg::GLConfig &  _config
    )
    {
        gfGLConfigClearGreenBits(
            gf::toGf( &_config )
        );
    }

    inline void setBlueBits(
        fg::GLConfig &  _config
        , fg::Int       _blueBits
    )
    {
        gfGLConfigSetBlueBits(
            gf::toGf( &_config )
            , _blueBits
        );
    }

    inline void clearBlueBits(
        fg::GLConfig &  _config
    )
    {
        gfGLConfigClearBlueBits(
            gf::toGf( &_config )
        );
    }

    inline void setAlphaBits(
        fg::GLConfig &  _config
        , fg::Int       _alphaBits
    )
    {
        gfGLConfigSetAlphaBits(
            gf::toGf( &_config )
            , _alphaBits
        );
    }

    inline void clearAlphaBits(
        fg::GLConfig &  _config
    )
    {
        gfGLConfigClearAlphaBits(
            gf::toGf( &_config )
        );
    }

    inline void setDepthBits(
        fg::GLConfig &  _config
        , fg::Int       _depthBits
    )
    {
        gfGLConfigSetDepthBits(
            gf::toGf( &_config )
            , _depthBits
        );
    }

    inline void clearDepthBits(
        fg::GLConfig &  _config
    )
    {
        gfGLConfigClearDepthBits(
            gf::toGf( &_config )
        );
    }

    inline void setStencilBits(
        fg::GLConfig &  _config
        , fg::Int       _stencilBits
    )
    {
        gfGLConfigSetStencilBits(
            gf::toGf( &_config )
            , _stencilBits
        );
    }

    inline void clearStencilBits(
        fg::GLConfig &  _config
    )
    {
        gfGLConfigClearStencilBits(
            gf::toGf( &_config )
        );
    }

    inline void setAccumRedBits(
        fg::GLConfig &  _config
        , fg::Int       _accumRedBits
    )
    {
        gfGLConfigSetAccumRedBits(
            gf::toGf( &_config )
            , _accumRedBits
        );
    }

    inline void clearAccumRedBits(
        fg::GLConfig &  _config
    )
    {
        gfGLConfigClearAccumRedBits(
            gf::toGf( &_config )
        );
    }

    inline void setAccumGreenBits(
        fg::GLConfig &  _config
        , fg::Int       _accumGreenBits
    )
    {
        gfGLConfigSetAccumGreenBits(
            gf::toGf( &_config )
            , _accumGreenBits
        );
    }

    inline void clearAccumGreenBits(
        fg::GLConfig &  _config
    )
    {
        gfGLConfigClearAccumGreenBits(
            gf::toGf( &_config )
        );
    }

    inline void setAccumBlueBits(
        fg::GLConfig &  _config
        , fg::Int       _accumBlueBits
    )
    {
        gfGLConfigSetAccumBlueBits(
            gf::toGf( &_config )
            , _accumBlueBits
        );
    }

    inline void clearAccumBlueBits(
        fg::GLConfig &  _config
    )
    {
        gfGLConfigClearAccumBlueBits(
            gf::toGf( &_config )
        );
    }

    inline void setAccumAlphaBits(
        fg::GLConfig &  _config
        , fg::Int       _accumAlphaBits
    )
    {
        gfGLConfigSetAccumAlphaBits(
            gf::toGf( &_config )
            , _accumAlphaBits
        );
    }

    inline void clearAccumAlphaBits(
        fg::GLConfig &  _config
    )
    {
        gfGLConfigClearAccumAlphaBits(
            gf::toGf( &_config )
        );
    }
}

#endif  // GF4CPP_GL_CONFIG_H
