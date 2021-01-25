int ledBrightness[2][5] ={
  {51, 102, 153, 204, 255},
  {255, 204, 153, 102, 51}
};

int led1 = 3;
int led2 = 9;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.print("Hello, Arduino!");
pinMode(9, OUTPUT);
pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0){
  int data = Serial.read();
  switch(data){
    case 1:
    for(int i = 0; i <= 4; i++){
      analogWrite(led1, ledBrightness[0][i]);
      delay(10);
    }
    break;
    case 2:
    for(int i = 0; i <= 4; i++){
      analogWrite(led2, ledBrightness[1][i]);
      delay(10);
    }
    break;
    default: 
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
  }
}
}
