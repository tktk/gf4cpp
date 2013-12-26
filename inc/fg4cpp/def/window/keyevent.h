#ifndef FG4CPP_DEF_WINDOW_KEYEVENT_H
#define FG4CPP_DEF_WINDOW_KEYEVENT_H

#include "fgpp/def/window/keyevent.h"
#include "fg/def/window/keyevent.h"

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

#endif  // FG4CPP_DEF_WINDOW_KEYEVENT_H
