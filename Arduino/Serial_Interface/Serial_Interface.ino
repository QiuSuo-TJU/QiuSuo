void setup() {
  Serial.begin(9600);
  Serial.println("Please input serial data");
}

void loop() {
  if(Serial.available()>0){
    char serialData = Serial.read();
    Serial.println(serialData);
  }
}
