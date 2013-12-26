#ifndef FG4CPP_DEF_WINDOW_WINDOW_H
#define FG4CPP_DEF_WINDOW_WINDOW_H

#include "fgpp/def/window/window.h"
#include "fg/def/window/window.h"

namespace fg {
    inline const FgWindow & toFg(
        const Window &  _WINDOW
    )
    {
        return reinterpret_cast< const FgWindow & >( _WINDOW );
    }

    inline FgWindow & toFg(
        Window &    _window
    )
    {
        return reinterpret_cast< FgWindow & >( _window );
    }

    inline const FgWindow * toFg(
        const Window *  _WINDOW
    )
    {
        return reinterpret_cast< const FgWindow * >( _WINDOW );
    }

    inline FgWindow * toFg(
        Window *    _window
    )
    {
        return reinterpret_cast< FgWindow * >( _window );
    }

    inline const Window & toFgpp(
        const FgWindow &    _WINDOW
    )
    {
        return reinterpret_cast< const Window & >( _WINDOW );
    }

    inline Window & toFgpp(
        FgWindow &  _window
    )
    {
        return reinterpret_cast< Window & >( _window );
    }

    inline const Window * toFgpp(
        const FgWindow *    _WINDOW
    )
    {
        return reinterpret_cast< const Window * >( _WINDOW );
    }

    inline Window * toFgpp(
        FgWindow *  _window
    )
    {
        return reinterpret_cast< Window * >( _window );
    }
}

#endif  // FG4CPP_DEF_WINDOW_WINDOW_H
