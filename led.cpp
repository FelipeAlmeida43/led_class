#include "LED.h" // Include the header file

// Constructor: Initializes the LED pin
LED::LED(uint8_t pinNumber) : pin(pinNumber), ledstate(false) {
    pinMode(pin, OUTPUT);    // Set pin as output
    digitalWrite(pin, LOW);  // Ensure LED starts off
}

// Turn the LED on
void LED::on() {
    digitalWrite(pin, HIGH);
    ledstate = true;
}

// Turn the LED off
void LED::off() {
    digitalWrite(pin, LOW);
    ledstate = false;
}

// Toggle the LED state
void LED::toggle() {
    ledstate = !ledstate;
    digitalWrite(pin, ledstate ? HIGH : LOW);
}

// Get the current state of the LED
bool LED::state() const {
    return ledstate;
}
