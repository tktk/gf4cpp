#ifndef FG4CPP_WINDOW_POSITIONEVENT_H
#define FG4CPP_WINDOW_POSITIONEVENT_H

#include "fgpp/window/positionevent.h"
#include "fg/window/positionevent.h"
#include "fg4cpp/def/window/positionevent.h"
#include "fg4cpp/def/window/window.h"
#include "fgpp/def/common/primitives.h"

namespace fg {
    inline WindowPositionEvent * newWindowPositionEvent(
        Window &    _window
        , Int       _x
        , Int       _y
    )
    {
        return toFgpp(
            fgWindowPositionEventNew(
                toFg( &_window )
                , _x
                , _y
            )
        );
    }

    inline WindowPositionEvent * clone(
        const WindowPositionEvent & _EVENT
    )
    {
        return toFgpp(
            fgWindowPositionEventClone(
                toFg( &_EVENT )
            )
        );
    }

    inline void free(
        WindowPositionEvent &   _event
    )
    {
        fgWindowPositionEventFree(
            toFg( &_event )
        );
    }

    inline Window & getSource(
        const WindowPositionEvent & _EVENT
    )
    {
        return toFgpp(
            *fgWindowPositionEventGetSource(
                toFg( &_EVENT )
            )
        );
    }

    inline Int getX(
        const WindowPositionEvent & _EVENT
    )
    {
        return fgWindowPositionEventGetX(
            toFg( &_EVENT )
        );
    }

    inline Int getY(
        const WindowPositionEvent & _EVENT
    )
    {
        return fgWindowPositionEventGetY(
            toFg( &_EVENT )
        );
    }
}

#endif  // FG4CPP_WINDOW_POSITIONEVENT_H
