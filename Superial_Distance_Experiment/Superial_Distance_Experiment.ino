void setup() {
  // put your setup code here, to run once:
Serial.print(9600);
pinMode(8,OUTPUT);
pinMode(7,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8,LOW);
delayMicroseconds(2);
digitalWrite(8,HIGH);
delayMicroseconds(10);
digitalWrite(8,LOW);

unsigned long t = pulseIn(7,HIGH);
float d = t * 0.034/2;
Serial.println(d);
delay(500);
}
