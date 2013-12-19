#ifndef FG4CPP_WINDOW_CLOSEEVENT_H
#define FG4CPP_WINDOW_CLOSEEVENT_H

#include "fgpp/window/closeevent.h"
#include "fg/window/closeevent.h"

namespace fg {
    inline const FgWindowCloseEvent & toFg(
        const WindowCloseEvent &    _EVENT
    )
    {
        return reinterpret_cast< const FgWindowCloseEvent & >( _EVENT );
    }

    inline FgWindowCloseEvent & toFg(
        WindowCloseEvent &  _event
    )
    {
        return reinterpret_cast< FgWindowCloseEvent & >( _event );
    }

    inline const FgWindowCloseEvent * toFg(
        const WindowCloseEvent *    _EVENT
    )
    {
        return reinterpret_cast< const FgWindowCloseEvent * >( _EVENT );
    }

    inline FgWindowCloseEvent * toFg(
        WindowCloseEvent *  _event
    )
    {
        return reinterpret_cast< FgWindowCloseEvent * >( _event );
    }

    inline const WindowCloseEvent & toFgpp(
        const FgWindowCloseEvent &  _EVENT
    )
    {
        return reinterpret_cast< const WindowCloseEvent & >( _EVENT );
    }

    inline WindowCloseEvent & toFgpp(
        FgWindowCloseEvent &    _event
    )
    {
        return reinterpret_cast< WindowCloseEvent & >( _event );
    }

    inline const WindowCloseEvent * toFgpp(
        const FgWindowCloseEvent *  _EVENT
    )
    {
        return reinterpret_cast< const WindowCloseEvent * >( _EVENT );
    }

    inline WindowCloseEvent * toFgpp(
        FgWindowCloseEvent *    _event
    )
    {
        return reinterpret_cast< WindowCloseEvent * >( _event );
    }
}

#include "fg4cpp/window/window.h"

namespace fg {
    inline WindowCloseEvent * newWindowCloseEvent(
        Window &    _window
    )
    {
        return toFgpp(
            fgWindowCloseEventNew(
                toFg( &_window )
            )
        );
    }

    inline WindowCloseEvent * clone(
        const WindowCloseEvent &    _EVENT
    )
    {
        return toFgpp(
            fgWindowCloseEventClone(
                toFg( &_EVENT )
            )
        );
    }

    inline void free(
        WindowCloseEvent &  _event
    )
    {
        fgWindowCloseEventFree(
            toFg( &_event )
        );
    }

    inline Window & getSource(
        const WindowCloseEvent &    _EVENT
    )
    {
        return toFgpp(
            *fgWindowCloseEventGetSource(
                toFg( &_EVENT )
            )
        );
    }
}

#endif  // FG4CPP_WINDOW_CLOSEEVENT_H
