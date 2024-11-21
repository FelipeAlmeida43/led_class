#ifndef LED_H
#define LED_H

#include <Arduino.h> // Necessary to use Arduino functions like pinMode, digitalWrite

class LED {
private:
    uint8_t pin;       // Pin where the LED is connected
    bool ledstate;        // Current state of the LED (true = ON, false = OFF)

public:
    // Constructor: initializes the LED pin
    LED(uint8_t pinNumber);

    // Turn the LED on
    void on();

    // Turn the LED off
    void off();

    // Toggle the LED state
    void toggle();

    // Get the current state of the LED
    bool state() const;
};

#endif
