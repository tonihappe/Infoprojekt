#include <Adafruit_NeoPixel.h>

#define PIN 6
#define ANZAHL 100

Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIN,ANZAHL,NEO_GRBW + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show();

}

void loop() {
  // put your main code here, to run repeatedly:
 for(int n=0;n<PIN;n++)
 {
  strip.setPixelColor(n,255,255,255);
 }
  strip.show();
delay(1000);
 for(int n=0;n<PIN;n++)
 {
  strip.setPixelColor(n,0,0,0);
 }
  strip.show();

}
