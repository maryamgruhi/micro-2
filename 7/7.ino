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
  String incomingbyte = Serial.readStringUntil('\n');
    if (incomingbyte == 'on')
  {
    digitalWrite(led , HIGH);
  }
  else if (incomingbyte == 'off')
  {
    digitalWrite(led , LOW);
  }
}
}