#ifndef FG4CPP_WINDOW_KEYEVENT_H
#define FG4CPP_WINDOW_KEYEVENT_H

#include "fgpp/window/keyevent.h"
#include "fg/window/keyevent.h"
#include "fg4cpp/def/window/keyevent.h"
#include "fg4cpp/def/window/window.h"
#include "fg4cpp/def/window/key.h"
#include "fgpp/def/common/primitives.h"

namespace fg {
    inline WindowKeyEvent * newWindowKeyEvent(
        Window &            _window
        , Key               _key
        , const Utf32Char * _CHAR_PTR
        , Bool              _pressed
    )
    {
        return toFgpp(
            fgWindowKeyEventNew(
                toFg( &_window )
                , toFg( _key )
                , _CHAR_PTR
                , _pressed
            )
        );
    }

    inline WindowKeyEvent * clone(
        const WindowKeyEvent &  _EVENT
    )
    {
        return toFgpp(
            fgWindowKeyEventClone(
                toFg( &_EVENT )
            )
        );
    }

    inline void free(
        WindowKeyEvent &    _event
    )
    {
        fgWindowKeyEventFree(
            toFg( &_event )
        );
    }

    inline Window & getSource(
        const WindowKeyEvent &  _EVENT
    )
    {
        return toFgpp(
            *fgWindowKeyEventGetSource(
                toFg( &_EVENT )
            )
        );
    }

    inline Key getKey(
        const WindowKeyEvent &  _EVENT
    )
    {
        return toFgpp(
            fgWindowKeyEventGetKey(
                toFg( &_EVENT )
            )
        );
    }

    inline const Utf32Char * getCharPtr(
        const WindowKeyEvent &  _EVENT
    )
    {
        return fgWindowKeyEventGetCharPtr(
            toFg( &_EVENT )
        );
    }

    inline Bool getPressed(
        const WindowKeyEvent &  _EVENT
    )
    {
        return fgWindowKeyEventGetPressed(
            toFg( &_EVENT )
        );
    }
}

#endif  // FG4CPP_WINDOW_KEYEVENT_H
