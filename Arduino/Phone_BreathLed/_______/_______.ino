void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int brightness = 0; brightness <= 255; brightness++){
  analogWrite(9, brightness);
  Serial.println(brightness);
  delay(10);
}
for(int brightness = 255; brightness >= 0; brightness--){
  analogWrite(9, brightness);
  Serial.println(brightness);
  delay(10);
}
}
