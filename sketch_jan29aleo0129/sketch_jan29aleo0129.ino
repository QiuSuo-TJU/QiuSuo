void setup() {
  int pinNumber = 3;
  while(pinNumber <= 9){
    pinMode(pinNumber, OUTPUT);
    pinNumber = pinNumber + 1;
  }//引脚输出
}


void loop() {
   int myNumber = random(0,4);
   switch(myNumber){
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
      case 3: //显示3
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(7,HIGH);
        digitalWrite(8,HIGH);
        break;
      default:
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
   }
   delay(500);
   
   //清理显示内容
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);

   delay(500);
}
