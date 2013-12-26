#ifndef FG4CPP_WINDOW_MOUSEBUTTONEVENT_H
#define FG4CPP_WINDOW_MOUSEBUTTONEVENT_H

#include "fgpp/window/mousebuttonevent.h"
#include "fg/window/mousebuttonevent.h"
#include "fg4cpp/def/window/mousebuttonevent.h"
#include "fg4cpp/def/window/window.h"
#include "fgpp/def/common/primitives.h"

namespace fg {
    inline WindowMouseButtonEvent * newWindowMouseButtonEvent(
        Window &    _window
        , ULong     _index
        , Bool      _pressed
        , Int       _x
        , Int       _y
    )
    {
        return toFgpp(
            fgWindowMouseButtonEventNew(
                toFg( &_window )
                , _index
                , _pressed
                , _x
                , _y
            )
        );
    }

    inline WindowMouseButtonEvent * clone(
        const WindowMouseButtonEvent &  _EVENT
    )
    {
        return toFgpp(
            fgWindowMouseButtonEventClone(
                toFg( &_EVENT )
            )
        );
    }

    inline void free(
        WindowMouseButtonEvent &    _event
    )
    {
        fgWindowMouseButtonEventFree(
            toFg( &_event )
        );
    }

    inline Window & getSource(
        const WindowMouseButtonEvent &  _EVENT
    )
    {
        return toFgpp(
            *fgWindowMouseButtonEventGetSource(
                toFg( &_EVENT )
            )
        );
    }

    inline ULong getIndex(
        const WindowMouseButtonEvent &  _EVENT
    )
    {
        return fgWindowMouseButtonEventGetIndex(
            toFg( &_EVENT )
        );
    }

    inline Bool getPressed(
        const WindowMouseButtonEvent &  _EVENT
    )
    {
        return fgWindowMouseButtonEventGetPressed(
            toFg( &_EVENT )
        );
    }

    inline Int getX(
        const WindowMouseButtonEvent &  _EVENT
    )
    {
        return fgWindowMouseButtonEventGetX(
            toFg( &_EVENT )
        );
    }

    inline Int getY(
        const WindowMouseButtonEvent &  _EVENT
    )
    {
        return fgWindowMouseButtonEventGetY(
            toFg( &_EVENT )
        );
    }
}

#endif  // FG4CPP_WINDOW_MOUSEBUTTONEVENT_H
