#include <IRremote.h>
IRsend Send;

void setup() {
  // put your setup code here, to run once:
 for(int i=0;i<3;i++){
    Send.sendNEC(16746615,32);
    delay(40);
  }
  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
 
}
