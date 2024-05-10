#include <iostream>
#include "adapter.h"


int main() {
    AmericanDeviceAdapter adapter;
    int voltage=0;
    adapter.useDevice();
    return 0;
}