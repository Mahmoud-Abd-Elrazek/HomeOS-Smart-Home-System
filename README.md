# HomeOS – Smart Home Automation System

HomeOS is a C++ project that simulates a Smart Home Automation System.
The goal of this project is to demonstrate how a real system can be designed using clean architecture principles and modern C++ features.

The system models a smart room that contains devices such as lights and air conditioners.
Users can control devices individually or activate predefined scenes like study mode, workout mode, and sleep mode.

This project focuses more on software architecture and system design rather than hardware integration.

---

Project Goals

* Demonstrate Layered Architecture in a real example
* Apply SOLID design principles
* Use modern C++ features such as smart pointers and STL
* Build a clean and extensible smart home system design

---

Architecture Overview

The project follows a layered architecture to separate responsibilities across different parts of the system.

Infrastructure Layer
Handles cross-cutting concerns such as logging.

Abstractions Layer
Defines core interfaces like device identity and power control.

Domain Layer
Contains the main system entities such as SmartDevice.

Implementation Layer
Contains concrete devices like SmartLight and SmartAC.

Application Layer
Responsible for system orchestration including rooms and scenes.

---

Project Structure

HomeOS
│
├── infrastructure
│      Logger
│
├── abstractions
│      IPowerable
│      IIdentifiable
│
├── domain
│      SmartDevice
│
├── devices
│      SmartLight
│      SmartAC
│
├── application
│      Room
│      Scene
│      SceneManager
│
└── main.cpp

---

Key Components

Logger
A centralized logging system that prints formatted logs with timestamps and log levels.

SmartDevice
An abstract base class representing any smart device.

SmartLight
Represents a smart lighting device.

SmartAC
Represents an air conditioner with temperature control.

Room
Represents a physical room that contains multiple devices.

Scene
Represents a predefined set of actions that define a specific environment or mood.

SceneManager
Responsible for managing and executing scenes.

---

Example Scenes

Study Mode
Turns on the desk light, turns off the main light, and sets the AC temperature for focus.

Workout Mode
Turns on strong lighting and sets a colder AC temperature for physical activity.

Sleep Mode
Turns off lights and sets the AC to a comfortable sleeping temperature.

---

Technologies Used

C++
Standard Template Library (STL)
Smart Pointers (std::shared_ptr)
Functional Programming using std::function

---

How to Compile and Run

Compile the project using g++:

g++ main.cpp -o homeos

Run the program:

./homeos

---

Future Improvements

* Support multiple rooms
* Add sensor based automation
* Implement event driven architecture
* Add device factory for dynamic device creation
* Add configuration files for scenes

---

Author

Mahmoud Abdelrazek
Computer Science Student passionate about system design, software architecture, and problem solving.

---

Profiles

LinkedIn
https://www.linkedin.com/in/YOUR-LINKEDIN

Codeforces
https://codeforces.com/profile/YOUR_USERNAME

LeetCode
https://leetcode.com/YOUR_USERNAME
