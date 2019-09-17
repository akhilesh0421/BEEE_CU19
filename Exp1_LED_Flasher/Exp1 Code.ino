void setup()
{
  pinMode(7, OUTPUT);//Pin number 7 is conneted to LED and it is used for output purpose.
}

void loop()
{
  digitalWrite(7, HIGH);//High is used to supply voltage.
  delay(1000); // Wait for 1000 millisecond(s); 1 millisecond = 0.001 second(s)
  digitalWrite(7, LOW);//Low is used to stop voltage supply.
  delay(1000); // Wait for 1000 millisecond(s)
}
