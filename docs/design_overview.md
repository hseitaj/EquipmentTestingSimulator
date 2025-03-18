# Design Overview

This project simulates key components of semiconductor equipment testing:
- **BondingMachine:** Simulates the machine behavior (initialization, running a bonding cycle, and sensor data retrieval).
- **HardwareInterface:** Simulates the connection and control signal reading from hardware.
- **Integration:** The main simulation ties both components together, mimicking a real testing environment.

The design follows a modular approach to separate simulation logic from testing and documentation.
