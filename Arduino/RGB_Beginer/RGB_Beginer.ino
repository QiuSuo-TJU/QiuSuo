int ledr = 2;
int ledg = 3;
int ledb = 9;

int ledR;
int ledG;
int ledB;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Hello, please input you command!");
pinMode(ledr, OUTPUT);
pinMode(ledg, OUTPUT);
pinMode(ledb, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() > 0){
 char serialChar = Serial.read();
 SerialCommand(serialChar); 
 analogWrite(ledr, ledR);
 analogWrite(ledg, ledG);
 analogWrite(ledb, ledB);
}
}

void SerialCommand(char SerialName){
  switch(SerialName){
  case 'r':
  ledR = Serial.parseInt();
  break;
  
  case 'g':
  ledG = Serial.parseInt();
  break;
   
  case 'b':
  ledB = Serial.parseInt();
  break;

  case 'c':
  ledR = 0;
  ledG = 0;
  ledB = 0;
  }
}
