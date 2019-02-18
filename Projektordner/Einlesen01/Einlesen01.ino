#include <FastLED.h>
#define LEDZAHL 100
#define PIN 6
#define HELL 50
#define wait 1000
#define matrixbreite 10
#define matrixhöhe 10
#include <Bild.h>


CRGB matrix[LEDZAHL];
void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<NEOPIXEL, PIN>(matrix, LEDZAHL);
  FastLED.setBrightness(HELL);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

}
