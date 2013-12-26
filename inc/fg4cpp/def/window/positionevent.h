#ifndef FG4CPP_DEF_WINDOW_POSITIONEVENT_H
#define FG4CPP_DEF_WINDOW_POSITIONEVENT_H

#include "fgpp/def/window/positionevent.h"
#include "fg/def/window/positionevent.h"

namespace fg {
    inline const FgWindowPositionEvent & toFg(
        const WindowPositionEvent & _EVENT
    )
    {
        return reinterpret_cast< const FgWindowPositionEvent & >( _EVENT );
    }

    inline FgWindowPositionEvent & toFg(
        WindowPositionEvent &   _event
    )
    {
        return reinterpret_cast< FgWindowPositionEvent & >( _event );
    }

    inline const FgWindowPositionEvent * toFg(
        const WindowPositionEvent * _EVENT
    )
    {
        return reinterpret_cast< const FgWindowPositionEvent * >( _EVENT );
    }

    inline FgWindowPositionEvent * toFg(
        WindowPositionEvent *   _event
    )
    {
        return reinterpret_cast< FgWindowPositionEvent * >( _event );
    }

    inline const WindowPositionEvent & toFgpp(
        const FgWindowPositionEvent &   _EVENT
    )
    {
        return reinterpret_cast< const WindowPositionEvent & >( _EVENT );
    }

    inline WindowPositionEvent & toFgpp(
        FgWindowPositionEvent & _event
    )
    {
        return reinterpret_cast< WindowPositionEvent & >( _event );
    }

    inline const WindowPositionEvent * toFgpp(
        const FgWindowPositionEvent *   _EVENT
    )
    {
        return reinterpret_cast< const WindowPositionEvent * >( _EVENT );
    }

    inline WindowPositionEvent * toFgpp(
        FgWindowPositionEvent * _event
    )
    {
        return reinterpret_cast< WindowPositionEvent * >( _event );
    }
}

#endif  // FG4CPP_DEF_WINDOW_POSITIONEVENT_H
