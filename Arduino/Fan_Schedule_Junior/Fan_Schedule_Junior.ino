#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 18

// For led chips like WS2812, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
// Clock pin only needed for SPI based chipsets when not using hardware SPI
#define DATA_PIN 3
#define CLOCK_PIN 8

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
    // Uncomment/edit one of the following lines for your leds arrangement.
    // ## Clockless types ##
    FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);  // GRB ordering is assumed
    // FastLED.addLeds<SM16703, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1829, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1812, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<UCS1904, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<UCS2903, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<WS2852, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<GS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<SK6812, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<SK6822, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<APA106, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<PL9823, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<SK6822, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2813, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2811_400, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<GE8822, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<LPD1886, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<LPD1886_8BIT, DATA_PIN, RGB>(leds, NUM_LEDS);
    // ## Clocked (SPI) types ##
    // FastLED.addLeds<LPD6803, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2803, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
    // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
    // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
    // FastLED.addLeds<SK9822, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
}

void loop() { 

  //1st
for(int i = 11; i<=14; i++){
  leds[i] = CRGB::Red;
}
  FastLED.show();
  delayMicroseconds(2500);
for(int i = 11; i<=14; i++){
  leds[i] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(2500);


//2nd
leds[10] = CRGB::Red;
leds[15] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[10] = CRGB::Black;
leds[15] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//3rd
leds[9] = CRGB::Red;
leds[16] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[9] = CRGB::Black;
leds[16] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//4th
leds[8] = CRGB::Red;
leds[17] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[8] = CRGB::Black;
leds[17] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//5th
leds[9] = CRGB::Red;
leds[16] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[9] = CRGB::Black;
leds[16] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//6th
leds[10] = CRGB::Red;
leds[15] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[10] = CRGB::Black;
leds[15] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//7th
for(int i = 11; i<=14; i++){
  leds[i] = CRGB::Red;
}
  FastLED.show();
  delayMicroseconds(2500);
for(int i = 11; i<=14; i++){
  leds[i] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(2500);

//8,9th
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(10000);

//10th
for(int i = 2; i<=11; i++){
  leds[i] = CRGB::Red;
}
  FastLED.show();
  delayMicroseconds(2500);
for(int i = 2; i<=11; i++){
  leds[i] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(2500);


//11th
leds[12] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[12] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//12th
leds[13] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[13] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//13th
leds[14] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[14] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//14th
leds[14] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[14] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//15th
leds[14] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[14] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//16th
leds[13] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[13] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//17th
leds[12] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[12] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//18th
for(int i = 2; i<=11; i++){
  leds[i] = CRGB::Red;
}
  FastLED.show();
  delayMicroseconds(2500);
for(int i = 2; i<=11; i++){
  leds[i] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(2500);

//19,20th
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(10000);
}

//21st
leds[9] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[9] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//22nd
leds[8] = CRGB::Red;
leds[10] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[8] = CRGB::Black;
leds[10] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//23rd
leds[0] = CRGB::Red;
leds[7] = CRGB::Red;
leds[11] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[0] = CRGB::Black;
leds[7] = CRGB::Black;
leds[11] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//24th
leds[0] = CRGB::Red;
leds[6] = CRGB::Red;
leds[11] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[0] = CRGB::Black;
leds[6] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//25th
leds[0] = CRGB::Red;
leds[5] = CRGB::Red;
leds[11] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[0] = CRGB::Black;
leds[5] = CRGB::Black;
leds[11] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//26th
leds[0] = CRGB::Red;
leds[4] = CRGB::Red;
leds[11] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[0] = CRGB::Black;
leds[4] = CRGB::Black;
leds[11] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//27th
leds[1] = CRGB::Red;
leds[3] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[1] = CRGB::Black;
leds[3] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//28th
leds[2] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[2] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//29,30th,31st
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(15000);
}

//32nd
for(int i = 0; i<=8; i++){
  leds[i] = CRGB::Red;
}
  FastLED.show();
  delayMicroseconds(2500);
for(int i = 0; i<=8; i++){
  leds[i] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(2500);


//33rd
leds[9] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[9] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//34th
leds[10] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[10] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//35,36,37th
for(int i = 01; i<=2; i++){
  leds[i] = CRGB::Red;
}
  FastLED.show();
  delayMicroseconds(2500);
for(int i = 0; i<=2; i++){
  leds[i] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(2500);


//38th
leds[10] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[10] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//39th
leds[9] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[9] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//40th
for(int i = 0; i<=8; i++){
  leds[i] = CRGB::Red;
}
  FastLED.show();
  delayMicroseconds(2500);
for(int i = 0; i<=8; i++){
  leds[i] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(2500);


//41,42,43,44,45
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(5000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(5000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(5000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(5000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(5000);
}

//46th
leds[3] = CRGB::Red;
leds[4] = CRGB::Red;
for(int i = 6; i<=13; i++){
  leds[i] = CRGB::Red;
}
FastLED.show();
delayMicroseconds(2500);
leds[3] = CRGB::Black;
leds[4] = CRGB::Black;
for(int i = 6; i<=13; i++){
  leds[i] = CRGB::Black;
}
FastLED.show();
delayMicroseconds(2500);

//47,48,49,50
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(5000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(5000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(5000);
}
for(int j = 0; j<=17; j++){
  leds[j] = CRGB::Black;
  FastLED.show();
  delayMicroseconds(5000);
}

//51
leds[17] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[17] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//52
leds[11] = CRGB::Red;
leds[12] = CRGB::Red;
leds[13] = CRGB::Red;
leds[14] = CRGB::Red;
leds[16] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[11] = CRGB::Black;
leds[12] = CRGB::Black;
leds[13] = CRGB::Black;
leds[14] = CRGB::Black;
leds[16] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//53
leds[10] = CRGB::Red;
leds[15] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[10] = CRGB::Black;
leds[15] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//54rd
leds[9] = CRGB::Red;
leds[16] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[9] = CRGB::Black;
leds[16] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//55th
leds[8] = CRGB::Red;
leds[17] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[8] = CRGB::Black;
leds[17] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//56th
leds[9] = CRGB::Red;
leds[16] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[9] = CRGB::Black;
leds[16] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//57th
leds[10] = CRGB::Red;
leds[15] = CRGB::Red;
FastLED.show();
delayMicroseconds(2500);
leds[10] = CRGB::Black;
leds[15] = CRGB::Black;
FastLED.show();
delayMicroseconds(2500);

//58th
for(int i = 11; i<=14; i++){
  leds[i] = CRGB::Red;
}
  FastLED.show();
  delayMicroseconds(2500);
for(int i = 11; i<=14; i++){
  leds[i] = CRGB::Black;
}
  FastLED.show();
  delayMicroseconds(2500);


delay(10);
}
