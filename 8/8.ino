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
int incomingbyte = Serial.parseInt();
  if (incomingbyte == 101)
  {
    digitalWrite(led , HIGH);
  }
  else if (incomingbyte == 201)
  {
    digitalWrite(led , LOW);
  }
}
}