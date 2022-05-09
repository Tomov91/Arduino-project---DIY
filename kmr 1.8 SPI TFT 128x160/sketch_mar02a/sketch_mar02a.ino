#include<Servo.h>
  Servo Myservo;
  int pos;
  void setup()
  {
    Myservo,attach(8);
    Myservo.write(0);
    delay(2000);
  }
  
  void loop()
  {
    Myservo.write(90);
    delay(1000);
    Myservo.write(0);
    delay(1000);
  }
 
