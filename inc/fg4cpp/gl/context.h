#ifndef FG4CPP_GL_CONTEXT_H
#define FG4CPP_GL_CONTEXT_H

#include "fgpp/gl/context.h"
#include "fg/gl/context.h"
#include "fg4cpp/def/gl/context.h"
#include "fg4cpp/def/gl/config.h"

namespace fg {
    inline GLContext * newGLContext(
        const GLConfig &    _CONFIG
    )
    {
        return toFgpp(
            fgGLContextNew(
                toFg( &_CONFIG )
            )
        );
    }

    inline void free(
        GLContext & _context
    )
    {
        fgGLContextFree( toFg( &_context ) );
    }
}

#endif  // FG4CPP_GL_CONTEXT_H
