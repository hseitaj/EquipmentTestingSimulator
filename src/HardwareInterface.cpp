#include "HardwareInterface.h"
#include <iostream>
#include <cstdlib>

HardwareInterface::HardwareInterface() {}

void HardwareInterface::connect() {
    std::cout << "Hardware interface connected.\n";
}

void HardwareInterface::disconnect() {
    std::cout << "Hardware interface disconnected.\n";
}

int HardwareInterface::readControlSignal() {
    int signal = std::rand() % 2;
    std::cout << "Control Signal: " << signal << "\n";
    return signal;
}
