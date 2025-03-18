#include "BondingMachine.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

BondingMachine::BondingMachine() {
    std::srand(static_cast<unsigned int>(std::time(0)));
}

void BondingMachine::initialize() {
    std::cout << "BondingMachine initialized.\n";
}

bool BondingMachine::runBondingCycle() {
    std::cout << "Running bonding cycle...\n";
    bool success = (std::rand() % 2 == 0);
    if (success) {
        std::cout << "Bonding cycle successful.\n";
    } else {
        std::cout << "Bonding cycle failed.\n";
    }
    return success;
}

double BondingMachine::getSensorData() {
    double data = (std::rand() % 101);
    std::cout << "Sensor Data: " << data << "\n";
    return data;
}
