#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

//servo position
int servoPosition= 90;

void setup(){
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
  servo5.attach(10);
}

void loop(){

  for(servoPosition = 90; servoPosition < 180; servoPosition ++){
    servo1.write(servoPosition);
    servo2.write(servoPosition);
    servo3.write(servoPosition);
    servo4.write(servoPosition);
    servo5.write(servoPosition);
    delay(10);
  }
  
  for(servoPosition = 180; servoPosition > 0; servoPosition --){
    servo1.write(servoPosition);
    servo2.write(servoPosition);
    servo3.write(servoPosition);
    servo4.write(servoPosition);
    servo5.write(servoPosition);
    delay(10);
  }
}
