# Equipment Testing Simulator

This project simulates semiconductor manufacturing equipment for testing purposes. It includes:
- Simulation of machine control and hardware interface.
- Unit and integration tests using GoogleTest.
- Documentation for design, test plans, and defect tracking.

## Setup

1. **Download and Install Your IDE:**
   - Download and install [Eclipse IDE for C/C++ Developers](https://www.eclipse.org/downloads/) or [Visual Studio Community](https://visualstudio.microsoft.com/vs/community/).
   - Alternatively, use [Visual Studio Code](https://code.visualstudio.com/) with the C/C++ extension.
   - If using Visual Studio Code on Windows, ensure you have MinGW installed. This guide is very useful: [Configuring MinGW in VS Code](https://code.visualstudio.com/docs/cpp/config-mingw).

2. **Clone the Repository:**
   - Clone this repository to your local machine.

3. **Open the Project in Your IDE:**
   - Open the project folder (`EquipmentTestingSimulator`) in your chosen IDE.

4. **Build and Run the Simulation:**
   - Follow the provided build instructions (e.g., using the command line or IDE build configurations) to compile the simulation.
   - For example, from the project root, you can compile using:
     ```bash
     g++ -std=c++17 -Iinclude src/main.cpp src/BondingMachine.cpp src/HardwareInterface.cpp -o main.exe
     ```
   - Run the simulation executable to verify the output.

5. **Run Tests Using GoogleTest:**
   - Build the test suite using the provided test files and your preferred build method.
   - For example:
     ```bash
     g++ -std=c++17 -Iinclude -I"C:/path/to/vcpkg/installed/x64-windows/include" \
         src/BondingMachine.cpp src/HardwareInterface.cpp \
         tests/test_main.cpp tests/test_machine.cpp tests/test_integration.cpp \
         -L"C:/path/to/vcpkg/installed/x64-windows/lib" -lgtest -lgtest_main -pthread \
         -o test_suite.exe
     ```
   - Run the test suite executable to execute the tests.

## Additional Documentation

- **Design Overview:** 
  - See `docs/design_overview.md` for detailed design concepts.
- **Test Plan:**
  - See `docs/test_plan.md` for testing objectives and scenarios.
- **Defect Tracking:**
  - See `docs/defect_tracking.md` for guidelines on logging and prioritizing defects.
