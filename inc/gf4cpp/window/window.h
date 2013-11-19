#ifndef GF4CPP_WINDOW_WINDOW_H
#define GF4CPP_WINDOW_WINDOW_H

#include "gfpp/window/window.h"
#include "gf/window/window.h"

namespace gf {
    inline const GfWindow & toGf(
        const Window &  _WINDOW
    )
    {
        return reinterpret_cast< const GfWindow & >( _WINDOW );
    }

    inline GfWindow & toGf(
        Window &    _window
    )
    {
        return reinterpret_cast< GfWindow & >( _window );
    }

    inline const GfWindow * toGf(
        const Window *  _WINDOW
    )
    {
        return reinterpret_cast< const GfWindow * >( _WINDOW );
    }

    inline GfWindow * toGf(
        Window *    _window
    )
    {
        return reinterpret_cast< GfWindow * >( _window );
    }

    inline const Window & toGfpp(
        const GfWindow &    _WINDOW
    )
    {
        return reinterpret_cast< const Window & >( _WINDOW );
    }

    inline Window & toGfpp(
        GfWindow &  _window
    )
    {
        return reinterpret_cast< Window & >( _window );
    }

    inline const Window * toGfpp(
        const GfWindow *    _WINDOW
    )
    {
        return reinterpret_cast< const Window * >( _WINDOW );
    }

    inline Window * toGfpp(
        GfWindow *  _window
    )
    {
        return reinterpret_cast< Window * >( _window );
    }
}

#include "gf4cpp/window/eventhandlers.h"
#include "gf4cpp/string/utf32.h"
#include "gfpp/common/primitives.h"

namespace gf {
    inline Window * newWindow(
        const WindowEventHandlers & _EVENT_HANDLERS
        , const Utf32 &             _TITLE
        , Int                       _width
        , Int                       _height
    )
    {
        return toGfpp(
            gfWindowNew(
                toGf( &_EVENT_HANDLERS )
                , toGf( &_TITLE )
                , _width
                , _height
            )
        );
    }

    inline void free(
        Window &    _window
    )
    {
        gfWindowFree(
            toGf( &_window )
        );
    }

    inline void close(
        Window &    _window
    )
    {
        gfWindowClose(
            toGf( &_window )
        );
    }

    inline Bool setTitle(
        Window &        _window
        , const Utf32 & _TITLE
    )
    {
        return gfWindowSetTitle(
            toGf( &_window )
            , toGf( &_TITLE )
        );
    }

    inline void setPosition(
        Window &    _window
        , Int       _x
        , Int       _y
    )
    {
        gfWindowSetPosition(
            toGf( &_window )
            , _x
            , _y
        );
    }

    inline void setSize(
        Window &    _window
        , Int       _width
        , Int       _height
    )
    {
        gfWindowSetSize(
            toGf( &_window )
            , _width
            , _height
        );
    }

    inline void repaint(
        Window &    _window
        , Int       _x
        , Int       _y
        , Int       _width
        , Int       _height
    )
    {
        gfWindowRepaint(
            toGf( &_window )
            , _x
            , _y
            , _width
            , _height
        );
    }

    inline void repaint(
        Window &    _window
    )
    {
        gfWindowRepaintAll(
            toGf( &_window )
        );
    }
}

#endif  // GF4CPP_WINDOW_WINDOW_H
