void setup() {
  Serial.begin(9600);
  int pinNumber = 3;
  while (pinNumber <=9){
    pinMode(pinNumber, OUTPUT);
    pinNumber++;
  }
  randomSeed(analogRead(A0));//生成随机种子，用读取的空引脚作随机种子数值;
}
void loop() {
  int myNumber = getRandomNumber(0,10);
  displayNumber(myNumber);
  delay(5000);
  displayClear();
  delay(500);
}
int getRandomNumber(int minNumber, int maxNumber){
  int randomNumber;
  int i;
  while(i<5){
    i++;
    randomNumber = random(minNumber,maxNumber);
    displayNumber(randomNumber);
    delay(100);
    displayClear();
    delay(100);
    Serial.print("i=");
    Serial.println(i);
    Serial.print("randomNumber = ");
    Serial.println(randomNumber);
    Serial.println("");
  }
  return randomNumber;
}
void displayNumber(int ledNumber){
  switch(ledNumber){ //仅举几例
    case 1: //显示1
      digitalWrite(4,HIGH);
      digitalWrite(7,HIGH);
    break;
    case 2: //显示2
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      break;
    default: //显示默认
        digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(7,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
  }
}
void displayClear(){
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
}
