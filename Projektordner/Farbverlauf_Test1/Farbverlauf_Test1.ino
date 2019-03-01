#include <FastLED.h>

#define LEDZAHL 100
#define PIN 6
#define HELL 10
#define wait 100
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

 /* FarbverlaufR();
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
  */
  komplettW();
  delay(wait*20);

  komplettW();
  delay(wait);

  komplettW();
  delay(wait);



}

void FarbverlaufR()
{ FastLED.clear();

  for (int n; n < LEDZAHL; n++)
  {

    int test;

    test = 255; // (LEDZAHL / n);
    Serial.println(test);

    matrix[n].setRGB(test, 0, 0);
    matrix[n-1].setRGB(0,0,0);
    FastLED.show();
    delay(wait/10);
  }
}
void FarbverlaufG()
{ FastLED.clear();
  for (int n; n < LEDZAHL; n++)
  {

    int test;
    test = 0;
    test = 255; // (LEDZAHL / n);
    matrix[n].setRGB(0, test, 0);
    matrix[n-1].setRGB(0,0,0);
    FastLED.show();
    delay(wait/10);
  }
}
void FarbverlaufB()
{
  FastLED.clear();
  for (int n; n < LEDZAHL; n++)
  {

    int test;
    test = 0;
    test = 255; // (LEDZAHL / n);
    matrix[n].setRGB(0, 0, test);
    matrix[n-1].setRGB(0,0,0);
    FastLED.show();
    delay(wait/10);
    

  }
}

void komplettW()
{
  FastLED.clear();
  for (int n; n < LEDZAHL; n++)
  {
    matrix[n-1].setRGB(255, 255, 255);
    //matrix[n-1].setRGB(0,0,0);
    if ((n%10==0)||(n==LEDZAHL-1))
    {
    FastLED.show();
    delay(wait*5);
    }

  } 
}
