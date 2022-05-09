//LED blinker
  int red =8;
  int pedestrianStopButton =12;
  int yellow = 9;
  int green = 10;
  void setup() {
  pinMode(red, OUTPUT); //initialise the digital pin as output
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(pedestrianStopButton, INPUT);

}
void loop() {

      lighControl();
      delay(2000);
  
  if (digitalRead(pedestrianStopButton) == HIGH){
      delay(15); // software debounce
        if (digitalRead(pedestrianStopButton) == HIGH) {
            // if the switch is HIGH, ie. pushed down - change the lights!
            //changeLights();
           // delay(15000); // wait for 15 seconds
       digitalWrite(red,HIGH); //Turn red light on, for pedestrians to pass
       digitalWrite(yellow,LOW);
       digitalWrite(green,LOW);
       delay(5000);
      }
  }
}

void lighControl(){
       digitalWrite(red,HIGH);
       digitalWrite(yellow,LOW);
       digitalWrite(green,LOW);
       delay(1000);

       digitalWrite(yellow,HIGH);
       digitalWrite(red,LOW);
       digitalWrite(green,LOW);
       delay(500);

       digitalWrite(green,HIGH);
       digitalWrite(red,LOW);
       digitalWrite(yellow,LOW);
       delay(300);
    
  }
