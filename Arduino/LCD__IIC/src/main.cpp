#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); //地址，16列，2行

void setup() {
  // put your setup code here, to run once:
  lcd.init();//初始化
  lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0,0);//设置初始光标的位置
  lcd.print("Hello,world");
}