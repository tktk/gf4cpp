#ifndef FG4CPP_WINDOW_PAINTEVENT_H
#define FG4CPP_WINDOW_PAINTEVENT_H

#include "fgpp/window/paintevent.h"
#include "fg/window/paintevent.h"
#include "fg4cpp/def/window/paintevent.h"
#include "fg4cpp/def/window/window.h"
#include "fgpp/def/common/primitives.h"

namespace fg {
    inline WindowPaintEvent * newWindowPaintEvent(
        Window &    _window
        , Int       _x
        , Int       _y
        , Int       _width
        , Int       _height
    )
    {
        return toFgpp(
            fgWindowPaintEventNew(
                toFg( &_window )
                , _x
                , _y
                , _width
                , _height
            )
        );
    }

    inline WindowPaintEvent * clone(
        const WindowPaintEvent &    _EVENT
    )
    {
        return toFgpp(
            fgWindowPaintEventClone(
                toFg( &_EVENT )
            )
        );
    }

    inline void free(
        WindowPaintEvent &  _event
    )
    {
        fgWindowPaintEventFree(
            toFg( &_event )
        );
    }

    inline Window & getSource(
        const WindowPaintEvent &    _EVENT
    )
    {
        return toFgpp(
            *fgWindowPaintEventGetSource(
                toFg( &_EVENT )
            )
        );
    }

    inline Int getX(
        const WindowPaintEvent &    _EVENT
    )
    {
        return fgWindowPaintEventGetX(
            toFg( &_EVENT )
        );
    }

    inline Int getY(
        const WindowPaintEvent &    _EVENT
    )
    {
        return fgWindowPaintEventGetY(
            toFg( &_EVENT )
        );
    }

    inline Int getWidth(
        const WindowPaintEvent &    _EVENT
    )
    {
        return fgWindowPaintEventGetWidth(
            toFg( &_EVENT )
        );
    }

    inline Int getHeight(
        const WindowPaintEvent &    _EVENT
    )
    {
        return fgWindowPaintEventGetHeight(
            toFg( &_EVENT )
        );
    }
}

#endif  // FG4CPP_WINDOW_PAINTEVENT_H
