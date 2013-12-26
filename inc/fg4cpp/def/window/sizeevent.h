#ifndef FG4CPP_DEF_WINDOW_SIZEEVENT_H
#define FG4CPP_DEF_WINDOW_SIZEEVENT_H

#include "fgpp/def/window/sizeevent.h"
#include "fg/def/window/sizeevent.h"

namespace fg {
    inline const FgWindowSizeEvent & toFg(
        const WindowSizeEvent & _EVENT
    )
    {
        return reinterpret_cast< const FgWindowSizeEvent & >( _EVENT );
    }

    inline FgWindowSizeEvent & toFg(
        WindowSizeEvent &   _event
    )
    {
        return reinterpret_cast< FgWindowSizeEvent & >( _event );
    }

    inline const FgWindowSizeEvent * toFg(
        const WindowSizeEvent * _EVENT
    )
    {
        return reinterpret_cast< const FgWindowSizeEvent * >( _EVENT );
    }

    inline FgWindowSizeEvent * toFg(
        WindowSizeEvent *   _event
    )
    {
        return reinterpret_cast< FgWindowSizeEvent * >( _event );
    }

    inline const WindowSizeEvent & toFgpp(
        const FgWindowSizeEvent &   _EVENT
    )
    {
        return reinterpret_cast< const WindowSizeEvent & >( _EVENT );
    }

    inline WindowSizeEvent & toFgpp(
        FgWindowSizeEvent & _event
    )
    {
        return reinterpret_cast< WindowSizeEvent & >( _event );
    }

    inline const WindowSizeEvent * toFgpp(
        const FgWindowSizeEvent *   _EVENT
    )
    {
        return reinterpret_cast< const WindowSizeEvent * >( _EVENT );
    }

    inline WindowSizeEvent * toFgpp(
        FgWindowSizeEvent * _event
    )
    {
        return reinterpret_cast< WindowSizeEvent * >( _event );
    }
}

#endif  // FG4CPP_DEF_WINDOW_SIZEEVENT_H
