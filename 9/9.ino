float num1 , num2;
char x;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available() > 0)
{
  num1 = Serial.parseFloat();
  x = Serial.read();
  num2 = Serial.parseFloat();
  switch(x)
  {
    case '+' : Serial.println(num1 + num2); break;
    case '-' : Serial.println(num1 - num2); break;
    case '*' : Serial.println(num1 * num2); break;    
    case '/' :
      if (num2 == 0)
      {
        Serial.println("ERROR");
      }
      else (Serial.println(num1 / num2)); break;
  }
}
}