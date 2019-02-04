#include <FastLED.h>
#define LEDZAHL 100
#define PIN 6
#define HELL 50
#define wait 1000
#define matrixbreite 10
#define matrixhöhe 10

CRGB matrix[LEDZAHL];
void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<NEOPIXEL, PIN>(matrix, LEDZAHL);
  FastLED.setBrightness(HELL);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  FarbverlaufR();
  delay (wait);
  FarbverlaufG();
  delay (wait);
  FarbverlaufB();
  delay (wait);
  FarbverlaufR();
  delay (wait);
  FarbverlaufG();
  delay (wait);
  FarbverlaufB();
  delay (wait);



}

void FarbverlaufR()
{ FastLED.clear();
  for (int n; n < LEDZAHL; n++)
  {

    int test;

    test = 255 / (LEDZAHL / n);
    Serial.println(test);

    matrix[n].setRGB(test, 0, 0);
    FastLED.show();

  }
}
void FarbverlaufG()
{ FastLED.clear();
  for (int n; n < LEDZAHL; n++)
  {

    int test;
    test = 0;
    test = 255 / (LEDZAHL / n);
    matrix[n].setRGB(0, test, 0);
    FastLED.show();

  }
}
void FarbverlaufB()
{
  FastLED.clear();
  for (int n; n < LEDZAHL; n++)
  {

    int test;
    test = 0;
    test = 255 / (LEDZAHL / n);
    matrix[n].setRGB(0, 0, test);
    FastLED.show();

  }
}
