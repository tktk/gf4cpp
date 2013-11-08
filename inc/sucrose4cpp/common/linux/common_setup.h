#ifndef SUCROSE4CPP_COMMON_LINUX_COMMON_SETUP_H
#define SUCROSE4CPP_COMMON_LINUX_COMMON_SETUP_H

#include "sucrose4cpp/common/linux/stringconverter.h"

namespace sucrose {
    inline void initializeCommon(
    )
    {
        initializeStringConverter();
    }
}

#endif  // SUCROSE4CPP_COMMON_LINUX_COMMON_SETUP_H
