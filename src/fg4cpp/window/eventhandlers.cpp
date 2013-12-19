#include "fg4cpp/util/export.h"
#include "fg4cpp/window/eventhandlers.h"

#include "fg/window/eventhandlers.h"
#include "fgpp/window/closeevent.h"
#include "fgpp/window/eventhandlers.h"

namespace fg {
    void setCloseEventHandler(
        FgWindowEventHandlers &
        , const WindowCloseEventHandler &
    )
    {
    }

    void setPositionEventHandler(
        FgWindowEventHandlers &
        , const WindowPositionEventHandler &
    )
    {
    }

    void setSizeEventHandler(
        FgWindowEventHandlers &
        , const WindowSizeEventHandler &
    )
    {
    }

    void setPaintEventHandler(
        FgWindowEventHandlers &
        , const WindowPaintEventHandler &
    )
    {
    }

    void setKeyEventHandler(
        FgWindowEventHandlers &
        , const WindowKeyEventHandler &
    )
    {
    }

    void setMouseButtonEventHandler(
        FgWindowEventHandlers &
        , const WindowMouseButtonEventHandler &
    )
    {
    }

    void setMouseMotionEventHandler(
        FgWindowEventHandlers &
        , const WindowMouseMotionEventHandler &
    )
    {
    }
}
