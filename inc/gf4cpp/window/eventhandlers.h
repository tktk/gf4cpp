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
#include "gf4cpp/window/key.h"
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

    GF4CPPEXPORT void setKeyEventHandler(
        GfWindowEventHandlers &
        , const WindowKeyEventHandler &
    );

    inline void setKeyEventHandler(
        WindowEventHandlers &           _eventHandlers
        , const WindowKeyEventHandler & _EVENT_HANDLER
    )
    {
        setKeyEventHandler(
            toGf( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callKeyEventHandler(
        const WindowEventHandlers & _EVENT_HANDLERS
        , Window &                  _window
        , Key                       _key
        , const Utf32Char *         _CHAR_PTR
        , Bool                      _pressed
    )
    {
        gfWindowEventHandlersCallKeyEventHandler(
            toGf( &_EVENT_HANDLERS )
            , toGf( &_window )
            , toGf( _key )
            , _CHAR_PTR
            , _pressed
        );
    }

    GF4CPPEXPORT void setMouseButtonEventHandler(
        GfWindowEventHandlers &
        , const WindowMouseButtonEventHandler &
    );

    inline void setMouseButtonEventHandler(
        WindowEventHandlers &                   _eventHandlers
        , const WindowMouseButtonEventHandler & _EVENT_HANDLER
    )
    {
        setMouseButtonEventHandler(
            toGf( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callMouseButtonEventHandler(
        const WindowEventHandlers & _EVENT_HANDLERS
        , Window &                  _window
        , ULong                     _index
        , Bool                      _pressed
    )
    {
        gfWindowEventHandlersCallMouseButtonEventHandler(
            toGf( &_EVENT_HANDLERS )
            , toGf( &_window )
            , _index
            , _pressed
        );
    }

    GF4CPPEXPORT void setMouseMotionEventHandler(
        GfWindowEventHandlers &
        , const WindowMouseMotionEventHandler &
    );

    inline void setMouseMotionEventHandler(
        WindowEventHandlers &                   _eventHandlers
        , const WindowMouseMotionEventHandler & _EVENT_HANDLER
    )
    {
        setMouseMotionEventHandler(
            toGf( _eventHandlers )
            , _EVENT_HANDLER
        );
    }

    inline void callMouseMotionEventHandler(
        const WindowEventHandlers & _EVENT_HANDLERS
        , Window &                  _window
        , Int                       _x
        , Int                       _y
    )
    {
        gfWindowEventHandlersCallMouseMotionEventHandler(
            toGf( &_EVENT_HANDLERS )
            , toGf( &_window )
            , _x
            , _y
        );
    }
}

#endif  // GF4CPP_WINDOW_EVENTHANDLERS_H
