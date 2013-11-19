#include "gf/util/export.h"
#include "gf/window/eventhandlers.h"

#include "gf4cpp/window/eventhandlers.h"
#include "gf4cpp/window/window.h"
#include "gfpp/window/window.h"
#include "gfpp/common/primitives.h"

void gfWindowEventHandlersSetCloseEventHandler(
    GfWindowEventHandlers *     _eventHandlers
    , GfWindowCloseEventHandler _eventHandler
)
{
    gf::setCloseEventHandler(
        *_eventHandlers
        , [
            _eventHandler
        ]
        (
            gf::Window &    _window
        )
        {
            _eventHandler(
                gf::toGf( &_window )
            );
        }
    );
}

void gfWindowEventHandlersSetPositionEventHandler(
    GfWindowEventHandlers *         _eventHandlers
    , GfWindowPositionEventHandler  _eventHandler
)
{
    gf::setPositionEventHandler(
        *_eventHandlers
        , [
            _eventHandler
        ]
        (
            gf::Window &    _window
            , gf::Int       _x
            , gf::Int       _y
        )
        {
            _eventHandler(
                gf::toGf( &_window )
                , _x
                , _y
            );
        }
    );
}

void gfWindowEventHandlersSetSizeEventHandler(
    GfWindowEventHandlers *     _eventHandlers
    , GfWindowSizeEventHandler  _eventHandler
)
{
    gf::setSizeEventHandler(
        *_eventHandlers
        , [
            _eventHandler
        ]
        (
            gf::Window &    _window
            , gf::Int       _width
            , gf::Int       _height
        )
        {
            _eventHandler(
                gf::toGf( &_window )
                , _width
                , _height
            );
        }
    );
}

void gfWindowEventHandlersSetPaintEventHandler(
    GfWindowEventHandlers *     _eventHandlers
    , GfWindowPaintEventHandler _eventHandler
)
{
    gf::setPaintEventHandler(
        *_eventHandlers
        , [
            _eventHandler
        ]
        (
            gf::Window &    _window
            , gf::Int       _x
            , gf::Int       _y
            , gf::Int       _width
            , gf::Int       _height
        )
        {
            _eventHandler(
                gf::toGf( &_window )
                , _x
                , _y
                , _width
                , _height
            );
        }
    );
}
