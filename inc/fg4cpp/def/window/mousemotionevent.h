#ifndef FG4CPP_DEF_WINDOW_MOUSEMOTIONEVENT_H
#define FG4CPP_DEF_WINDOW_MOUSEMOTIONEVENT_H

#include "fgpp/def/window/mousemotionevent.h"
#include "fg/def/window/mousemotionevent.h"

namespace fg {
    inline const FgWindowMouseMotionEvent & toFg(
        const WindowMouseMotionEvent &  _EVENT
    )
    {
        return reinterpret_cast< const FgWindowMouseMotionEvent & >( _EVENT );
    }

    inline FgWindowMouseMotionEvent & toFg(
        WindowMouseMotionEvent &    _event
    )
    {
        return reinterpret_cast< FgWindowMouseMotionEvent & >( _event );
    }

    inline const FgWindowMouseMotionEvent * toFg(
        const WindowMouseMotionEvent *  _EVENT
    )
    {
        return reinterpret_cast< const FgWindowMouseMotionEvent * >( _EVENT );
    }

    inline FgWindowMouseMotionEvent * toFg(
        WindowMouseMotionEvent *    _event
    )
    {
        return reinterpret_cast< FgWindowMouseMotionEvent * >( _event );
    }

    inline const WindowMouseMotionEvent & toFgpp(
        const FgWindowMouseMotionEvent &    _EVENT
    )
    {
        return reinterpret_cast< const WindowMouseMotionEvent & >( _EVENT );
    }

    inline WindowMouseMotionEvent & toFgpp(
        FgWindowMouseMotionEvent &  _event
    )
    {
        return reinterpret_cast< WindowMouseMotionEvent & >( _event );
    }

    inline const WindowMouseMotionEvent * toFgpp(
        const FgWindowMouseMotionEvent *    _EVENT
    )
    {
        return reinterpret_cast< const WindowMouseMotionEvent * >( _EVENT );
    }

    inline WindowMouseMotionEvent * toFgpp(
        FgWindowMouseMotionEvent *  _event
    )
    {
        return reinterpret_cast< WindowMouseMotionEvent * >( _event );
    }
}

#endif  // FG4CPP_DEF_WINDOW_MOUSEMOTIONEVENT_H
