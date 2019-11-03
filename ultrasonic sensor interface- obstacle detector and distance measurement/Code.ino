//Programming of Arduino Uno for Obstacle Detector And Distance Measuring Device.
const int trig = 2;
const int echo = 1;
long duration;
int distance;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
    
  duration= pulseIn(echo, HIGH);
  distance= duration*0.034/2;
  
  Serial.print("Distance: ");
  Serial.println(distance);
}
//Name - Akhilesh Sharma
//UID - 19BCS3555
