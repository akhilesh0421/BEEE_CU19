void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  int i;
  for(i=3;i<=7;i++)
  {
    if(i==5)
      continue;
    digitalWrite(i, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(i, LOW);
    delay(500); // Wait for 1000 millisecond(s)
  }
}
