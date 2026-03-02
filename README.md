# Smart Water Usage Monitoring System in Aquarium

## 📌 Project Overview
This project presents an IoT-based **Smart Water Usage Monitoring System** designed to automate water quality management in aquariums. Maintaining stable water parameters is essential for a healthy aquatic ecosystem, but traditional manual monitoring can be time-consuming and prone to human error.

The system uses an **Arduino-based automation framework** with real-time sensor monitoring to maintain optimal water conditions. It minimizes human intervention while promoting sustainability and responsible resource usage.

---
<img width="737" height="576" alt="image" src="https://github.com/user-attachments/assets/e77da7d4-4984-4970-b962-9df7556a46a0" />


## 🚀 Key Features

- **Real-time Monitoring**
  - pH Level
  - Dissolved Oxygen (DO)
  - Turbidity
  - Temperature
  - Water Level

- **Automated Responses**
  - Servo motor controls water flow
  - Buzzer alerts for unsafe conditions
  - LED indicators:
    - 🔴 Red LED – Unsafe conditions
    - 🟢 Green LED – Safe conditions

- **Visual Feedback**
  - 16x2 LCD (I2C) displays live sensor data

- **Sustainable Design**
  - Supports:
    - SDG Goal 6 – Clean Water and Sanitation
    - SDG Goal 12 – Responsible Consumption and Production
  - Optimizes water usage and reduces waste

- **Security Integration**
  - Data encryption considerations
  - Access control mechanisms
  - Firmware upgrade capability

---

## ⚙️ System Logic and Thresholds

The system uses an **Arduino UNO** as the central controller. It processes sensor data and triggers actions based on predefined environmental thresholds:

| Parameter | Safe Range / Condition | Action Trigger |
|-----------|-----------------------|----------------|
| pH Level | 6.5 – 8.5 | Alert if outside range |
| Dissolved Oxygen (DO) | ≥ 5 ppm | Alert if below 5 ppm |
| Temperature | 72°F – 82°F | Alert if outside range |
| Turbidity | ≤ 600 NTU | Alert if above 600 NTU |
| Water Level | ≥ 100 cm | Servo opens gate if below 100 cm |

The system uses **binary logic gates (AND, OR, NOT)** to make automated decisions.

---

## 🛠 Hardware Components

### 🔹 Microcontroller
- Arduino Uno R3

### 🔹 Sensors
- Ultrasonic Distance Sensor (HC-SR04)
- Temperature Sensor (DS18B20 or equivalent)
- LDR / Photoresistor (simulated Turbidity sensor)
- Potentiometers (simulated pH and Dissolved Oxygen sensors)

### 🔹 Output Devices
- 16x2 LCD Display (I2C)
- Micro Servo Motor
- Piezo Buzzer
- Red and Green LEDs

---

## 🖥 Simulation and Implementation

- Designed and simulated using **TinkerCAD**
- Programmed in **C++** using the Arduino IDE
- Implements threshold-based logic control
- Uses structured conditional statements and logical operators for decision-making

---

## 🔮 Future Improvements

- 🤖 Integration of Artificial Intelligence (AI) for predictive water quality analysis
- 📱 Development of mobile and cloud-based remote monitoring applications
- ☀️ Solar-powered system integration for improved energy efficiency
- 💧 Automated water filtration and refilling mechanisms

---

## 📈 Impact

This system enhances:
- Aquarium ecosystem stability  
- Water conservation efficiency  
- Automation reliability  
- Sustainable resource management  

---


---
