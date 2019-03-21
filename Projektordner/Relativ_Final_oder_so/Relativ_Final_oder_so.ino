#include <FastLED.h>
#include "Animationen.h"
#include"Animation1.cpp"


#define PIN 5
#define HELL 50
//#define wait 1000 //Brauch ich wahrscheinlich doch nicht
#define matrixbreite 10
#define matrixhöhe 10
#define LEDZAHL 100



CRGB matrix[LEDZAHL];

/*void doAnimation1()
{
  Animat1 Animation1
}*/

void Animat2()
{ //Zufällige Wahl der Farbe eines Pixel aus 10 verschiedenen HTML Farben
  // long RandColorArr[9]={36da00,d50035,0064ff,ff8000,00e8ff,a0ff1f,ff24ca,ff0000,6f34bf,ff99ff};
  int RandColorR [12] = {255, 0, 53, 255, 0, 255, 31, 202, 0, 191, 255, 0};
  int RandColorG [12] = {54, 213, 0, 255, 0, 160, 255, 255, 111, 255, 0, 0};
  int RandColorB [12] = {218, 0, 100, 128, 232, 255, 36, 0, 52, 153, 0, 0};
  FastLED.clear();
  for (int i = 0; i < 400; i++)
  {
    int n = random(0, 11);


    matrix[random(0, 99)].setRGB(RandColorR[n], RandColorG[n], RandColorB[n]);
    FastLED.show();
    delay(70);
  }


}

void setup()
{
  // put your setup code here, to run once:
  FastLED.addLeds<NEOPIXEL, PIN>(matrix, LEDZAHL);
  FastLED.setBrightness(HELL);
  Serial.begin(9600);

}

void loop()
{
  // put your main code here, to run repeatedly:
  Animation1();
  Animat2();
}
