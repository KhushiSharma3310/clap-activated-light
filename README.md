# Clap-Activated Light Control System 👏💡

This project enables turning an LED on or off using the sound of a clap, utilizing a microphone sensor and Arduino. It's an interactive, touchless system ideal for home automation and accessibility.

## 🎯 Objective
Design and implement a clap-based light switch using Arduino and a sound detection sensor.

## 🛠️ Components Required
- Arduino UNO or Nano
- Microphone Sensor Module
- LED or Relay Module
- Jumper wires and breadboard
- USB cable or 9V battery

## 🔌 Circuit Connections
- Microphone OUT → Arduino digital pin 2
- LED/Relay IN → Arduino digital pin 13
- GND and VCC → Arduino GND and 5V

## 💻 Arduino Code
```cpp
int micPin = 2;
int ledPin = 13;
int state = LOW;
int val = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(micPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(micPin);
  if (val == HIGH) {
    state = !state;
    digitalWrite(ledPin, state);
    delay(500); // Debounce
  }
}
