# 3Buttons-3LEDs

## Project Description
This Arduino project demonstrates fundamental digital input/output control using three push buttons and three LEDs. Each button is mapped to a corresponding LED: pressing the button turns the LED on, releasing it turns the LED off. The system uses straightforward digitalRead and digitalWrite functions to monitor button states and drive the LEDs accordingly.

This project is perfect for:
- Beginners learning about microcontroller hardware interfacing.
- Prototyping control panels, indicator systems, or simple interactive devices.
- Building a foundation for more advanced input/output projects with Arduino.

Key features:
- Clean, efficient code optimized for readability and educational use.
- Flexible pin configuration for adapting to various Arduino boards.
- Simple circuit and schematic, suitable for breadboard or PCB implementation.

---

## Features
✅ One-to-one control mapping: each button controls one LED.  
✅ Scalable and easy to modify for additional components.  
✅ Ideal hands-on practice for understanding basic digital electronics.

---

## Circuit Diagram
![image](https://github.com/user-attachments/assets/a531fb3f-1f3f-4b8a-bc1d-b6ee3d25ed8c)

---

## Schematic
![image](https://github.com/user-attachments/assets/572eba4b-edf1-40ed-b821-699892aecbf9)

---

## Code C++

int buttonState = 0;
int b1 = 2;
int b2 = 3;
int b3 = 4;

int BLED = 10;
int YLED = 11;
int RLED = 12;

void setup()
{
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
          
  pinMode(BLED, OUTPUT);
  pinMode(YLED, OUTPUT);
  pinMode(RLED, OUTPUT);
}

void loop()
{
  if (digitalRead(b1) == HIGH){
    digitalWrite(BLED, HIGH);
  } else {
    digitalWrite(BLED, LOW);
  }
  
  if (digitalRead(b2) == HIGH){
    digitalWrite(YLED, HIGH);
  } else {
    digitalWrite(YLED, LOW);
  }
  
  if (digitalRead(b3) == HIGH){
    digitalWrite(RLED, HIGH);
  } else {
    digitalWrite(RLED, LOW);
  }
}

How to Use

    Connect each push button to 5V and its designated pin, with a pull-down resistor to ground.

    Connect each LED (with a current-limiting resistor, typically 220Ω) to its specified pin and ground.

    Upload the provided code to your Arduino board.

    Press each button to illuminate the corresponding LED.

Components

    Arduino board (Uno, Nano, etc.)

    3 push buttons

    3 LEDs (blue, yellow, red)

    3 current-limiting resistors for LEDs (220Ω recommended)

    3 pull-down resistors for buttons (10kΩ recommended)

    Jumper wires and breadboard

Notes

    If using INPUT_PULLUP in pinMode(), wire buttons to ground instead of 5V and update the loop() logic to detect LOW when pressed.

    Always use current-limiting resistors with LEDs to prevent damage.

    This basic setup can be expanded with additional buttons, LEDs, or logic to handle more complex interaction.

License

This project is released under the MIT License. You are free to use, modify, and distribute it as you like.
