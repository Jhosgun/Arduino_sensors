# Arduino_sensors

This reposirtoy is made fro a final project of a subject "instrumentación electronica".

---

## Features
- Measures **temperature** and **humidity** using the DHT11 sensor.
- Reads **light intensity** using an analog photosensor.
- Outputs the data in **CSV format** to the Serial Monitor for easy logging.
- Simple and customizable code for other sensors or data formats.

---

## Hardware Required
- Arduino Uno (or compatible board, e.g., Elegoo Uno)
- DHT11 Temperature and Humidity Sensor
- Photosensor (e.g., LDR with a resistor)
- Connecting wires
- Breadboard

---

## Circuit Diagram

### DHT11 Connections
| DHT11 Pin  | Arduino Pin |
|------------|-------------|
| VCC        | 5V          |
| GND        | GND         |
| Data       | Pin 8       |

### Photosensor Connections
| Photosensor Pin | Arduino Pin |
|-----------------|-------------|
| VCC             | 5V          |
| GND             | GND         |
| Signal (OUT)    | A0          |

For the photosensor, if you're using an LDR, connect it in a voltage divider configuration with a **10kΩ resistor**.

---

## Software Requirements
- Arduino IDE (download from [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software))
- **DHT Sensor Library** by Adafruit:
  1. Open the Arduino IDE.
  2. Go to **Sketch > Include Library > Manage Libraries**.
  3. Search for "DHT sensor library" and install it.
  4. Also, install the **Adafruit Unified Sensor** library.

---
