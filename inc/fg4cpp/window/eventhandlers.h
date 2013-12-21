#ifndef FG4CPP_WINDOW_EVENTHANDLERS_H
#define FG4CPP_WINDOW_EVENTHANDLERS_H

#include "fgpp/window/eventhandlers.h"
#include "fg/window/eventhandlers.h"

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

#include "fg4cpp/window/closeevent.h"
#include "fg4cpp/window/positionevent.h"
#include "fg4cpp/window/sizeevent.h"
#include "fg4cpp/window/paintevent.h"
#include "fg4cpp/window/keyevent.h"
#include "fg4cpp/window/mousebuttonevent.h"
#include "fg4cpp/window/mousemotionevent.h"
#include "fg4cpp/util/import.h"

namespace fg {
    inline WindowEventHandlers * newWindowEventHandlers(
    )
    {
        return toFgpp( fgWindowEventHandlersNew() );
    }

    inline WindowEventHandlers * clone(
        const WindowEventHandlers & _EVENT_HANDLERS
    )
    {
        return toFgpp(
            fgWindowEventHandlersClone(
                toFg( &_EVENT_HANDLERS )
            )
        );
    }

    inline void free(
        WindowEventHandlers &   _eventHandlers
    )
    {
        fgWindowEventHandlersFree(
            toFg( &_eventHandlers )
        );
    }

    FG4CPPEXPORT void setCloseEventHandler(
        FgWindowEventHandlers &
        , const WindowCloseEventHandler &
    );

    inline void setCloseEventHandler(
        WindowEventHandlers &               _eventHandlers
        , const WindowCloseEventHandler &   _EVENT_HANDLER
    )
    {
        setCloseEventHandler(
            toFg( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callCloseEventHandler(
        const WindowEventHandlers & _EVENT_HANDLERS
        , const WindowCloseEvent &  _EVENT
    )
    {
        fgWindowEventHandlersCallCloseEventHandler(
            toFg( &_EVENT_HANDLERS )
            , toFg( &_EVENT )
        );
    }

    FG4CPPEXPORT void setPositionEventHandler(
        FgWindowEventHandlers &
        , const WindowPositionEventHandler &
    );

    inline void setPositionEventHandler(
        WindowEventHandlers &                   _eventHandlers
        , const WindowPositionEventHandler &    _EVENT_HANDLER
    )
    {
        setPositionEventHandler(
            toFg( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callPositionEventHandler(
        const WindowEventHandlers &     _EVENT_HANDLERS
        , const WindowPositionEvent &   _EVENT
    )
    {
        fgWindowEventHandlersCallPositionEventHandler(
            toFg( &_EVENT_HANDLERS )
            , toFg( &_EVENT )
        );
    }

    FG4CPPEXPORT void setSizeEventHandler(
        FgWindowEventHandlers &
        , const WindowSizeEventHandler &
    );

    inline void setSizeEventHandler(
        WindowEventHandlers &               _eventHandlers
        , const WindowSizeEventHandler &    _EVENT_HANDLER
    )
    {
        setSizeEventHandler(
            toFg( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callSizeEventHandler(
        const WindowEventHandlers & _EVENT_HANDLERS
        , const WindowSizeEvent &   _EVENT
    )
    {
        fgWindowEventHandlersCallSizeEventHandler(
            toFg( &_EVENT_HANDLERS )
            , toFg( &_EVENT )
        );
    }

    FG4CPPEXPORT void setPaintEventHandler(
        FgWindowEventHandlers &
        , const WindowPaintEventHandler &
    );

    inline void setPaintEventHandler(
        WindowEventHandlers &               _eventHandlers
        , const WindowPaintEventHandler &   _EVENT_HANDLER
    )
    {
        setPaintEventHandler(
            toFg( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callPaintEventHandler(
        const WindowEventHandlers & _EVENT_HANDLERS
        , const WindowPaintEvent &  _EVENT
    )
    {
        fgWindowEventHandlersCallPaintEventHandler(
            toFg( &_EVENT_HANDLERS )
            , toFg( &_EVENT )
        );
    }

    FG4CPPEXPORT void setKeyEventHandler(
        FgWindowEventHandlers &
        , const WindowKeyEventHandler &
    );

    inline void setKeyEventHandler(
        WindowEventHandlers &           _eventHandlers
        , const WindowKeyEventHandler & _EVENT_HANDLER
    )
    {
        setKeyEventHandler(
            toFg( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callKeyEventHandler(
        const WindowEventHandlers & _EVENT_HANDLERS
        , const WindowKeyEvent &    _EVENT
    )
    {
        fgWindowEventHandlersCallKeyEventHandler(
            toFg( &_EVENT_HANDLERS )
            , toFg( &_EVENT )
        );
    }

    FG4CPPEXPORT void setMouseButtonEventHandler(
        FgWindowEventHandlers &
        , const WindowMouseButtonEventHandler &
    );

    inline void setMouseButtonEventHandler(
        WindowEventHandlers &                   _eventHandlers
        , const WindowMouseButtonEventHandler & _EVENT_HANDLER
    )
    {
        setMouseButtonEventHandler(
            toFg( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callMouseButtonEventHandler(
        const WindowEventHandlers &         _EVENT_HANDLERS
        , const WindowMouseButtonEvent &    _EVENT
    )
    {
        fgWindowEventHandlersCallMouseButtonEventHandler(
            toFg( &_EVENT_HANDLERS )
            , toFg( &_EVENT )
        );
    }

    FG4CPPEXPORT void setMouseMotionEventHandler(
        FgWindowEventHandlers &
        , const WindowMouseMotionEventHandler &
    );

    inline void setMouseMotionEventHandler(
        WindowEventHandlers &                   _eventHandlers
        , const WindowMouseMotionEventHandler & _EVENT_HANDLER
    )
    {
        setMouseMotionEventHandler(
            toFg( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callMouseMotionEventHandler(
        const WindowEventHandlers &         _EVENT_HANDLERS
        , const WindowMouseMotionEvent &    _EVENT
    )
    {
        fgWindowEventHandlersCallMouseMotionEventHandler(
            toFg( &_EVENT_HANDLERS )
            , toFg( &_EVENT )
        );
    }
}

#endif  // FG4CPP_WINDOW_EVENTHANDLERS_H
