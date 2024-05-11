#define BOOST_TEST_MODULE MyTest
#include <boost/test/unit_test.hpp>
#include <iostream>
#include "adapter.h"
#include <fstream>

BOOST_AUTO_TEST_CASE(test_getVoltage) {
    AmericanDeviceImpl americanDevice;
    AmericanDeviceAdapter adapter(&americanDevice);
    int voltage = adapter.getVoltage();
    BOOST_CHECK_EQUAL(voltage, 110);
}

BOOST_AUTO_TEST_CASE(test_useDevice) {
    AmericanDeviceImpl americanDevice;
    AmericanDeviceAdapter adapter(&americanDevice);    
}