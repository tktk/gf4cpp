#ifndef FG4CPP_GL_CONFIG_H
#define FG4CPP_GL_CONFIG_H

#include "fgpp/gl/config.h"
#include "fg/gl/config.h"
#include "fg4cpp/def/gl/config.h"
#include "fg4cpp/def/gl/version.h"
#include "fgpp/def/common/primitives.h"

namespace fg {
    inline GLVersion getVersion(
        const GLConfig &    _CONFIG
    )
    {
        return toFgpp(
            fgGLConfigGetVersion(
                toFg( &_CONFIG )
            )
        );
    }

    inline Bool getDoubleBuffer(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigGetDoubleBuffer(
            toFg( &_CONFIG )
        );
    }

    inline Bool existsAuxBuffers(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigExistsAuxBuffers(
            toFg( &_CONFIG )
        );
    }

    inline Int getAuxBuffers(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigGetAuxBuffers(
            toFg( &_CONFIG )
        );
    }

    inline Bool existsRedBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigExistsRedBits(
            toFg( &_CONFIG )
        );
    }

    inline Int getRedBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigGetRedBits(
            toFg( &_CONFIG )
        );
    }

    inline Bool existsGreenBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigExistsGreenBits(
            toFg( &_CONFIG )
        );
    }

    inline Int getGreenBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigGetGreenBits(
            toFg( &_CONFIG )
        );
    }

    inline Bool existsBlueBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigExistsBlueBits(
            toFg( &_CONFIG )
        );
    }

    inline Int getBlueBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigGetBlueBits(
            toFg( &_CONFIG )
        );
    }

    inline Bool existsAlphaBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigExistsAlphaBits(
            toFg( &_CONFIG )
        );
    }

    inline Int getAlphaBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigGetAlphaBits(
            toFg( &_CONFIG )
        );
    }

    inline Bool existsDepthBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigExistsDepthBits(
            toFg( &_CONFIG )
        );
    }

    inline Int getDepthBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigGetDepthBits(
            toFg( &_CONFIG )
        );
    }

    inline Bool existsStencilBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigExistsStencilBits(
            toFg( &_CONFIG )
        );
    }

    inline Int getStencilBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigGetStencilBits(
            toFg( &_CONFIG )
        );
    }

    inline Bool existsAccumRedBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigExistsAccumRedBits(
            toFg( &_CONFIG )
        );
    }

    inline Int getAccumRedBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigGetAccumRedBits(
            toFg( &_CONFIG )
        );
    }

    inline Bool existsAccumGreenBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigExistsAccumGreenBits(
            toFg( &_CONFIG )
        );
    }

    inline Int getAccumGreenBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigGetAccumGreenBits(
            toFg( &_CONFIG )
        );
    }

    inline Bool existsAccumBlueBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigExistsAccumBlueBits(
            toFg( &_CONFIG )
        );
    }

    inline Int getAccumBlueBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigGetAccumBlueBits(
            toFg( &_CONFIG )
        );
    }

    inline Bool existsAccumAlphaBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigExistsAccumAlphaBits(
            toFg( &_CONFIG )
        );
    }

    inline Int getAccumAlphaBits(
        const GLConfig &    _CONFIG
    )
    {
        return fgGLConfigGetAccumAlphaBits(
            toFg( &_CONFIG )
        );
    }
}

#endif  // FG4CPP_GL_CONFIG_H
