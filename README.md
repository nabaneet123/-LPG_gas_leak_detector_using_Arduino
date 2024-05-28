# LPG Gas Leakage Detector using Arduino

## Introduction
The LPG Gas Leakage Detector is a safety device designed to detect the presence of LPG gas in the environment, alerting users to potential gas leaks and preventing accidents. This project utilizes an Arduino microcontroller and an MQ2 gas sensor to monitor LPG gas concentrations and trigger an alarm when gas levels exceed a predefined threshold.

## Components
- Arduino Uno or compatible microcontroller board
- MQ2 Gas Sensor
- Buzzer or LED for alarm indication
- Resistors, wires, and breadboard for circuit connections

## How MQ2 Sensor Works
The MQ2 gas sensor detects various gases, including LPG, propane, methane, alcohol, and smoke. It contains a tin dioxide (SnO2) semiconductor layer. When exposed to LPG gas, the tin dioxide undergoes a chemical reaction, resulting in a change in its electrical conductivity. This change in conductivity is measured by the sensor's circuitry, which triggers an alarm when gas levels exceed a certain threshold.

## Working of the Circuit
1. The MQ2 sensor is connected to the Arduino board along with the buzzer or LED for alarm indication.
2. The sensor continuously monitors the surrounding air for LPG gas concentrations.
3. When the sensor detects LPG gas above the predefined threshold, it triggers the alarm, alerting users to potential gas leaks.
4. The Arduino microcontroller processes the sensor data and controls the alarm output based on the gas concentration levels.

## Conclusion
The LPG Gas Leakage Detector provides a reliable and cost-effective solution for detecting gas leaks in homes, industrial facilities, and commercial kitchens. By promptly alerting users to the presence of LPG gas, it helps prevent accidents and ensures the safety of individuals and properties.
