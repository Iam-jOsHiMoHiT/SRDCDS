# SRDCDS
Smart Rain Detection & Clothes Drying System (SRDCDS)

📌 Overview

The Smart Rain Detection & Clothes Drying System (SRDCDS) is an Arduino-based automation project designed to protect clothes from unexpected rainfall.

The system detects rain using a sensor and automatically moves clothes to a sheltered area using a servo-driven rod mechanism. Once the rain stops, the system reverses the motion and brings the clothes back into sunlight.

This project combines embedded systems, basic IoT concepts, and mechanical actuation to solve a real-world household problem.


---

🎯 Objectives

Automate the process of protecting clothes from rain

Reduce manual intervention

Demonstrate integration of sensors with actuators

Build a practical and scalable smart system



---

⚙️ Components Used

Arduino UNO

Rain Detection Module

Servo Motor

Breadboard

Connecting Wires



---

🔌 Circuit Connections

Power Distribution:

VCC and GND of Arduino, rain sensor, and servo motor connected via breadboard


Signal Connections:

Rain Sensor Digital Output → D2 pin (Arduino)

Servo Motor Signal Pin → D9 pin (Arduino)




---

💡 Working Principle

1. The rain detection module continuously monitors for water droplets


2. When rain is detected:

The sensor outputs a digital HIGH/LOW signal (depending on calibration)

Arduino reads this signal from pin D2



3. Arduino triggers the servo motor connected to pin D9


4. The servo rotates to a predefined angle:

Moves the rod → clothes shift under a shed



5. When rain stops:

Sensor signal changes

Servo rotates back → clothes return to sunlight





---

🔄 System Flow

Monitor environment → Detect rain → Process signal → Actuate servo → Move clothes

Reverse operation when no rain is detected



---

🧠 Key Concepts Involved

Embedded Systems

Sensor Interfacing

PWM Control of Servo Motor

Automation Logic

Basic Mechanical Integration



---

👥 Team Contribution

This project was developed collaboratively by a team of four members, covering:

Circuit design

Arduino programming

Mechanical setup (rod mechanism)

Testing and debugging



---

🚀 Future Scope / Improvements

🌐 IoT Integration:
Connect to cloud platforms (e.g., Blynk, MQTT) for remote monitoring and control

📱 Mobile App Control:
Manual override via smartphone

🌦️ Weather Prediction Integration:
Use APIs to predict rain and act proactively

🔋 Battery Backup System:
Ensure operation during power failures

⚙️ Stronger Actuation System:
Replace servo with DC motor + gearbox for heavier loads

🌞 Sunlight Optimization:
Use light sensors to position clothes for maximum drying efficiency

🧠 Smart Automation:
Add machine learning or rule-based optimization for better decision-making



---

🛠️ Applications

Smart Homes

Automated Laundry Systems

IoT-based Household Solutions

Educational Projects



---

📜 Conclusion

The SRDCDS project demonstrates how simple electronic components can be combined to build an effective automation system. It serves as a strong foundation for more advanced IoT-based smart home solutions.


