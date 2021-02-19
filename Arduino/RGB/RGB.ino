int i;
String inString = "";
char LED = ' ';
bool stringComplete = false;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(stringComplete){
    Serial.println(LED);
    if(LED=='R'){
      analogWrite(9,i);
    }
    else if(LED=='G'){
      analogWrite(10,i);
    }
    else if(LED=='B'){
      analogWrite(11,i);
    }
      stringComplete = false;
      inString = " ";
      LED = ' ';
  }
}

void serialEvent(){
  while(Serial.available()){
    char inchar = Serial.read();
    if (isDigit(inchar)){
      inString += inchar;
    }
    else if(inchar == '\n'){
      stringComplete = true;
      i = inString.toInt();
    }
    else LED = inchar;
    
  }
}
