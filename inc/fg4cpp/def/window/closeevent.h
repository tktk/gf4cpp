#ifndef FG4CPP_DEF_WINDOW_CLOSEEVENT_H
#define FG4CPP_DEF_WINDOW_CLOSEEVENT_H

#include "fgpp/def/window/closeevent.h"
#include "fg/def/window/closeevent.h"

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

#endif  // FG4CPP_DEF_WINDOW_CLOSEEVENT_H
