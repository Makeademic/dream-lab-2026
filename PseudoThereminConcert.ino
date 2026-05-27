/*
Adapted from Adafruit Arduino - Lesson 10. Pseudo Thermin
*/
 
int piezo = 5;
int photocell = A6;
 
void setup()
{
  pinMode(piezo, OUTPUT);
  pinMode(photocell, INPUT);
  Serial.begin(9600);
}
 
void loop()
{
int lightInput = analogRead(photocell);
int frequency = 360 + lightInput / 3;
tone(piezo, frequency);
Serial.println(frequency);
}