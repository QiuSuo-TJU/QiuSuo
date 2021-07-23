#include <FastLED.h>
#define NUm_LEDs 11
#define DATA_PIN 4
#define CLOCK_PIN 9

int h, m, s;
char firstly, secondly, thirdly;
uint8_t max_bright = 30;
CRGB leds[NUm_LEDs];

int xiao;
int yu;
int times4 = 100;
int times3B = 399800;
float shi;
float fen;
float XY;
float times3A;
float times3F;

void setup() { 
  //解决数字的分情况讨论问题
 Serial.begin(9600);
  Serial.println("Input the local time: ");
delay(20000);
if(Serial.available()>0){
      firstly = Serial.read();
    switch(firstly){
      case 'h':
      h = Serial.parseInt();
      Serial.print(h);
      Serial.print(":");
      break;
    }
   }
   if(Serial.available()>0){
      secondly = Serial.read();
    switch(secondly){
      case 'm':
      m = Serial.parseInt();
      Serial.print(m);
      Serial.print(":");
      break;
    }
   }
   if(Serial.available()>0){
      char thirdly = Serial.read();
    switch(thirdly){
      case 's':
      s = Serial.parseInt();
      Serial.print(s);
      break;
    }
   }
   Serial.println(" ");
   if(h < 6){
   xiao = h+6;
}else{
   xiao = h-6;
}

if(m < 30){
   yu = m+30;
}else{
   yu = m-30;
}
//注意，指针的初始位置对应6中间
//WiFi提供的数据有h小时m分钟s秒
/*times3A将指针调整至目标位置，分针所用时间为times4为亮时间，times3B为暗时间，
后二者之和为400ms，即400000μs(因为转一圈要0.4s，也就是400000μs，times4要用两次)。同时，times3B被分成了times3F和XY */
//目标位置调整，33.333ms转过一个小时对应的时间，6.667ms转过一个分钟的时间。
 shi = (xiao + m/60)*100/3;
 fen = (yu + s/60)*20/3;
//shi与fen分别代表时针和分针所用的调整时间，其差的绝对值为XY，即指针差角用时。
if(shi < fen){
   times3A = shi;
}else{
   times3A = fen;
}
 XY = abs(shi-fen);
 times3F = times3B - XY;
    FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUm_LEDs);  
    FastLED.setBrightness(max_bright);
    delayMicroseconds(times3A);
}



void loop() {
  int MK = 1;
while(MK <= 149){
  for(int i = 0; i<=6; i++){
  leds[i] = CRGB::Blue;}
  FastLED.show();
  delayMicroseconds(times4);
  for(int i = 0; i<=6; i++){
  leds[i] = CRGB::Black;}
  FastLED.show();  
  delayMicroseconds(XY);    
  for(int i = 0; i<=11; i++){
  leds[i] = CRGB::Blue;}
  FastLED.show();
  delayMicroseconds(times4);
  for(int i = 0; i<=11; i++){
  leds[i] = CRGB::Black;}
  FastLED.show();  
  delayMicroseconds(times3F);
  MK = MK + 1;
}
  for(int i = 0; i<=6; i++){
  leds[i] = CRGB::Blue;}
  FastLED.show();
  delayMicroseconds(times4);
  for(int i = 0; i<=6; i++){
  leds[i] = CRGB::Black;}
  FastLED.show();  
  delayMicroseconds(times3B+times4);/*傻了，你说我这怎么能在分针在最后一圈比自己的的速度再快一点让它能多转6度呢？
                                    最后一圈分针就不亮了，下一个0.4ms加XY后再亮；除此外还要考虑变化后XY和times3F会变化……
                                    混蛋啊。*/
  XY = XY + 6666.6667;
  times3F = times3F - 6666.6667;


}
