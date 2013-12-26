#ifndef FG4CPP_WINDOW_MOUSEMOTIONEVENT_H
#define FG4CPP_WINDOW_MOUSEMOTIONEVENT_H

#include "fgpp/window/mousemotionevent.h"
#include "fg/window/mousemotionevent.h"
#include "fg4cpp/def/window/mousemotionevent.h"
#include "fg4cpp/def/window/window.h"
#include "fgpp/def/common/primitives.h"

namespace fg {
    inline WindowMouseMotionEvent * newWindowMouseMotionEvent(
        Window &    _window
        , Int       _x
        , Int       _y
    )
    {
        return toFgpp(
            fgWindowMouseMotionEventNew(
                toFg( &_window )
                , _x
                , _y
            )
        );
    }

    inline WindowMouseMotionEvent * clone(
        const WindowMouseMotionEvent &  _EVENT
    )
    {
        return toFgpp(
            fgWindowMouseMotionEventClone(
                toFg( &_EVENT )
            )
        );
    }

    inline void free(
        WindowMouseMotionEvent &    _event
    )
    {
        fgWindowMouseMotionEventFree(
            toFg( &_event )
        );
    }

    inline Window & getSource(
        const WindowMouseMotionEvent &  _EVENT
    )
    {
        return toFgpp(
            *fgWindowMouseMotionEventGetSource(
                toFg( &_EVENT )
            )
        );
    }

    inline Int getX(
        const WindowMouseMotionEvent &  _EVENT
    )
    {
        return fgWindowMouseMotionEventGetX(
            toFg( &_EVENT )
        );
    }

    inline Int getY(
        const WindowMouseMotionEvent &  _EVENT
    )
    {
        return fgWindowMouseMotionEventGetY(
            toFg( &_EVENT )
        );
    }
}

#endif  // FG4CPP_WINDOW_MOUSEMOTIONEVENT_H
