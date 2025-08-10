# Smart Traffic Light with Emergency Vehicle Priority 🚦🚑

An **ESP32-based** intelligent traffic light system that automatically detects emergency vehicle sirens using a sound sensor and switches the traffic light to green for that lane.

---

## 📌 Features
- Normal traffic light cycle (Green → Yellow → Red)
- Detects emergency vehicle siren via sound sensor
- Overrides signal to allow emergency vehicle passage
- OLED display shows system status
- Buzzer alert during emergency mode

---

## 🛠 Components
- ESP32 Dev Board




---

## ⚙ Setup Instructions
1. Install [Arduino IDE](https://www.arduino.cc/en/software) and ESP32 board support.
2. Install the following libraries:
   - Adafruit SSD1306
   - Adafruit GFX
3. Connect components according to the circuit diagram.
4. Upload `SmartTrafficLight.ino` to your ESP32.

---

## 📊 Output Example
![OLED Output](images/oled_output.jpg)

---

## 📜 License
This project is licensed under the MIT License.
