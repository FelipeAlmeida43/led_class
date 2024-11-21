#include "RGBLED.h"

// Constructor: Initialize the RGB LED pins
RGBLED::RGBLED(uint8_t rPin, uint8_t gPin, uint8_t bPin)
    : redPin(rPin), greenPin(gPin), bluePin(bPin) {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);

    // Start with the LED off
    off();
}

// Set the color using RGB values (0-255)
void RGBLED::setColor(uint8_t redValue, uint8_t greenValue, uint8_t blueValue) {
        
    analogWrite(redPin, redValue);   // Set Red channel brightness
    analogWrite(greenPin, greenValue); // Set Green channel brightness
    analogWrite(bluePin, blueValue); // Set Blue channel brightness
    
}

// Turn off the RGB LED
void RGBLED::off() {
    analogWrite(redPin, 0);   // Set Red channel brightness
    analogWrite(greenPin, 0); // Set Green channel brightness
    analogWrite(bluePin, 0); // Set Blue channel brightness
}
