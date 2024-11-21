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
    /*
    digitalWrite(redPin,redValue);
    digitalWrite(greenPin,greenValue);
    digitalWrite(bluePin,blueValue);
    */
    
    analogWrite(redPin, redValue);   // Set Red channel brightness
    analogWrite(greenPin, greenValue); // Set Green channel brightness
    analogWrite(bluePin, blueValue); // Set Blue channel brightness
    
}

// Turn off the RGB LED
void RGBLED::off() {
    digitalWrite(redPin, 0);
    digitalWrite(greenPin, 0);
    digitalWrite(bluePin, 0);
}
