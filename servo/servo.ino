
 
#include <Servo.h>
 
int servoPin = 6;
int i=0; 
Servo servo;  
 
int servoAngle = 0;   // servo position in degrees
 
void setup()
{
  Serial.begin(9600);  
  servo.attach(servoPin);
}
 
 
void loop()
{
//control the servo's direction and the position of the motor
 
  // servo.write(10);      // Turn SG90 servo Left to 50 degrees
  // delay(2000);
   
  // servo.write(90);      // Turn SG90 servo Left to 50 degrees
   //delay(2000);
 // Wait 1 second
  for (i=100;i>10;i--){

    servo.write(i);
    delay(50);
  }
  for (i=10;i<100;i++){

    servo.write(i);
    delay(50);
  }
 

}
