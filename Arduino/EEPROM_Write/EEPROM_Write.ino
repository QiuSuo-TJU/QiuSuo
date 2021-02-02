#include <EEPROM.h>

int addr = 0;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
int value = 123;
EEPROM.write(addr, value);

addr = addr + 1;
if (addr = EEPROM.length()){
  addr = 0;
}
delay(100);
}
