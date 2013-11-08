#include "gf/util/linux/export.h"
#include "sucrose4cpp/common/linux/common_setup.h"

GFCONSTRUCTOR void constructor(
)
{
    sucrose::initializeCommon();
}
