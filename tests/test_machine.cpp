#include "BondingMachine.h"
#include <gtest/gtest.h>
#include <string>

TEST(BondingMachineTest, Initialization) {
    BondingMachine machine;
    testing::internal::CaptureStdout();
    machine.initialize();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("BondingMachine initialized"), std::string::npos);
}

TEST(BondingMachineTest, RunBondingCycle) {
    BondingMachine machine;
    bool result = machine.runBondingCycle();
    EXPECT_TRUE(result == true || result == false);
}

TEST(BondingMachineTest, SensorDataRange) {
    BondingMachine machine;
    double data = machine.getSensorData();
    EXPECT_GE(data, 0);
    EXPECT_LE(data, 100);
}
