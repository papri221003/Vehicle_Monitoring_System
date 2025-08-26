# 🚗 Vehicle Monitoring System (GPS + GSM + Gas & Obstacle Detection)

A real-time **vehicle monitoring and safety system** using **GPS**, **GSM**, **Gas Sensor**, and **Ultrasonic Sensor** for location tracking, accident detection, and safety alerts.

---

## 📌 Features

### 📍 GPS Tracking
- Real-time vehicle location tracking
- Sends latitude & longitude to user via SMS

### 📡 GSM Alerts
- Automatic SMS alerts sent to a registered mobile number
- Alerts in case of accident detection, gas leakage, or obstacle detection

### 🛑 Gas & Obstacle Detection
- **Gas Sensor (MQ series)** detects harmful gases inside the vehicle
- **Ultrasonic Sensor** detects obstacles within a defined range

### 🚨 Accident Detection
- Detects vehicle collisions using an accelerometer sensor
- Sends alert with location details to emergency contacts

---

## 🛠 Tech Stack

| Hardware Components | Software Tools                      |
|-------------------- |-----------------------------------  |
| Arduino/ESP32       | Arduino IDE                         |
| GPS Module(L89)     | C/C++                               |
| GSM Module (SIM800L)| MySQL (optional for cloud storage)  |
| MQ Gas Sensor       | ThingSpeak / Blynk (optional IoT)   |
| Ultrasonic Sensor   |                                     |
| Accelerometer       |                                     |

---

