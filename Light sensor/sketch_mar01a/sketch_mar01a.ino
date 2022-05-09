  int photocellPin = 0;
  int ledPin = 2;
  int photocellReading;
  const float limit = 100;
void setup(void)
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
void loop(void)
{
  photocellReading = analogRead(photocellPin);
  Serial.print("Analog reading = ");
  Serial.println(photocellReading);
  if (photocellReading < limit)
  {
    digitalWrite(ledPin, HIGH);
  }
  else
  {
    digitalWrite(ledPin, LOW);
  }
    delay(1000);
}
