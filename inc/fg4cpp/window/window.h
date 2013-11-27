#ifndef FG4CPP_WINDOW_WINDOW_H
#define FG4CPP_WINDOW_WINDOW_H

#include "fgpp/window/window.h"
#include "fg/window/window.h"

namespace fg {
    inline const FgWindow & toFg(
        const Window &  _WINDOW
    )
    {
        return reinterpret_cast< const FgWindow & >( _WINDOW );
    }

    inline FgWindow & toFg(
        Window &    _window
    )
    {
        return reinterpret_cast< FgWindow & >( _window );
    }

    inline const FgWindow * toFg(
        const Window *  _WINDOW
    )
    {
        return reinterpret_cast< const FgWindow * >( _WINDOW );
    }

    inline FgWindow * toFg(
        Window *    _window
    )
    {
        return reinterpret_cast< FgWindow * >( _window );
    }

    inline const Window & toFgpp(
        const FgWindow &    _WINDOW
    )
    {
        return reinterpret_cast< const Window & >( _WINDOW );
    }

    inline Window & toFgpp(
        FgWindow &  _window
    )
    {
        return reinterpret_cast< Window & >( _window );
    }

    inline const Window * toFgpp(
        const FgWindow *    _WINDOW
    )
    {
        return reinterpret_cast< const Window * >( _WINDOW );
    }

    inline Window * toFgpp(
        FgWindow *  _window
    )
    {
        return reinterpret_cast< Window * >( _window );
    }
}

#include "fg4cpp/window/eventhandlers.h"
#include "fg4cpp/string/utf32.h"
#include "fgpp/common/primitives.h"

namespace fg {
    inline Window * newWindow(
        const WindowEventHandlers & _EVENT_HANDLERS
        , const Utf32 &             _TITLE
        , Int                       _width
        , Int                       _height
    )
    {
        return toFgpp(
            fgWindowNew(
                toFg( &_EVENT_HANDLERS )
                , toFg( &_TITLE )
                , _width
                , _height
            )
        );
    }

    inline void free(
        Window &    _window
    )
    {
        fgWindowFree(
            toFg( &_window )
        );
    }

    inline void close(
        Window &    _window
    )
    {
        fgWindowClose(
            toFg( &_window )
        );
    }

    inline Bool setTitle(
        Window &        _window
        , const Utf32 & _TITLE
    )
    {
        return fgWindowSetTitle(
            toFg( &_window )
            , toFg( &_TITLE )
        );
    }

    inline void setPosition(
        Window &    _window
        , Int       _x
        , Int       _y
    )
    {
        fgWindowSetPosition(
            toFg( &_window )
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
        fgWindowSetSize(
            toFg( &_window )
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
        fgWindowRepaint(
            toFg( &_window )
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
        fgWindowRepaintAll(
            toFg( &_window )
        );
    }
}

#endif  // FG4CPP_WINDOW_WINDOW_H
