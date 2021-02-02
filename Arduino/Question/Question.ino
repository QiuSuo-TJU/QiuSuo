#include "FastLED.h"            // 此示例程序需要使用FastLED库

#define NUM_LEDS 30             // LED灯珠数量
#define DATA_PIN 9              // Arduino输出控制信号引脚
#define LED_TYPE WS2812         // LED灯带型号
#define COLOR_ORDER GRB         // RGB灯珠中红色、绿色、蓝色LED的排列顺序

uint8_t max_bright = 128;       // LED亮度控制变量，可使用数值为 0 ～ 255， 数值越大则光带亮度越高
int irSensor = 7;
bool irSensorOutput;

CRGB leds[NUM_LEDS];            // 建立光带leds

void setup() { 
  Serial.begin(9600);           // 启动串行通讯
  delay(1000);                  // 稳定性等待
  LEDS.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);  // 初始化光带 
  FastLED.setBrightness(max_bright);                            // 设置光带亮度
}

void loop() {
  // put your main code here, to run repeatedly:
irSensorOutput = digitalRead(irSensor);
if(irSensorOutput){
fill_rainbow(leds, 30, 0, 9);  //fill_rainbow的三个参数分别是灯带名，等个数，第一个灯的色调值，色调间隔值
FastLED.show();
delay(500);
  }else{
    fill_solid(leds, 30, CRGB::Black);
    FastLED.show();
    delay(50);
  }
} 
