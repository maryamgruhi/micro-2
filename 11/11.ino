void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(float t = 0 ; t < 360 ; t++)
{
  float radian = (sin(t * PI / 180));
  Serial.print(radian);
  delay(1);
  Serial.print("     ");

  float radian2 = (cos(t*PI/180));
  Serial.print(radian2);
  delay(1);
}
}