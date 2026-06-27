# Ultrasound-Triggered LED — Arduino Project

## Purpose
This project is a beginner-friendly introduction to working with sensors and microcontrollers using Arduino. It uses an HC-SR04 ultrasonic distance sensor to detect how close an object is, and lights up an LED based on that distance.

The goal isn't just to build a single fixed circuit , this is meant to be an **evolving, open-source learning project**. It started as the simplest possible version (sensor + LED) and is intended to grow over time with new features, better code, and ideas from anyone who wants to contribute. Think of it as a sandbox for learning embedded systems development from zero, with room to scale into something bigger later (data logging, displays, wireless versions, etc.).

## How It Works
The HC-SR04 sensor sends out an ultrasonic pulse and measures how long it takes to bounce back off the nearest object. The Arduino converts that time into a distance (in cm). Based on that distance, the Arduino turns the LED on or off (or could later trigger a buzzer, display, etc.).

## Hardware Used
| Component | Quantity |
|---|---|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| LED | 1 |
| Resistor (for LED) | 1 |
| Breadboard | 1 |
| Jumper wires | several |

## Wiring / Pin Connections

| Component Pin | Arduino Pin |
|---|---|
| HC-SR04 VCC | 5V |
| HC-SR04 GND | GND |
| HC-SR04 Trig | Digital Pin 9 |
| HC-SR04 Echo | Digital Pin 8 |
| LED (+) via resistor | Digital Pin 12 |
| LED (–) | GND |

**Wiring diagram:**
See `hardware/wiring_diagram.png` the HC-SR04 sits at the top, connected via Trig (yellow) and Echo (orange) wires to the Arduino, with power (red) and ground (dark blue) also wired in. The LED sits on the breadboard, connected to pin 12 with its cathode tied to GND.

## Code Overview
The sketch lives at:
```
src/usled/usled.ino
```

Basic logic:
1. Send a short pulse on the Trig pin
2. Measure the pulse duration returned on the Echo pin
3. Convert that duration into distance (cm)
4. If distance is below a set threshold, turn the LED on; otherwise, turn it off

## Project Status
This is an actively evolving learning project. Current version: **v1.0 — basic sensor + LED**

### Planned / possible next steps
- [ ] Add a buzzer for audible distance alerts
- [ ] Add an OLED/LCD display to show live distance readings
- [ ] Log distance data over Serial to a computer
- [ ] Add multiple LEDs for distance "zones" (e.g. green/yellow/red)
- [ ] Port to ESP32 for WiFi-based monitoring
- [ ] Build a simple enclosure / 3D-printed case

## Contributing
This project welcomes contributions of any size — from fixing typos in documentation to adding entirely new features. Check the **Issues** tab for ideas, or open a new one if you have your own.

## License
No license chosen yet
