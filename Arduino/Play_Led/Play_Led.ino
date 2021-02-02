int led1 = 3;
int led2 = 9;
int situation = 7;
bool buttomPress;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.print("Welcome to Arduino!");
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(situation, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
if (!buttomPress){
  for (int brightness1 = 0; brightness1 <= 255; brightness1++){
  analogWrite(led1, brightness1);
  delay(10);
  Serial.print(brightness1);
  }
  digitalWrite(led1, LOW);
  
  for (int brightness2 = 255; brightness2 >= 0; brightness2--){
    analogWrite(led2, brightness2);
    delay(10);
    Serial.print(brightness2);
  }
  
}
}
