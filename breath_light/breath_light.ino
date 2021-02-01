void setup() {
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  for(int brightness = 30; brightness <=254; brightness+=2){//亮度由30递增到244
    analogWrite(9,brightness);
    Serial.begin(brightness);
    delay(15);
  }
  for(int brightness = 254; brightness >= 30;brightness+=2){//亮度由244递减至30
    analogWrite(9, brightness);
    Serial.begin(brightness);
    delay(15);
  }
}
