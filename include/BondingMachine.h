#ifndef BONDINGMACHINE_H
#define BONDINGMACHINE_H

class BondingMachine {
public:
    BondingMachine();
    void initialize();
    bool runBondingCycle();
    double getSensorData();
};

#endif
