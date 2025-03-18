#ifndef HARDWAREINTERFACE_H
#define HARDWAREINTERFACE_H

class HardwareInterface {
public:
    HardwareInterface();
    void connect();
    void disconnect();
    int readControlSignal();
};

#endif
