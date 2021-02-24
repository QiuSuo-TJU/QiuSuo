#include <Arduino.h>

//传感器触碰到后，会变成高电平

void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = digitalRead(7);
  if(i==1){
    digitalWrite(8,HIGH);
  }
  else{
    digitalWrite(8,LOW);
  }
}