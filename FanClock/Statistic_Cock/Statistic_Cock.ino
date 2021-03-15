#include <FastLED.h>
#define NUM_LEDS 18
#define DATA_PIN 3
#define CLOCK_PIN 8


int times1 = 2799;   
int times2 = 1;
uint8_t max_bright = 50;
CRGB leds[NUM_LEDS];

void setup() {    
    FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);  
    FastLED.setBrightness(max_bright);
}
/*times1+times2等于风扇转动一周所需时间的六十分之一，即六度所用时间。
其中，times1是APA102的电平持续时间，times2是六度时间内的黑暗时间。*/
void loop(){
  //12中间
  leds[8] = CRGB::Green;
  leds[9] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[8] = CRGB::Black;
  leds[9] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //12右一
  leds[8] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[8] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //12右二
  leds[8] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[8] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //第一象限空白
int rightup = 1;
while(rightup <= 10){
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);
  rightup = rightup + 1;
}
  //3上二
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[13] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //3上一
  leds[13] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[13] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //3中间
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[13] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //3下一
  leds[13] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[13] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //3下二
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[13] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //第四象限空白
int rightdown = 1;
while(rightdown <= 11){
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);
  rightdown = rightdown + 1;
}

  //6右一
  leds[8] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[8] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //6中间
  leds[8] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[8] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //6左一
  leds[8] = CRGB::Green;
  leds[9] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[8] = CRGB::Black;
  leds[9] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //第三象限空白
int leftdown = 1;
while(leftdown <= 11){
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);
  leftdown = leftdown + 1;
}

  //9下二
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[13] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //9下一
  leds[11] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[11] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //9中间
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[13] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //9上一
  leds[11] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[11] = CRGB::Black;
  leds[13] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //9上二
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[13] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[13] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //第二象限空白
int leftup = 1;
while(leftup <= 10){
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);
  leftup = leftup + 1;
}
  
  //12左二
  leds[8] = CRGB::Green;
  leds[9] = CRGB::Green;
  leds[10] = CRGB::Green;
  leds[11] = CRGB::Green;
  leds[12] = CRGB::Green;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times1);
  leds[8] = CRGB::Black;
  leds[9] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[17] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(times2);

  //12左一
  leds[8] = CRGB::Black;
  leds[9] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[17] = CRGB::Blue;
  FastLED.show();
  delayMicroseconds(times2 + times1);
}
  






  

  
