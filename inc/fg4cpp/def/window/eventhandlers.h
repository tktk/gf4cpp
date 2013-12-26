#ifndef FG4CPP_DEF_WINDOW_EVENTHANDLERS_H
#define FG4CPP_DEF_WINDOW_EVENTHANDLERS_H

#include "fgpp/def/window/eventhandlers.h"
#include "fg/def/window/eventhandlers.h"

namespace fg {
    inline const FgWindowEventHandlers & toFg(
        const WindowEventHandlers & _EVENT_HANDLERS
    )
    {
        return reinterpret_cast< const FgWindowEventHandlers & >( _EVENT_HANDLERS );
    }

    inline FgWindowEventHandlers & toFg(
        WindowEventHandlers &   _eventHandlers
    )
    {
        return reinterpret_cast< FgWindowEventHandlers & >( _eventHandlers );
    }

    inline const FgWindowEventHandlers * toFg(
        const WindowEventHandlers * _EVENT_HANDLERS
    )
    {
        return reinterpret_cast< const FgWindowEventHandlers * >( _EVENT_HANDLERS );
    }

    inline FgWindowEventHandlers * toFg(
        WindowEventHandlers *   _eventHandlers
    )
    {
        return reinterpret_cast< FgWindowEventHandlers * >( _eventHandlers );
    }

    inline const WindowEventHandlers & toFgpp(
        const FgWindowEventHandlers &   _EVENT_HANDLERS
    )
    {
        return reinterpret_cast< const WindowEventHandlers & >( _EVENT_HANDLERS );
    }

    inline WindowEventHandlers & toFgpp(
        FgWindowEventHandlers & _eventHandlers
    )
    {
        return reinterpret_cast< WindowEventHandlers & >( _eventHandlers );
    }

    inline const WindowEventHandlers * toFgpp(
        const FgWindowEventHandlers *   _EVENT_HANDLERS
    )
    {
        return reinterpret_cast< const WindowEventHandlers * >( _EVENT_HANDLERS );
    }

    inline WindowEventHandlers * toFgpp(
        FgWindowEventHandlers * _eventHandlers
    )
    {
        return reinterpret_cast< WindowEventHandlers * >( _eventHandlers );
    }
}

#endif  // FG4CPP_DEF_WINDOW_EVENTHANDLERS_H
