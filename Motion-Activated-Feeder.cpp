#include <Servo.h>

// Pin definitions
const int pirSensorPin = 2;  // PIR sensor connected to pin 2
const int servoPin = 9;      // Servo motor connected to pin 9

Servo feederServo;           // Create a Servo object to control the feeder

// Timing parameters (in milliseconds)
const int feedDelay = 1000;   // Delay time for the servo to release the pellet (in milliseconds)
const int resetDelay = 500;   // Time to wait before checking for the next poke (in milliseconds)

void setup() {
  // Initialize the PIR sensor pin as input
  pinMode(pirSensorPin, INPUT);

  // Attach the servo motor to the servoPin
  feederServo.attach(servoPin);

  // Initially set the servo to a closed position (0 degrees)
  feederServo.write(0);
  delay(500); // Wait to ensure servo reaches the starting position
}

void loop() {
  // Read the PIR sensor input (detecting motion)
  int motionDetected = digitalRead(pirSensorPin);

  // If motion is detected by the PIR sensor (e.g., nose poke by the mouse)
  if (motionDetected == HIGH) {
    Serial.println("Motion detected, releasing pellet.");

    // Open the feeder by moving the servo to 90 degrees to release the pellet
    feederServo.write(90);  
    delay(feedDelay);        // Wait for the pellet to be released

    // Close the feeder by moving the servo back to 0 degrees
    feederServo.write(0);   
    delay(resetDelay);       // Wait a bit before checking for the next motion
  }
  else {
    // If no motion is detected, ensure the feeder is closed
    feederServo.write(0);  // Keep the feeder closed
  }
}
