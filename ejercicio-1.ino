//constantes
const int ledpin1 = 8;
const int ledpin2 = 9;
const int ledpin3 = 10;
const int T = 100;

//funciones
void setup() {
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);

}

void loop() {
  digitalWrite(ledpin1, HIGH);
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin3, LOW);
  delay(T);
  digitalWrite(ledpin2, HIGH);
  digitalWrite(ledpin3, LOW);
  digitalWrite(ledpin1, LOW);
  delay(T);
  digitalWrite(ledpin3, HIGH);
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin1, LOW);
  delay(T);

}
