# Smart Water Usage Monitoring System for Aquariums

## Abstract

Water quality is a crucial parameter in maintaining a healthy aquatic ecosystem, particularly in aquariums where fish and other aquatic creatures rely on a stable environment. The traditional method of checking water parameters is manual, time-consuming, and prone to human error. This research proposes an IoT-based Smart Water Usage Monitoring System for Aquariums to automate water quality management. This study demonstrates how IoT-driven smart monitoring can revolutionize water quality management in aquariums, providing a scalable and efficient solution that contributes to sustainability and improved aquatic health.

The device integrates a number of sensors, including pH, dissolved oxygen (DO), turbidity, temperature, and ultrasonic sensors, to track significant water parameters in real-time. Real-time information is analyzed by an Arduino microcontroller and triggers automatic reactions via LED lights, a buzzer, and a servo motor to realize proactive control of water quality. Moreover, security features such as encryption of data, access control, and firmware upgrade are considered to ensure the system's integrity and reliability. Not only does this IoT-based approach optimize the sustainability of aquarium ecosystems, but also reduces human intervention, making it a viable and innovative technique for fishkeeping hobbyists and aquaculture industries.

## Keywords
modern computing, IoT, aquarium, Arduino, pH, DO (dissolved oxygen), turbidity, microcontroller, encryption, water monitor

## Table of Contents
- [Features](#features)
- [Hardware](#hardware)
- [Software](#software)
- [Installation](#installation)
- [Usage](#usage)
- [License](#license)

## Features
- Real-time water quality monitoring using sensors: pH, dissolved oxygen (DO), turbidity, temperature, and ultrasonic sensors.
- Automated responses using LED lights, buzzer, and servo motor based on sensor data.
- Encryption, access control, and firmware upgrade to secure and ensure the reliability of the system.
- Efficient and scalable solution for sustainable aquarium management.

## Hardware
The system consists of the following hardware components:
- **Arduino microcontroller**: Controls sensors and outputs.
- **pH Sensor**: Measures the pH of the water.
- **Dissolved Oxygen (DO) Sensor**: Measures the amount of dissolved oxygen.
- **Turbidity Sensor**: Measures the clarity of the water.
- **Temperature Sensor**: Measures the temperature of the water.
- **Ultrasonic Sensor**: Measures water level to detect leaks or monitor water height.
- **LED lights**: Display water temperature with color changes.
- **Buzzer**: Alerts when the DO level is too low.
- **Servo motor**: Adjusts the aquarium’s filtration system or other components based on readings.

## Software
- **Arduino IDE**: Used for writing and uploading the code to the Arduino microcontroller.
- **Libraries**: Various libraries are used for sensors and IoT integration.
- **Security protocols**: Implemented encryption and access control to secure the system.

## Installation
1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/smart-water-monitor.git
    ```

2. Install necessary libraries in Arduino IDE:
   - pH Sensor Library
   - DO Sensor Library
   - Turbidity Sensor Library
   - Ultrasonic Sensor Library

3. Connect your hardware components to the Arduino board based on the wiring diagrams provided in the repository.

4. Open the Arduino code (`smart_water_monitor.ino`) in the Arduino IDE and upload it to your Arduino board.

## Usage
Once the system is set up, it will automatically monitor water quality in real-time. The following outputs will be triggered based on the sensor readings:
- **LED lights** will change color based on the temperature.
- **Buzzer** will sound if the dissolved oxygen level is too low.
- **Servo motor** will adjust based on water levels or other specified parameters.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

