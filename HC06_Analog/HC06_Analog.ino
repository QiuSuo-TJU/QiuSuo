int ledPin = 11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  int serialData = Serial.parseInt();
  Serial.print("HC-06 has got the command: "); Serial.print(serialData);
  analogWrite(11, serialData);

}
}
