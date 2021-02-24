#include <Arduino.h>
#include <FastLED.h>
#define NUM_LEDS 5             // LED灯珠数量
#define DATA_PIN 9              // Arduino输出控制信号引脚
#define CLOCK_PIN 8
#define LED_TYPE APA102         // LED灯带型号
#define COLOR_ORDER RGB         // RGB灯珠中红色、绿色、蓝色LED的排列顺序

uint8_t max_bright = 128;  


CRGB leds[NUM_LEDS];            // 建立光带leds

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);           // 启动串行通讯
  delay(1000);                  // 稳定性等待
  LEDS.addLeds<LED_TYPE, DATA_PIN, CLOCK_PIN, COLOR_ORDER>(leds, NUM_LEDS);  // 初始化光带 
  FastLED.setBrightness(max_bright);  
}

void loop() {
  // put your main code here, to run repeatedly: 
  //一共是100ms,使用58ms，共58行，18列

//1st
for(int i = 11; i<=14; i++){
  leds[i] = CRGB::Red;
  FastLED.show();
  delayMicroseconds(20);
  leds[i] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(980);
}

//2nd
leds[10] = CRGB::Red;
leds[15] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[10] = CRGB::Black;
leds[15] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//3rd
leds[9] = CRGB::Red;
leds[16] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[9] = CRGB::Black;
leds[16] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//4th
leds[8] = CRGB::Red;
leds[17] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[8] = CRGB::Black;
leds[17] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//5th
leds[9] = CRGB::Red;
leds[16] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[9] = CRGB::Black;
leds[16] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//6th
leds[10] = CRGB::Red;
leds[15] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[10] = CRGB::Black;
leds[15] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//7th
for(int i = 11; i<=14; i++){
  leds[i] = CRGB::Red;
  FastLED.show();
  delayMicroseconds(20);
  leds[i] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(980);
}

//8,9th
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(2000);
}

//10th
for(int i=2; i<=11; i++){
  leds[i] = CRGB::Red;
  FastLED.show();
  delayMicroseconds(20);
  leds[i] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(980);
}

//11th
leds[12] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[12] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//12th
leds[13] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[13] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//14th
leds[14] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[14] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//15th
leds[14] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[14] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//16th
leds[14] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[14] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//17th
leds[13] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[13] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//18th
leds[12] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[12] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//19th
for(int i=2; i<=11; i++){
  leds[i] = CRGB::Red;
  FastLED.show();
  delayMicroseconds(20);
  leds[i] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(980);
}

//20th
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(2000);
}

//21st
leds[9] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[9] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//22nd
leds[8] = CRGB::Red;
leds[10] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[8] = CRGB::Black;
leds[10] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//23rd
leds[0] = CRGB::Red;
leds[7] = CRGB::Red;
leds[11] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[0] = CRGB::Black;
leds[7] = CRGB::Black;
leds[11] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//24th
leds[0] = CRGB::Red;
leds[6] = CRGB::Red;
leds[11] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[0] = CRGB::Black;
leds[6] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//25th
leds[0] = CRGB::Red;
leds[5] = CRGB::Red;
leds[11] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[0] = CRGB::Black;
leds[5] = CRGB::Black;
leds[11] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//26th
leds[0] = CRGB::Red;
leds[4] = CRGB::Red;
leds[11] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[0] = CRGB::Black;
leds[4] = CRGB::Black;
leds[11] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//27th
leds[1] = CRGB::Red;
leds[3] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[1] = CRGB::Black;
leds[3] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//28th
leds[2] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[2] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//29,30th,31st
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(3000);
}

//32nd
for(int i=0; i<=8; i++){
  leds[i] = CRGB::Red;
  FastLED.show();
  delayMicroseconds(20);
  leds[i] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(980);
}

//33rd
leds[9] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[9] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//34th
leds[10] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[10] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//35,36,37th
for(int k = 0; k<=2; k++){
  leds[11] = CRGB::Red;
  FastLED.show();
  delayMicroseconds(20);
  leds[11] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(980);
}

//38th
leds[10] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[10] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//39th
leds[9] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[9] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//40th
for(int i=0; i<=8; i++){
  leds[i] = CRGB::Red;
  FastLED.show();
  delayMicroseconds(20);
  leds[i] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(980);
}

//41,42,43,44,45
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(1000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(1000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(1000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(1000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(1000);
}

//46th
leds[3] = CRGB::Red;
leds[4] = CRGB::Red;
for(int i = 6; i<=13; i++){
  leds[i] = CRGB::Red;
  FastLED.show();
}
delayMicroseconds(20);
leds[3] = CRGB::Black;
leds[4] = CRGB::Black;
for(int i = 6; i<=13; i++){
  leds[i] = CRGB::Black;
  FastLED.show();
}
delayMicroseconds(980);

//47,48,49,50
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(1000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(1000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(1000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(1000);
}

//51
leds[17] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[17] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//52
leds[11] = CRGB::Red;
leds[12] = CRGB::Red;
leds[13] = CRGB::Red;
leds[14] = CRGB::Red;
leds[16] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[11] = CRGB::Black;
leds[12] = CRGB::Black;
leds[13] = CRGB::Black;
leds[14] = CRGB::Black;
leds[16] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//53
leds[10] = CRGB::Red;
leds[15] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[10] = CRGB::Black;
leds[15] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//54rd
leds[9] = CRGB::Red;
leds[16] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[9] = CRGB::Black;
leds[16] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//55th
leds[8] = CRGB::Red;
leds[17] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[8] = CRGB::Black;
leds[17] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//56th
leds[9] = CRGB::Red;
leds[16] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[9] = CRGB::Black;
leds[16] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//57th
leds[10] = CRGB::Red;
leds[15] = CRGB::Red;
FastLED.show();
delayMicroseconds(20);
leds[10] = CRGB::Black;
leds[15] = CRGB::Black;
FastLED.show();
delayMicroseconds(980);

//58th
for(int i = 11; i<=14; i++){
  leds[i] = CRGB::Red;
  FastLED.show();
  delayMicroseconds(20);
  leds[i] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(980);
}

delay(42);
}