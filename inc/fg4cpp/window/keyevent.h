#ifndef FG4CPP_WINDOW_KEYEVENT_H
#define FG4CPP_WINDOW_KEYEVENT_H

#include "fgpp/window/keyevent.h"
#include "fg/window/keyevent.h"

namespace fg {
    inline const FgWindowKeyEvent & toFg(
        const WindowKeyEvent &  _EVENT
    )
    {
        return reinterpret_cast< const FgWindowKeyEvent & >( _EVENT );
    }

    inline FgWindowKeyEvent & toFg(
        WindowKeyEvent &    _event
    )
    {
        return reinterpret_cast< FgWindowKeyEvent & >( _event );
    }

    inline const FgWindowKeyEvent * toFg(
        const WindowKeyEvent *  _EVENT
    )
    {
        return reinterpret_cast< const FgWindowKeyEvent * >( _EVENT );
    }

    inline FgWindowKeyEvent * toFg(
        WindowKeyEvent *    _event
    )
    {
        return reinterpret_cast< FgWindowKeyEvent * >( _event );
    }

    inline const WindowKeyEvent & toFgpp(
        const FgWindowKeyEvent &    _EVENT
    )
    {
        return reinterpret_cast< const WindowKeyEvent & >( _EVENT );
    }

    inline WindowKeyEvent & toFgpp(
        FgWindowKeyEvent &  _event
    )
    {
        return reinterpret_cast< WindowKeyEvent & >( _event );
    }

    inline const WindowKeyEvent * toFgpp(
        const FgWindowKeyEvent *    _EVENT
    )
    {
        return reinterpret_cast< const WindowKeyEvent * >( _EVENT );
    }

    inline WindowKeyEvent * toFgpp(
        FgWindowKeyEvent *  _event
    )
    {
        return reinterpret_cast< WindowKeyEvent * >( _event );
    }
}

#include "fg4cpp/window/window.h"
#include "fg4cpp/window/key.h"
#include "fgpp/common/primitives.h"

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
