#include "McC.h"
void setup() {
  Serial.begin(9600);
  Serial.println("Do you have girlfriend?");
  if(Serial.find("Yes")){
    Serial.println("Go out.");
    }
  if(Serial.find("No")){
    Serial.println("Come on.");
  }
  if (Serial.available()>0 ) {
    int Letter = Serial.read();    
    McC Leo; 
    Leo.displayLetter(Letter);  
  }
}
void loop(){
  
}
