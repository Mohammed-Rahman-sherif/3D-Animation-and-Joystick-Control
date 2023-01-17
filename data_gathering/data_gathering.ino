int value1 = 0;
int value2 = 0;
int joypin1 = A0;
int joypin2 = A1;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
value1 = analogRead(joypin1);
//delay(100);
value2 = analogRead(joypin2);
Serial.println(value1);
Serial.println(value2);
Serial.println('         ');

delay(1000);
}
