#ifndef GF4CPP_MAIN_BOOTCONFIG_H
#define GF4CPP_MAIN_BOOTCONFIG_H

#include "gfpp/main/bootconfig.h"
#include "gf/main/bootconfig.h"

namespace gf {
    inline const GfBootConfig & toGf(
        const BootConfig &  _CONFIG
    )
    {
        return reinterpret_cast< const GfBootConfig & >( _CONFIG );
    }

    inline GfBootConfig & toGf(
        BootConfig & _config
    )
    {
        return reinterpret_cast< GfBootConfig & >( _config );
    }

    inline const GfBootConfig * toGf(
        const BootConfig *  _CONFIG
    )
    {
        return reinterpret_cast< const GfBootConfig * >( _CONFIG );
    }

    inline GfBootConfig * toGf(
        BootConfig *    _config
    )
    {
        return reinterpret_cast< GfBootConfig * >( _config );
    }

    inline const BootConfig & toGfpp(
        const GfBootConfig &    _CONFIG
    )
    {
        return reinterpret_cast< const BootConfig & >( _CONFIG );
    }

    inline BootConfig & toGfpp(
        GfBootConfig &  _config
    )
    {
        return reinterpret_cast< BootConfig & >( _config );
    }

    inline const BootConfig * toGfpp(
        const GfBootConfig *    _CONFIG
    )
    {
        return reinterpret_cast< const BootConfig * >( _CONFIG );
    }

    inline BootConfig * toGfpp(
        GfBootConfig *  _config
    )
    {
        return reinterpret_cast< BootConfig * >( _config );
    }
}

#include "fg4cpp/gl/version.h"
#include "fg4cpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace gf {
    inline BootConfig * newBootConfig(
    )
    {
        return toGfpp( gfBootConfigNew() );
    }

    inline void free(
        BootConfig &    _config
    )
    {
        gfBootConfigFree(
            toGf( &_config )
        );
    }

    inline fg::Bool existsBinDir(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsBinDir(
            toGf( &_CONFIG )
        );
    }

    inline const fg::Utf32 & getBinDir(
        const BootConfig &  _CONFIG
    )
    {
        return fg::toFgpp(
            *gfBootConfigGetBinDir(
                toGf( &_CONFIG )
            )
        );
    }

    inline fg::Bool setBinDir(
        BootConfig &        _config
        , const fg::Utf32 & _BIN_DIR
    )
    {
        return gfBootConfigSetBinDir(
            toGf( &_config )
            , fg::toFg( &_BIN_DIR )
        );
    }

    inline void clearBinDir(
        BootConfig &    _config
    )
    {
        gfBootConfigClearBinDir(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLVersion(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLVersion(
            toGf( &_CONFIG )
        );
    }

    inline fg::GLVersion getGLVersion(
        const BootConfig &  _CONFIG
    )
    {
        return fg::toFgpp(
            gfBootConfigGetGLVersion(
                toGf( &_CONFIG )
            )
        );
    }

    inline void setGLVersion(
        BootConfig &    _config
        , fg::GLVersion _version
    )
    {
        gfBootConfigSetGLVersion(
            toGf( &_config )
            , fg::toFg( _version )
        );
    }

    inline void clearGLVersion(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLVersion(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLDoubleBuffer(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLDoubleBuffer(
            toGf( &_CONFIG )
        );
    }

    inline fg::Bool getGLDoubleBuffer(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigGetGLDoubleBuffer(
            toGf( &_CONFIG )
        );
    }

    inline void setGLDoubleBuffer(
        BootConfig &    _config
        , fg::Bool      _doubleBuffer
    )
    {
        gfBootConfigSetGLDoubleBuffer(
            toGf( &_config )
            , _doubleBuffer
        );
    }

    inline void clearGLDoubleBuffer(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLDoubleBuffer(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLAuxBuffers(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLAuxBuffers(
            toGf( &_CONFIG )
        );
    }

    inline fg::Int getGLAuxBuffers(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigGetGLAuxBuffers(
            toGf( &_CONFIG )
        );
    }

    inline void setGLAuxBuffers(
        BootConfig &    _config
        , fg::Int       _auxBuffers
    )
    {
        gfBootConfigSetGLAuxBuffers(
            toGf( &_config )
            , _auxBuffers
        );
    }

    inline void clearGLAuxBuffers(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLAuxBuffers(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLRedBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLRedBits(
            toGf( &_CONFIG )
        );
    }

    inline fg::Int getGLRedBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigGetGLRedBits(
            toGf( &_CONFIG )
        );
    }

    inline void setGLRedBits(
        BootConfig &    _config
        , fg::Int       _redBits
    )
    {
        gfBootConfigSetGLRedBits(
            toGf( &_config )
            , _redBits
        );
    }

    inline void clearGLRedBits(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLRedBits(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLGreenBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLGreenBits(
            toGf( &_CONFIG )
        );
    }

    inline fg::Int getGLGreenBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigGetGLGreenBits(
            toGf( &_CONFIG )
        );
    }

    inline void setGLGreenBits(
        BootConfig &    _config
        , fg::Int       _greenBits
    )
    {
        gfBootConfigSetGLGreenBits(
            toGf( &_config )
            , _greenBits
        );
    }

    inline void clearGLGreenBits(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLGreenBits(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLBlueBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLBlueBits(
            toGf( &_CONFIG )
        );
    }

    inline fg::Int getGLBlueBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigGetGLBlueBits(
            toGf( &_CONFIG )
        );
    }

    inline void setGLBlueBits(
        BootConfig &    _config
        , fg::Int       _blueBits
    )
    {
        gfBootConfigSetGLBlueBits(
            toGf( &_config )
            , _blueBits
        );
    }

    inline void clearGLBlueBits(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLBlueBits(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLAlphaBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLAlphaBits(
            toGf( &_CONFIG )
        );
    }

    inline fg::Int getGLAlphaBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigGetGLAlphaBits(
            toGf( &_CONFIG )
        );
    }

    inline void setGLAlphaBits(
        BootConfig &    _config
        , fg::Int       _alphaBits
    )
    {
        gfBootConfigSetGLAlphaBits(
            toGf( &_config )
            , _alphaBits
        );
    }

    inline void clearGLAlphaBits(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLAlphaBits(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLDepthBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLDepthBits(
            toGf( &_CONFIG )
        );
    }

    inline fg::Int getGLDepthBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigGetGLDepthBits(
            toGf( &_CONFIG )
        );
    }

    inline void setGLDepthBits(
        BootConfig &    _config
        , fg::Int       _depthBits
    )
    {
        gfBootConfigSetGLDepthBits(
            toGf( &_config )
            , _depthBits
        );
    }

    inline void clearGLDepthBits(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLDepthBits(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLStencilBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLStencilBits(
            toGf( &_CONFIG )
        );
    }

    inline fg::Int getGLStencilBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigGetGLStencilBits(
            toGf( &_CONFIG )
        );
    }

    inline void setGLStencilBits(
        BootConfig &    _config
        , fg::Int       _stencilBits
    )
    {
        gfBootConfigSetGLStencilBits(
            toGf( &_config )
            , _stencilBits
        );
    }

    inline void clearGLStencilBits(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLStencilBits(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLAccumRedBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLAccumRedBits(
            toGf( &_CONFIG )
        );
    }

    inline fg::Int getGLAccumRedBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigGetGLAccumRedBits(
            toGf( &_CONFIG )
        );
    }

    inline void setGLAccumRedBits(
        BootConfig &    _config
        , fg::Int       _accumRedBits
    )
    {
        gfBootConfigSetGLAccumRedBits(
            toGf( &_config )
            , _accumRedBits
        );
    }

    inline void clearGLAccumRedBits(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLAccumRedBits(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLAccumGreenBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLAccumGreenBits(
            toGf( &_CONFIG )
        );
    }

    inline fg::Int getGLAccumGreenBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigGetGLAccumGreenBits(
            toGf( &_CONFIG )
        );
    }

    inline void setGLAccumGreenBits(
        BootConfig &    _config
        , fg::Int       _accumGreenBits
    )
    {
        gfBootConfigSetGLAccumGreenBits(
            toGf( &_config )
            , _accumGreenBits
        );
    }

    inline void clearGLAccumGreenBits(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLAccumGreenBits(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLAccumBlueBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLAccumBlueBits(
            toGf( &_CONFIG )
        );
    }

    inline fg::Int getGLAccumBlueBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigGetGLAccumBlueBits(
            toGf( &_CONFIG )
        );
    }

    inline void setGLAccumBlueBits(
        BootConfig &    _config
        , fg::Int       _accumBlueBits
    )
    {
        gfBootConfigSetGLAccumBlueBits(
            toGf( &_config )
            , _accumBlueBits
        );
    }

    inline void clearGLAccumBlueBits(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLAccumBlueBits(
            toGf( &_config )
        );
    }

    inline fg::Bool existsGLAccumAlphaBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigExistsGLAccumAlphaBits(
            toGf( &_CONFIG )
        );
    }

    inline fg::Int getGLAccumAlphaBits(
        const BootConfig &  _CONFIG
    )
    {
        return gfBootConfigGetGLAccumAlphaBits(
            toGf( &_CONFIG )
        );
    }

    inline void setGLAccumAlphaBits(
        BootConfig &    _config
        , fg::Int       _accumAlphaBits
    )
    {
        gfBootConfigSetGLAccumAlphaBits(
            toGf( &_config )
            , _accumAlphaBits
        );
    }

    inline void clearGLAccumAlphaBits(
        BootConfig &    _config
    )
    {
        gfBootConfigClearGLAccumAlphaBits(
            toGf( &_config )
        );
    }
}

#endif  // GF4CPP_MAIN_BOOTCONFIG_H
