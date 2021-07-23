#include <FastLED.h>
#define NUM_LEDS 18
#define DATA_PIN 3
#define CLOCK_PIN 8

CRGB leds[NUM_LEDS];

void setup() { 
    
    FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);  // GRB ordering is assumed
    
}

void loop() { 

  //1st
  leds[3] = CRGB::Yellow;
  leds[4] = CRGB::Yellow;
  leds[5] = CRGB::Yellow;
  leds[6] = CRGB::Yellow;
  FastLED.show();
  delayMicroseconds(2500);

  //2nd
  leds[3] = CRGB::Black;
  leds[4] = CRGB::Black;
  leds[5] = CRGB::Black;
  leds[6] = CRGB::Black;                  
  leds[2] = CRGB::Yellow;
  leds[7] = CRGB::Yellow;
  FastLED.show();
  delayMicroseconds(2500);

  //3rd
  leds[2] = CRGB::Black;
  leds[7] = CRGB::Black;
  leds[1] = CRGB::Yellow;
  leds[8] = CRGB::Yellow;
  FastLED.show();
  delayMicroseconds(2500);

  //4th
  leds[1] = CRGB::Yellow;
  leds[8] = CRGB::Yellow;
  FastLED.show();
  delayMicroseconds(2500);

  //5th
  leds[1] = CRGB::Yellow;
  leds[8] = CRGB::Yellow;
  FastLED.show();
  delayMicroseconds(2500);

  //6th
  leds[1] = CRGB::Black;
  leds[8] = CRGB::Black;
  leds[2] = CRGB::Yellow;
  leds[7] = CRGB::Yellow;
  FastLED.show();
  delayMicroseconds(2500);

  //7th
  leds[2] = CRGB::Black;
  leds[7] = CRGB::Black;
for(int i = 3; i<=6; i++){
  leds[i] = CRGB::Yellow;
}
  FastLED.show();
  delayMicroseconds(2500);

  //8,9th
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(5000);

//10th
for(int i = 6; i<=15; i++){
  leds[i] = CRGB::Blue;
}
  FastLED.show();
  delayMicroseconds(2500);

//11th
for(int i = 6; i<=15; i++){
  leds[i] = CRGB::Black;
}
leds[5] = CRGB::Blue;
FastLED.show();
delayMicroseconds(2500);

//12th
leds[5] = CRGB::Black;
leds[4] = CRGB::Blue;
FastLED.show();
delayMicroseconds(2500);

//13th
leds[4] = CRGB::Black;
leds[3] = CRGB::Blue;
FastLED.show();
delayMicroseconds(2500);


//14th
leds[3] = CRGB::Blue;
FastLED.show();
delayMicroseconds(2500);


//15th
leds[3] = CRGB::Blue;
FastLED.show();
delayMicroseconds(2500);

//16th
leds[3] = CRGB::Black;
leds[4] = CRGB::Blue;
FastLED.show();
delayMicroseconds(2500);

//17th
leds[4] = CRGB::Black;
leds[5] = CRGB::Blue;
FastLED.show();
delayMicroseconds(2500);

//18th
leds[5] = CRGB::Black;
for(int i = 6; i<=15; i++){
  leds[i] = CRGB::Blue;
}
  FastLED.show();
  delayMicroseconds(2500);

//19,20th
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
}


 
  FastLED.show();

  delayMicroseconds(5000);

//21st
leds[8] = CRGB::Green;
FastLED.show();
delayMicroseconds(2500);

//22nd
leds[8] = CRGB::Black;
leds[7] = CRGB::Green;
leds[9] = CRGB::Green;
leds[16] = CRGB::Green;
FastLED.show();
delayMicroseconds(2500);

//23rd
leds[16] = CRGB::Black;
leds[7] = CRGB::Black;
leds[9] = CRGB::Black;
leds[17] = CRGB::Green;
leds[10] = CRGB::Green;
leds[6] = CRGB::Green;
FastLED.show();
delayMicroseconds(2500);

//24th
leds[17] = CRGB::Black;
leds[10] = CRGB::Black;
leds[6] = CRGB::Black;
leds[17] = CRGB::Green;
leds[11] = CRGB::Green;
leds[6] = CRGB::Green;
FastLED.show();
delayMicroseconds(2500);

//25th
leds[17] = CRGB::Black;
leds[11] = CRGB::Black;
leds[6] = CRGB::Black;
leds[6] = CRGB::Green;
leds[12] = CRGB::Green;
leds[17] = CRGB::Green;
FastLED.show();
delayMicroseconds(2500);

//26th
leds[17] = CRGB::Black;
leds[12] = CRGB::Black;
leds[6] = CRGB::Black;
leds[17] = CRGB::Green;
leds[13] = CRGB::Green;
leds[6] = CRGB::Green;
FastLED.show();
delayMicroseconds(2500);

//27th
leds[17] = CRGB::Black;
leds[13] = CRGB::Black;
leds[6] = CRGB::Black;
leds[16] = CRGB::Green;
leds[14] = CRGB::Green;
leds[7] = CRGB::Green;
FastLED.show();
delayMicroseconds(2500);

//28th
leds[16] = CRGB::Black;
leds[7] = CRGB::Black;
leds[14] = CRGB::Black;
leds[15] = CRGB::Green;
FastLED.show();
delayMicroseconds(2500);

//29,30th,31st
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(7500);
 

//32nd
for(int i = 9; i<=17; i++){
  leds[i] = CRGB::Red;
}
  FastLED.show();
  delayMicroseconds(2500);

//33rd
for(int i = 9; i<=17; i++){
  leds[i] = CRGB::Black;
}
leds[8] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);

//34th
leds[8] = CRGB::Black;
leds[7] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);

//35th
leds[7] = CRGB::Black;
leds[6] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);


//36th
leds[6] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);


//37th
leds[6] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);

//38th
leds[6] = CRGB::Black;
leds[7] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);

//39th
leds[7] = CRGB::Black;
leds[8] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);

//40th
leds[8] = CRGB::Black;
for(int i = 9; i<=17; i++){
  leds[i] = CRGB::Red;
}
  FastLED.show();
  delayMicroseconds(2500);

//41,42,43,44,45
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(12500);

//46th
leds[14] = CRGB::Purple;
leds[13] = CRGB::Purple;
for(int i = 4; i<=11; i++){
  leds[i] = CRGB::Purple;
}
FastLED.show();
delayMicroseconds(2500);

//47,48,49,50
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;}
  FastLED.show();
  delayMicroseconds(10000);


//51
leds[0] = CRGB::Pink;
FastLED.show();
delayMicroseconds(2500);

//52
leds[0] = CRGB::Black;
leds[6] = CRGB::Pink;
leds[5] = CRGB::Pink;
leds[4] = CRGB::Pink;
leds[3] = CRGB::Pink;
leds[1] = CRGB::Pink;
FastLED.show();
delayMicroseconds(2500);

//53
leds[6] = CRGB::Black;
leds[5] = CRGB::Black;
leds[4] = CRGB::Black;
leds[3] = CRGB::Black;
leds[1] = CRGB::Black;
leds[7] = CRGB::Pink;
leds[2] = CRGB::Pink;
FastLED.show();
delayMicroseconds(2500);

//54rd
leds[7] = CRGB::Black;
leds[2] = CRGB::Black;
leds[1] = CRGB::Pink;
leds[8] = CRGB::Pink;
FastLED.show();
delayMicroseconds(2500);

//55th
leds[1] = CRGB::Pink;
leds[8] = CRGB::Pink;
FastLED.show();
delayMicroseconds(2500);

//56th
leds[1] = CRGB::Pink;
leds[8] = CRGB::Pink;
FastLED.show();
delayMicroseconds(2500);

//57th
leds[1] = CRGB::Black;
leds[8] = CRGB::Black;
leds[7] = CRGB::Pink;
leds[2] = CRGB::Pink;
FastLED.show();
delayMicroseconds(2500);

//58th
leds[7] = CRGB::Black;
leds[2] = CRGB::Black;
for(int i = 3; i<=6; i++){
  leds[i] = CRGB::Pink;
}
  FastLED.show();
  delayMicroseconds(2500);
for(int i = 3; i<=6; i++){
  leds[i] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(2500);

delay(105);


}
