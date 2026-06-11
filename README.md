# CodeAlpha IoT Task 2 - Temperature Sensor with LED

## Objective
To monitor temperature using a TMP36 temperature sensor and control LEDs based on the measured temperature.

## Components Used
- Arduino Uno
- TMP36 Temperature Sensor
- Red LED
- Green LED
- Resistors
- Breadboard
- Jumper Wires

## Software Used
- Tinkercad
- Arduino IDE

## Circuit Connections
- TMP36 Output → A0
- Red LED → Digital Pin 2
- Green LED → Digital Pin 3

## Working Principle
The TMP36 sensor measures temperature and sends an analog voltage to the Arduino.

- If temperature is greater than 30°C:
  - Red LED turns ON
  - Green LED turns OFF

- If temperature is 30°C or below:
  - Green LED turns ON
  - Red LED turns OFF

The temperature value is also displayed in the Serial Monitor.

## Arduino Code Features
- Reads analog temperature sensor values
- Converts voltage to temperature in Celsius
- Controls LEDs based on threshold temperature
- Displays real-time temperature readings

## Results
The system successfully indicates high and normal temperature conditions using LEDs.

## Author
Malini Karnan
