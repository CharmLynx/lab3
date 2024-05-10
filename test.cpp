#define BOOST_TEST_MODULE MyTest
#include <boost/test/unit_test.hpp>
#include <iostream>
#include "adapter.h"

BOOST_AUTO_TEST_CASE(testVoltageConversion) {
    AmericanDeviceAdapter adapter;
    BOOST_CHECK_EQUAL(adapter.socket.giveVoltage(), 220);
    BOOST_CHECK_EQUAL(adapter.getVoltage(), 110); 
}
