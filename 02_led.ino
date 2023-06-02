// 01_leda2_delay
const int ledpin1=10;
const int ledpin2=9;
const int ledpin3=11;
const int ledpin4=4;
const int ledpin5=5;

const int tiempo=50;//milisegundos

void setup() {
  pinMode(ledpin1,OUTPUT);
  pinMode(ledpin2,OUTPUT);
  pinMode(ledpin3,OUTPUT);
}
void loop() {
  digitalWrite(ledpin1,HIGH);
  digitalWrite(ledpin2,HIGH);
   digitalWrite(ledpin3,HIGH);
  delay(tiempo);
   digitalWrite(ledpin1,LOW);
  digitalWrite(ledpin2,LOW);
   digitalWrite(ledpin3,LOW);
   delay(tiempo);
}