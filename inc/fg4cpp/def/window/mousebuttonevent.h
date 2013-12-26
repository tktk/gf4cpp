#ifndef FG4CPP_DEF_WINDOW_MOUSEBUTTONEVENT_H
#define FG4CPP_DEF_WINDOW_MOUSEBUTTONEVENT_H

#include "fgpp/def/window/mousebuttonevent.h"
#include "fg/def/window/mousebuttonevent.h"

namespace fg {
    inline const FgWindowMouseButtonEvent & toFg(
        const WindowMouseButtonEvent &  _EVENT
    )
    {
        return reinterpret_cast< const FgWindowMouseButtonEvent & >( _EVENT );
    }

    inline FgWindowMouseButtonEvent & toFg(
        WindowMouseButtonEvent &    _event
    )
    {
        return reinterpret_cast< FgWindowMouseButtonEvent & >( _event );
    }

    inline const FgWindowMouseButtonEvent * toFg(
        const WindowMouseButtonEvent *  _EVENT
    )
    {
        return reinterpret_cast< const FgWindowMouseButtonEvent * >( _EVENT );
    }

    inline FgWindowMouseButtonEvent * toFg(
        WindowMouseButtonEvent *    _event
    )
    {
        return reinterpret_cast< FgWindowMouseButtonEvent * >( _event );
    }

    inline const WindowMouseButtonEvent & toFgpp(
        const FgWindowMouseButtonEvent &    _EVENT
    )
    {
        return reinterpret_cast< const WindowMouseButtonEvent & >( _EVENT );
    }

    inline WindowMouseButtonEvent & toFgpp(
        FgWindowMouseButtonEvent &  _event
    )
    {
        return reinterpret_cast< WindowMouseButtonEvent & >( _event );
    }

    inline const WindowMouseButtonEvent * toFgpp(
        const FgWindowMouseButtonEvent *    _EVENT
    )
    {
        return reinterpret_cast< const WindowMouseButtonEvent * >( _EVENT );
    }

    inline WindowMouseButtonEvent * toFgpp(
        FgWindowMouseButtonEvent *  _event
    )
    {
        return reinterpret_cast< WindowMouseButtonEvent * >( _event );
    }
}

#endif  // FG4CPP_DEF_WINDOW_MOUSEBUTTONEVENT_H
