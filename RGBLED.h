#ifndef RGBLED_H
#define RGBLED_H

#include <Arduino.h>

class RGBLED {
private:
    uint8_t redPin;   // GPIO pin for Red channel
    uint8_t greenPin; // GPIO pin for Green channel
    uint8_t bluePin;  // GPIO pin for Blue channel

public:
    // Constructor
    RGBLED(uint8_t redPin, uint8_t greenPin, uint8_t bluePin);

    // Set the color using RGB values (0-255)
    void setColor(uint8_t redValue, uint8_t greenValue, uint8_t blueValue);

    // Turn off the RGB LED
    void off();
};

#endif
