//此程序用于写fill_solid库函数的使用
//该程序是用来点亮任意位置任意个数的相连的Led灯带

#include "FastLED.h"            // 此示例程序需要使用FastLED库

#define NUM_LEDS 30             // LED灯珠数量
#define DATA_PIN 9              // Arduino输出控制信号引脚
#define LED_TYPE WS2812         // LED灯带型号
#define COLOR_ORDER GRB         // RGB灯珠中红色、绿色、蓝色LED的排列顺序

uint8_t max_bright = 128;       // LED亮度控制变量，可使用数值为 0 ～ 255， 数值越大则光带亮度越高

CRGB leds[NUM_LEDS];            // 建立光带leds

void setup() { 
  Serial.begin(9600);           // 启动串行通讯
  delay(1000);                  // 稳定性等待
  LEDS.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);  // 初始化光带 
  FastLED.setBrightness(max_bright);                            // 设置光带亮度
}

void loop() {
  // put your main code here, to run repeatedly:
fill_solid(leds+5, 3, CRGB::Red);
FastLED.show();
delay(500);

fill_solid(leds+5, 3, CRGB::Black);
FastLED.show();
delay(500);
}
