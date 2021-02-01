//利用光敏电阻使光照良好时LED照明系统不必启动;
void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}
void loop() {
  int leoBoredidea = analogRead(A0);
  int brightness = map(leoBoredidea,0,1023,0,255);
  analogWrite(9,brightness);
}
