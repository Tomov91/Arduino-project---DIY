  const int temperaturePin = 0;
  float adcValue;
  float voltage;
  float degreesC;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
    adcValue = analogRead(temperaturePin);
    voltage = (adcValue*5)/1023;
    degreesC = 100*voltage - 50;
    Serial.print("ADC Value: ");
    Serial.print(adcValue);
    Serial.print(" voltage: ");
    Serial.print(voltage);
    Serial.print(" deg C: ");
    Serial.println(degreesC);
    delay(1000);
}
