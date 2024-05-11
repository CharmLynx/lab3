#include <iostream>
#include "adapter.h"


int main() {
    AmericanDeviceImpl americanDevice;
    AmericanDeviceAdapter adapter(&americanDevice);
    adapter.useDevice();

    return 0;
}