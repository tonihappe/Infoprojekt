#include "Arduino.h"
#include "Animationen.h"
#include <FastLED.h>

/*
Animat1::Animat1()
{
  
}
*/
Animat1 Animation1()
{
  CRGB matrix[100];
  for (int n = 0; n <= 8; n++)
  {
    for (int i = 0; i < 100; i++)
    {
      int R = pgm_read_dword(&(A1_1R[i]));
      int G = pgm_read_dword(&(A1_1G[i]));
      int B = pgm_read_dword(&(A1_1B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(500);

    for (int i = 0; i < 100; i++)
    {
      int R = pgm_read_dword(&(A1_2R[i]));
      int G = pgm_read_dword(&(A1_2G[i]));
      int B = pgm_read_dword(&(A1_2B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(500);

    for (int i = 0; i < 100; i++)
    {
      int R = pgm_read_dword(&(A1_3R[i]));
      int G = pgm_read_dword(&(A1_3G[i]));
      int B = pgm_read_dword(&(A1_3B[i]));

      matrix[i].setRGB(R, G, B);

    }
    FastLED.show();

    delay(500);

    for (int i = 0; i < 100; i++)
    {
      int R = pgm_read_dword(&(A1_4R[i]));
      int G = pgm_read_dword(&(A1_4G[i]));
      int B = pgm_read_dword(&(A1_4B[i]));

      matrix[i].setRGB(R, G, B);

    }
    FastLED.show();

    delay(500);

    for (int i = 0; i < 100; i++)
    {
      int R = pgm_read_dword(&(A1_5R[i]));
      int G = pgm_read_dword(&(A1_5G[i]));
      int B = pgm_read_dword(&(A1_5B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(500);
  }
}
