#ifndef FG4CPP_WINDOW_SIZEEVENT_H
#define FG4CPP_WINDOW_SIZEEVENT_H

#include "fgpp/window/sizeevent.h"
#include "fg/window/sizeevent.h"

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

#include "fg4cpp/window/window.h"
#include "fgpp/common/primitives.h"

namespace fg {
    inline WindowSizeEvent * newWindowSizeEvent(
        Window &    _window
        , Int       _width
        , Int       _height
    )
    {
        return toFgpp(
            fgWindowSizeEventNew(
                toFg( &_window )
                , _width
                , _height
            )
        );
    }

    inline WindowSizeEvent * clone(
        const WindowSizeEvent & _EVENT
    )
    {
        return toFgpp(
            fgWindowSizeEventClone(
                toFg( &_EVENT )
            )
        );
    }

    inline void free(
        WindowSizeEvent &   _event
    )
    {
        fgWindowSizeEventFree(
            toFg( &_event )
        );
    }

    inline Window & getSource(
        const WindowSizeEvent & _EVENT
    )
    {
        return toFgpp(
            *fgWindowSizeEventGetSource(
                toFg( &_EVENT )
            )
        );
    }

    inline Int getWidth(
        const WindowSizeEvent & _EVENT
    )
    {
        return fgWindowSizeEventGetWidth(
            toFg( &_EVENT )
        );
    }

    inline Int getHeight(
        const WindowSizeEvent & _EVENT
    )
    {
        return fgWindowSizeEventGetHeight(
            toFg( &_EVENT )
        );
    }
}

#endif  // FG4CPP_WINDOW_SIZEEVENT_H
