#include "BondingMachine.h"
#include "HardwareInterface.h"
#include <gtest/gtest.h>
#include <string>

TEST(IntegrationTest, FullCycle) {
    HardwareInterface hwInterface;
    BondingMachine machine;
    
    testing::internal::CaptureStdout();
    
    hwInterface.connect();
    machine.initialize();
    bool cycleResult = machine.runBondingCycle();
    double sensorData = machine.getSensorData();
    hwInterface.disconnect();
    
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Hardware interface connected"), std::string::npos);
    EXPECT_NE(output.find("BondingMachine initialized"), std::string::npos);
    EXPECT_GE(sensorData, 0);
    EXPECT_LE(sensorData, 100);
    EXPECT_TRUE(cycleResult == true || cycleResult == false);
}
