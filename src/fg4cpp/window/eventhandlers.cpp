#include "fg4cpp/util/export.h"
#include "fg4cpp/window/eventhandlers.h"

#include "fg/window/eventhandlers.h"
#include "fgpp/window/closeevent.h"
#include "fgpp/window/positionevent.h"
#include "fgpp/window/sizeevent.h"
#include "fgpp/window/paintevent.h"
#include "fgpp/window/keyevent.h"
#include "fgpp/window/mousebuttonevent.h"
#include "fgpp/window/mousemotionevent.h"

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
