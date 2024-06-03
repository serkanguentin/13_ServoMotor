#include  <Servo.h>

Servo myServo;    // Creating Servo object

void setup() {
  myServo.attach(3);    // Connecting to servo signal pin 9
 
       
     
}

void loop() {


  for (int pos = 0; pos <= 180; pos += 20) {  // Loop to turn on the servo
    myServo.write(pos);               // Move the servo motor to the specified position
    delay(1000);                       // Waiting time after movement
   }
   }