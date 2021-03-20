int h, m, s;
char firstly, secondly, thirdly;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Input the local time: ");
delay(20000);
if(Serial.available()>0){
      firstly = Serial.read();
    switch(firstly){
      case 'h':
      h = Serial.parseInt();
      Serial.print(h);
      Serial.print(":");
      break;
    }
   }
   if(Serial.available()>0){
      secondly = Serial.read();
    switch(secondly){
      case 'm':
      m = Serial.parseInt();
      Serial.print(m);
      Serial.print(":");
      break;
    }
   }
   if(Serial.available()>0){
      char thirdly = Serial.read();
    switch(thirdly){
      case 's':
      s = Serial.parseInt();
      Serial.print(s);
      break;
    }
   }
   Serial.println(" ");
}

void loop() {
  // put your main code here, to run repeatedly:
}
