#ifndef GF4CPP_WINDOW_EVENTHANDLERS_H
#define GF4CPP_WINDOW_EVENTHANDLERS_H

#include "gfpp/window/eventhandlers.h"
#include "gf/window/eventhandlers.h"

namespace gf {
    inline const GfWindowEventHandlers & toGf(
        const WindowEventHandlers & _EVENT_HANDLERS
    )
    {
        return reinterpret_cast< const GfWindowEventHandlers & >( _EVENT_HANDLERS );
    }

    inline GfWindowEventHandlers & toGf(
        WindowEventHandlers &   _eventHandlers
    )
    {
        return reinterpret_cast< GfWindowEventHandlers & >( _eventHandlers );
    }

    inline const GfWindowEventHandlers * toGf(
        const WindowEventHandlers * _EVENT_HANDLERS
    )
    {
        return reinterpret_cast< const GfWindowEventHandlers * >( _EVENT_HANDLERS );
    }

    inline GfWindowEventHandlers * toGf(
        WindowEventHandlers *   _eventHandlers
    )
    {
        return reinterpret_cast< GfWindowEventHandlers * >( _eventHandlers );
    }

    inline const WindowEventHandlers & toGfpp(
        const GfWindowEventHandlers &   _EVENT_HANDLERS
    )
    {
        return reinterpret_cast< const WindowEventHandlers & >( _EVENT_HANDLERS );
    }

    inline WindowEventHandlers & toGfpp(
        GfWindowEventHandlers & _eventHandlers
    )
    {
        return reinterpret_cast< WindowEventHandlers & >( _eventHandlers );
    }

    inline const WindowEventHandlers * toGfpp(
        const GfWindowEventHandlers *   _EVENT_HANDLERS
    )
    {
        return reinterpret_cast< const WindowEventHandlers * >( _EVENT_HANDLERS );
    }

    inline WindowEventHandlers * toGfpp(
        GfWindowEventHandlers * _eventHandlers
    )
    {
        return reinterpret_cast< WindowEventHandlers * >( _eventHandlers );
    }
}

#include "gf4cpp/window/window.h"
#include "gf4cpp/util/import.h"

namespace gf {
    inline WindowEventHandlers * newWindowEventHandlers(
    )
    {
        return toGfpp( gfWindowEventHandlersNew() );
    }

    inline WindowEventHandlers * clone(
        const WindowEventHandlers & _EVENT_HANDLERS
    )
    {
        return toGfpp(
            gfWindowEventHandlersClone(
                toGf( &_EVENT_HANDLERS )
            )
        );
    }

    inline void free(
        WindowEventHandlers &   _eventHandlers
    )
    {
        gfWindowEventHandlersFree(
            toGf( &_eventHandlers )
        );
    }

    GF4CPPEXPORT void setCloseEventHandler(
        GfWindowEventHandlers &
        , const WindowCloseEventHandler &
    );

    inline void setCloseEventHandler(
        WindowEventHandlers &               _eventHandlers
        , const WindowCloseEventHandler &   _EVENT_HANDLER
    )
    {
        setCloseEventHandler(
            toGf( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callCloseEventHandler(
        const WindowEventHandlers & _EVENT_HANDLERS
        , Window &                  _window
    )
    {
        gfWindowEventHandlersCallCloseEventHandler(
            toGf( &_EVENT_HANDLERS )
            , toGf( &_window )
        );
    }

    GF4CPPEXPORT void setPositionEventHandler(
        GfWindowEventHandlers &
        , const WindowPositionEventHandler &
    );

    inline void setPositionEventHandler(
        WindowEventHandlers &                   _eventHandlers
        , const WindowPositionEventHandler &    _EVENT_HANDLER
    )
    {
        setPositionEventHandler(
            toGf( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callPositionEventHandler(
        const WindowEventHandlers & _EVENT_HANDLERS
        , Window &                  _window
        , Int                       _x
        , Int                       _y
    )
    {
        gfWindowEventHandlersCallPositionEventHandler(
            toGf( &_EVENT_HANDLERS )
            , toGf( &_window )
            , _x
            , _y
        );
    }

    GF4CPPEXPORT void setSizeEventHandler(
        GfWindowEventHandlers &
        , const WindowSizeEventHandler &
    );

    inline void setSizeEventHandler(
        WindowEventHandlers &               _eventHandlers
        , const WindowSizeEventHandler &    _EVENT_HANDLER
    )
    {
        setSizeEventHandler(
            toGf( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callSizeEventHandler(
        const WindowEventHandlers & _EVENT_HANDLERS
        , Window &                  _window
        , Int                       _width
        , Int                       _height
    )
    {
        gfWindowEventHandlersCallSizeEventHandler(
            toGf( &_EVENT_HANDLERS )
            , toGf( &_window )
            , _width
            , _height
        );
    }

    GF4CPPEXPORT void setPaintEventHandler(
        GfWindowEventHandlers &
        , const WindowPaintEventHandler &
    );

    inline void setPaintEventHandler(
        WindowEventHandlers &               _eventHandlers
        , const WindowPaintEventHandler &   _EVENT_HANDLER
    )
    {
        setPaintEventHandler(
            toGf( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callPaintEventHandler(
        const WindowEventHandlers & _EVENT_HANDLERS
        , Window &                  _window
        , Int                       _x
        , Int                       _y
        , Int                       _width
        , Int                       _height
    )
    {
        gfWindowEventHandlersCallPaintEventHandler(
            toGf( &_EVENT_HANDLERS )
            , toGf( &_window )
            , _x
            , _y
            , _width
            , _height
        );
    }
}

#endif  // GF4CPP_WINDOW_EVENTHANDLERS_H
