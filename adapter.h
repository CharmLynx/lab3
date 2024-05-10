#include<iostream>
using namespace std;

class AmericanDevice {
public:
    virtual void useDevice() = 0;
};

class AmericanDeviceImpl : public AmericanDevice {
public:
    void useDevice() override {
        cout << "Using American device" << endl;
    }
};

class EuropeanSocket {
public:
    int giveVoltage() {
        return 220;
    }
};

class AmericanDeviceAdapter : public AmericanDevice {
public:
    EuropeanSocket socket;
    int getVoltage() {
        int voltage = socket.giveVoltage();
        if (voltage != 110) {
            voltage = 110;
            cout << "Сonnecting adapter. Converting voltage to " << voltage << "V..." << endl;
        }
        cout << "Connecting to European socket" << endl;
        return voltage;
    }

    void useDevice() override {
        int voltage = getVoltage();
        AmericanDeviceImpl device;
        device.useDevice();
    }
};