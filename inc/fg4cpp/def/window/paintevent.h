#ifndef FG4CPP_DEF_WINDOW_PAINTEVENT_H
#define FG4CPP_DEF_WINDOW_PAINTEVENT_H

#include "fgpp/def/window/paintevent.h"
#include "fg/def/window/paintevent.h"

namespace fg {
    inline const FgWindowPaintEvent & toFg(
        const WindowPaintEvent &    _EVENT
    )
    {
        return reinterpret_cast< const FgWindowPaintEvent & >( _EVENT );
    }

    inline FgWindowPaintEvent & toFg(
        WindowPaintEvent &  _event
    )
    {
        return reinterpret_cast< FgWindowPaintEvent & >( _event );
    }

    inline const FgWindowPaintEvent * toFg(
        const WindowPaintEvent *    _EVENT
    )
    {
        return reinterpret_cast< const FgWindowPaintEvent * >( _EVENT );
    }

    inline FgWindowPaintEvent * toFg(
        WindowPaintEvent *  _event
    )
    {
        return reinterpret_cast< FgWindowPaintEvent * >( _event );
    }

    inline const WindowPaintEvent & toFgpp(
        const FgWindowPaintEvent &  _EVENT
    )
    {
        return reinterpret_cast< const WindowPaintEvent & >( _EVENT );
    }

    inline WindowPaintEvent & toFgpp(
        FgWindowPaintEvent &    _event
    )
    {
        return reinterpret_cast< WindowPaintEvent & >( _event );
    }

    inline const WindowPaintEvent * toFgpp(
        const FgWindowPaintEvent *  _EVENT
    )
    {
        return reinterpret_cast< const WindowPaintEvent * >( _EVENT );
    }

    inline WindowPaintEvent * toFgpp(
        FgWindowPaintEvent *    _event
    )
    {
        return reinterpret_cast< WindowPaintEvent * >( _event );
    }
}

#endif  // FG4CPP_DEF_WINDOW_PAINTEVENT_H
