# 🚗 Vehicle Monitoring System (GPS + GSM + Gas & Obstacle Detection)

A **real-time vehicle monitoring and safety system** using **GPS**, **GSM**, **Gas Sensor**, and **Ultrasonic Sensor** to ensure **driver safety**, **location tracking**, **accident detection**, and **emergency alerts**.  
This system detects accidents, gas leaks, and obstacles around the vehicle and sends **instant SMS alerts** to registered mobile numbers along with the **vehicle’s real-time location**.

---

## 📝 Problem Statement

Road accidents and vehicle-related emergencies are among the leading causes of fatalities worldwide. In many cases, the delay in receiving help is due to the **lack of a real-time alert mechanism**.  
Traditional vehicle tracking systems only provide **location data** but fail to address **accidents, gas leaks, and obstacle detection** in real-time.

This project aims to **bridge this gap** by creating a **low-cost, efficient, and reliable solution** that:
- Continuously monitors vehicle status.
- Detects possible collisions, gas leakage, or obstacles.
- Instantly sends **SMS alerts with GPS location** to predefined emergency contacts.
- Ensures **driver and passenger safety** while enabling **remote monitoring**.

---

## 📌 Features

### 📍 GPS Tracking
- Real-time vehicle location tracking.
- Sends **latitude & longitude** to the registered mobile number via **SMS**.

### 📡 GSM Alerts
- Automatic SMS alerts sent to **emergency contacts**.
- Alerts triggered during **accidents**, **gas leaks**, or **obstacle detection**.

### 🛑 Gas & Obstacle Detection
- **Gas Sensor (MQ series):** Detects harmful gases inside the vehicle.
- **Ultrasonic Sensor:** Detects nearby obstacles and prevents collisions.

### 🚨 Accident Detection
- Uses an **accelerometer** to detect collisions or sudden impacts.
- Sends **instant accident alerts** along with **location details**.

---

## 🛠 Tech Stack

### 🔹 **Hardware Components**
| Component | Purpose |
|----------|-------------------------------------------|
| **Arduino UNO / ESP32** | Main microcontroller for processing sensor data |
| **GPS Module (NEO-6M / L89)** | Provides real-time latitude & longitude |
| **GSM Module (SIM800L / SIM900A)** | Sends SMS alerts to registered contacts |
| **MQ Gas Sensor** | Detects hazardous gases like LPG, CO, and methane |
| **Ultrasonic Sensor (HC-SR04)** | Measures distance & detects nearby obstacles |
| **Accelerometer (ADXL335 / MPU6050)** | Accident detection based on sudden impacts |
| **Buzzer & LEDs** | Audio-visual alerts for driver warnings |
| **Battery Pack** | Portable power supply for the entire system |

---

### 🔹 **Software & Tools**
| Tool / Platform | Usage |
|-----------------|-----------------------------|
| **Arduino IDE** | Writing, compiling & uploading embedded code |
| **C / C++** | Core programming language for microcontroller logic |
| **MySQL (Optional)** | For storing vehicle data if extended to a web-based system |
| **Fritzing / Proteus** | Circuit simulation & hardware testing |

---

## ⚙️ How It Works

1. **GPS Module** continuously tracks the vehicle’s location.
2. **GSM Module** sends SMS alerts to the registered number.
3. **MQ Gas Sensor** detects hazardous gases inside the vehicle.
4. **Ultrasonic Sensor** detects nearby obstacles and warns the driver.
5. **Accelerometer Sensor** monitors sudden impacts or collisions.
6. If an **accident, gas leak, or obstacle** is detected:
   - The system **activates a buzzer & LED** alert.
   - An **SMS alert** is sent to emergency contacts with the **vehicle’s live location**.

---

## 🎯 Future Enhancements
- Integrate with a **mobile app** for real-time vehicle tracking.
- Store vehicle data on a **cloud database** for historical analytics.
- Add **voice call alerts** during severe accidents.
- Use **LoRaWAN** or **NB-IoT** for low-power, long-range connectivity.

