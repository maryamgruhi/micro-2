const int led = 9;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() > 0)
{
  char incomingbyte = Serial.read();
  if (incomingbyte == 'H' or incomingbyte == 'h')
  {
    digitalWrite(led , HIGH);
  }
  else if (incomingbyte == 'L' or incvomingbyte == 'l')
  {
    digitalWrite(led , LOW);
  }
}
}