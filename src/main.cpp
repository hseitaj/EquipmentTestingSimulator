#include "BondingMachine.h"
#include "HardwareInterface.h"
#include <iostream>

int main() {
    std::cout << "Semiconductor Equipment Testing Simulator\n";
    
    HardwareInterface hwInterface;
    hwInterface.connect();
    
    BondingMachine machine;
    machine.initialize();
    machine.runBondingCycle();
    machine.getSensorData();
    
    hwInterface.disconnect();
    
    return 0;
}
