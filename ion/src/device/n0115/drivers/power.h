#ifndef ION_DEVICE_N0115_POWER_H
#define ION_DEVICE_N0115_POWER_H

#include <ion/src/device/shared/drivers/power.h>

namespace Ion {
namespace Device {
namespace Power {

void standbyConfiguration();
void internalFlashSuspend(bool isLEDActive);

}
}
}

#endif
