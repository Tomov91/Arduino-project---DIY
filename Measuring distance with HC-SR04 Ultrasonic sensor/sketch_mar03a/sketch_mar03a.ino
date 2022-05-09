int LedPin = 13;
int TrigPin = 7;
int EchoPin = 8;

int value;
long Time;

void setup() {
  // put your setup code here, to run once:
  pinMode(LedPin,OUTPUT);
  pinMode(TrigPin,OUTPUT); // sending sound
  pinMode(EchoPin,INPUT); // recieving sound
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(TrigPin,LOW); //clears the Pin
  delayMicroseconds(2);
  digitalWrite(TrigPin,HIGH); // sends sound
  delayMicroseconds(10);
  digitalWrite(TrigPin,LOW);
  
  Time = pulseIn(EchoPin,HIGH);

  value = Time * 0.034 / 2; //Speed of sound is 343 m/s

  if(value <= 15) // 15 centimiters
    {
      digitalWrite(LedPin,HIGH);
    }
    else{
      digitalWrite(LedPin,LOW);
    }
}
