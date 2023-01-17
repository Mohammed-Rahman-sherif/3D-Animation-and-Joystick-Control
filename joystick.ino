int led = 3;
int joypin1 = A0;
int joypin2 = A1;
int value1 = 0;
int value2 = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
Serial.begin(9600);
}
//int treatValue(int data) {
  //return (data * 9 / 1024) + 48;
 //}
void loop() {
  // put your main code here, to run repeatedly:
value1 = analogRead(joypin1);
//delay(100);
value2 = analogRead(joypin2);
//delay(100);
digitalWrite(led, HIGH);
delay(value1);
Serial.print('G');
digitalWrite(led, LOW);
delay(value2);
Serial.print('J');
  //Serial.print(treatValue(value1));
  //Serial.println(treatValue(value2));
}
