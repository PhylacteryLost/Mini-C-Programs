#include <Servo.h>
Servo servo;
void setup() 
{
  servo.attach(9);  // Pin servo is plugged into. 
}

// Repeatedly move servo from limit to limit.
void loop() 
{
  servo.write(0);   // Put servo to 0 (0-180)
  delay(2000);      // Wait 2 seconds.
  servo.write(180); // Put servo to 180 (0-180)
}