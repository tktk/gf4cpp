#ifndef FG4CPP_WINDOW_CLOSEEVENT_H
#define FG4CPP_WINDOW_CLOSEEVENT_H

#include "fgpp/window/closeevent.h"
#include "fg/window/closeevent.h"
#include "fg4cpp/def/window/closeevent.h"
#include "fg4cpp/def/window/window.h"

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
