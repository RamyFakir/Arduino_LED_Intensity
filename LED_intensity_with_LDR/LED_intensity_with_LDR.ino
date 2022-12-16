
int LED=11;
int LDR=A0;
int intensity=0;

void setup()
{
  pinMode(LED, OUTPUT);
  
}

void loop()
{
  intensity=analogRead(LDR);
  intensity = map(intensity, 0, 1023, 0, 255);
  analogWrite(LED, intensity);
   
}
