#include <FastLED.h>
#define NUM_LEDS 5             // LED灯珠数量
#define DATA_PIN 9              // Arduino输出控制信号引脚
#define CLOCK_PIN 8
#define LED_TYPE APA102         // LED灯带型号
#define COLOR_ORDER1 RGB         // RGB灯珠中红色、绿色、蓝色LED的排列顺序

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

leds[2] = CRGB::Red;
FastLED.show();
delay(10);

leds[2] = CRGB::Black;
FastLED.show();
delay(105);

leds[1] = CRGB::Red;
leds[3] = CRGB::Red;
FastLED.show();
delay(10);

leds[1] = CRGB::Black;
leds[3] = CRGB::Black;
FastLED.show();
delay(105);




}
