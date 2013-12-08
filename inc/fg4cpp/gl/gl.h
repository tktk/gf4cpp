#ifndef FG4CPP_GL_GL_H
#define FG4CPP_GL_GL_H

#include "fgpp/gl/gl.h"
#include "fg/gl/gl.h"
#include "fg4cpp/window/window.h"

namespace fg {
    inline void glSwapBuffers(
        Window &    _window
    )
    {
        fgGLSwapBuffers(
            toFg( &_window )
        );
    }
}

#include "fg4cpp/gl/types.h"
#include "fg4cpp/gl/constants.h"
#include "fg4cpp/gl/functions.h"

#endif  // FG4CPP_GL_GL_H
