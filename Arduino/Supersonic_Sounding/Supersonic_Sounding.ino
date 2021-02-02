void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(9, INPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
digitalWrite(8, LOW);
digitalWrite(11, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(10, HIGH);
delay(10);
digitalWrite(10, LOW);

int i = pulseIn(9, HIGH);
Serial.println(i);
delay(500);

}
