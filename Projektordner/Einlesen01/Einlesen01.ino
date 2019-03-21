#include <FastLED.h>

#define PIN 5 //Pin des Arduinos an den die Datenleitung der LED's angeschlossen wurde
#define HELL 100 //Helligkeit der Matrix
#define LEDZAHL 100 //Anzahl der LED's

//RGB-Arrays für die Umgewandelten Bilder

//Animation1,
 //Bild 1
 const int A1_1R[99] PROGMEM = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
 const int A1_1G[99] PROGMEM = {204, 204, 204, 204, 204, 204, 204, 204, 204, 204, 204, 51, 51, 51, 51, 51, 51, 51, 51, 204, 204, 51, 255, 255, 255, 255, 255, 255, 51, 204, 204, 51, 255, 51, 51, 51, 51, 255, 51, 204, 204, 51, 255, 51, 153, 153, 51, 255, 51, 204, 204, 51, 255, 51, 153, 153, 51, 255, 51, 204, 204, 51, 255, 51, 51, 51, 51, 255, 51, 204, 204, 51, 255, 255, 255, 255, 255, 255, 51, 204, 204, 51, 51, 51, 51, 51, 51, 51, 51, 204, 204, 204, 204, 204, 204, 204, 204, 204, 204};
 const int A1_1B[99] PROGMEM = {153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 255, 51, 51, 51, 51, 51, 51, 255, 153, 153, 255, 51, 102, 102, 102, 102, 51, 255, 153, 153, 255, 51, 102, 255, 255, 102, 51, 255, 153, 153, 255, 51, 102, 255, 255, 102, 51, 255, 153, 153, 255, 51, 102, 102, 102, 102, 51, 255, 153, 153, 255, 51, 51, 51, 51, 51, 51, 255, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153};
 //Bild 2
 const int A1_2R[99] PROGMEM = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
 const int A1_2G[99] PROGMEM = {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 153, 153, 153, 153, 153, 153, 153, 153, 51, 51, 153, 204, 204, 204, 204, 204, 204, 153, 51, 51, 153, 204, 51, 51, 51, 51, 204, 153, 51, 51, 153, 204, 51, 255, 255, 51, 204, 153, 51, 51, 153, 204, 51, 255, 255, 51, 204, 153, 51, 51, 153, 204, 51, 51, 51, 51, 204, 153, 51, 51, 153, 204, 204, 204, 204, 204, 204, 153, 51, 51, 153, 153, 153, 153, 153, 153, 153, 153, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51};
 const int A1_2B[99] PROGMEM = {102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 255, 153, 153, 153, 153, 153, 153, 255, 102, 102, 255, 153, 255, 255, 255, 255, 153, 255, 102, 102, 255, 153, 255, 51, 51, 255, 153, 255, 102, 102, 255, 153, 255, 51, 51, 255, 153, 255, 102, 102, 255, 153, 255, 255, 255, 255, 153, 255, 102, 102, 255, 153, 153, 153, 153, 153, 153, 255, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102};
 //Bild 3
 const int A1_3R[99] PROGMEM = {102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 255, 255, 255, 102, 102, 255, 255, 255, 102, 102, 255, 255, 255, 102, 102, 255, 255, 255, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102};
 const int A1_3G[99] PROGMEM = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 51, 51, 51, 51, 51, 51, 51, 51, 255, 255, 51, 153, 153, 153, 153, 153, 153, 51, 255, 255, 51, 153, 204, 204, 204, 204, 153, 51, 255, 255, 51, 153, 204, 51, 51, 204, 153, 51, 255, 255, 51, 153, 204, 51, 51, 204, 153, 51, 255, 255, 51, 153, 204, 204, 204, 204, 153, 51, 255, 255, 51, 153, 153, 153, 153, 153, 153, 51, 255, 255, 51, 51, 51, 51, 51, 51, 51, 51, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
 const int A1_3B[99] PROGMEM = {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 102, 102, 102, 102, 102, 102, 102, 102, 51, 51, 102, 255, 255, 255, 255, 255, 255, 102, 51, 51, 102, 255, 153, 153, 153, 153, 255, 102, 51, 51, 102, 255, 153, 255, 255, 153, 255, 102, 51, 51, 102, 255, 153, 255, 255, 153, 255, 102, 51, 51, 102, 255, 153, 153, 153, 153, 255, 102, 51, 51, 102, 255, 255, 255, 255, 255, 255, 102, 51, 51, 102, 102, 102, 102, 102, 102, 102, 102, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51};
 //Bild 4
 const int A1_4R[99] PROGMEM = {102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102};
 const int A1_4G[99] PROGMEM = {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 255, 255, 255, 255, 255, 255, 255, 255, 51, 51, 255, 51, 51, 51, 51, 51, 51, 255, 51, 51, 255, 51, 153, 153, 153, 153, 51, 255, 51, 51, 255, 51, 153, 204, 204, 153, 51, 255, 51, 51, 255, 51, 153, 204, 204, 153, 51, 255, 51, 51, 255, 51, 153, 153, 153, 153, 51, 255, 51, 51, 255, 51, 51, 51, 51, 51, 51, 255, 51, 51, 255, 255, 255, 255, 255, 255, 255, 255, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51};
 const int A1_4B[99] PROGMEM = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 51, 51, 51, 51, 51, 51, 51, 51, 255, 255, 51, 102, 102, 102, 102, 102, 102, 51, 255, 255, 51, 102, 255, 255, 255, 255, 102, 51, 255, 255, 51, 102, 255, 153, 153, 255, 102, 51, 255, 255, 51, 102, 255, 153, 153, 255, 102, 51, 255, 255, 51, 102, 255, 255, 255, 255, 102, 51, 255, 255, 51, 102, 102, 102, 102, 102, 102, 51, 255, 255, 51, 51, 51, 51, 51, 51, 51, 51, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
 //Bild 5
 const int A1_5R[99] PROGMEM = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
 const int A1_5G[99] PROGMEM = {204, 204, 204, 204, 204, 204, 204, 204, 204, 204, 204, 51, 51, 51, 51, 51, 51, 51, 51, 204, 204, 51, 255, 255, 255, 255, 255, 255, 51, 204, 204, 51, 255, 51, 51, 51, 51, 255, 51, 204, 204, 51, 255, 51, 153, 153, 51, 255, 51, 204, 204, 51, 255, 51, 153, 153, 51, 255, 51, 204, 204, 51, 255, 51, 51, 51, 51, 255, 51, 204, 204, 51, 255, 255, 255, 255, 255, 255, 51, 204, 204, 51, 51, 51, 51, 51, 51, 51, 51, 204, 204, 204, 204, 204, 204, 204, 204, 204, 204};
 const int A1_5B[99] PROGMEM = {153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 255, 51, 51, 51, 51, 51, 51, 255, 153, 153, 255, 51, 102, 102, 102, 102, 51, 255, 153, 153, 255, 51, 102, 255, 255, 102, 51, 255, 153, 153, 255, 51, 102, 255, 255, 102, 51, 255, 153, 153, 255, 51, 102, 102, 102, 102, 51, 255, 153, 153, 255, 51, 51, 51, 51, 51, 51, 255, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153};


//Animation4 PACMAN
 const int A2_1R[] PROGMEM = {0, 0, 150, 211, 235, 235, 211, 150, 0, 0, 0, 184, 240, 240, 240, 240, 240, 240, 184, 0, 0, 0, 240, 240, 240, 240, 240, 240, 240, 150, 0, 0, 0, 240, 240, 240, 240, 240, 240, 211, 0, 0, 0, 0, 240, 240, 240, 240, 240, 235, 0, 0, 0, 0, 240, 240, 240, 240, 240, 235, 0, 0, 0, 240, 240, 240, 240, 240, 240, 211, 0, 0, 240, 240, 240, 240, 240, 240, 240, 150, 0, 184, 240, 240, 240, 240, 240, 240, 184, 0, 0, 0, 150, 211, 235, 235, 211, 150, 0, 0};
 const int A2_1G[] PROGMEM = {0, 0, 159, 224, 250, 250, 224, 159, 0, 0, 0, 196, 255, 255, 255, 255, 255, 255, 196, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 159, 0, 0, 0, 255, 255, 255, 255, 255, 255, 224, 0, 0, 0, 0, 255, 255, 255, 255, 255, 250, 0, 0, 0, 0, 255, 255, 255, 255, 255, 250, 0, 0, 0, 255, 255, 255, 255, 255, 255, 224, 0, 0, 255, 255, 255, 255, 255, 255, 255, 159, 0, 196, 255, 255, 255, 255, 255, 255, 196, 0, 0, 0, 159, 224, 250, 250, 224, 159, 0, 0};
 const int A2_1B[] PROGMEM = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

 const int A2_2R[] PROGMEM = {0, 0, 150, 211, 235, 235, 211, 150, 0, 0, 0, 184, 240, 240, 240, 240, 240, 240, 184, 0, 0, 240, 240, 240, 240, 240, 240, 240, 240, 150, 0, 0, 240, 240, 240, 240, 240, 240, 240, 211, 0, 0, 0, 0, 240, 240, 240, 240, 240, 235, 0, 0, 0, 0, 240, 240, 240, 240, 240, 235, 0, 0, 240, 240, 240, 240, 240, 240, 240, 211, 0, 240, 240, 240, 240, 240, 240, 240, 240, 150, 0, 184, 240, 240, 240, 240, 240, 240, 184, 0, 0, 0, 150, 211, 235, 235, 211, 150, 0, 0};
 const int A2_2G[] PROGMEM = {0, 0, 159, 224, 250, 250, 224, 159, 0, 0, 0, 196, 255, 255, 255, 255, 255, 255, 196, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 159, 0, 0, 255, 255, 255, 255, 255, 255, 255, 224, 0, 0, 0, 0, 255, 255, 255, 255, 255, 250, 0, 0, 0, 0, 255, 255, 255, 255, 255, 250, 0, 0, 255, 255, 255, 255, 255, 255, 255, 224, 0, 255, 255, 255, 255, 255, 255, 255, 255, 159, 0, 196, 255, 255, 255, 255, 255, 255, 196, 0, 0, 0, 159, 224, 250, 250, 224, 159, 0, 0};
 const int A2_2B[] PROGMEM = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

 const int A2_3R[] PROGMEM = {0, 0, 150, 211, 235, 235, 211, 150, 0, 0, 0, 184, 240, 240, 240, 240, 240, 240, 184, 0, 150, 240, 240, 240, 240, 240, 240, 240, 240, 150, 211, 240, 240, 240, 240, 240, 240, 240, 240, 211, 235, 240, 240, 240, 240, 240, 240, 240, 240, 235, 235, 240, 240, 240, 240, 240, 240, 240, 240, 235, 211, 240, 240, 240, 240, 240, 240, 240, 240, 211, 150, 240, 240, 240, 240, 240, 240, 240, 240, 150, 0, 184, 240, 240, 240, 240, 240, 240, 184, 0, 0, 0, 150, 211, 235, 235, 211, 150, 0, 0};
 const int A2_3G[] PROGMEM = {0, 0, 159, 224, 250, 250, 224, 159, 0, 0, 0, 196, 255, 255, 255, 255, 255, 255, 196, 0, 159, 255, 255, 255, 255, 255, 255, 255, 255, 159, 224, 255, 255, 255, 255, 255, 255, 255, 255, 224, 250, 255, 255, 255, 255, 255, 255, 255, 255, 250, 250, 255, 255, 255, 255, 255, 255, 255, 255, 250, 224, 255, 255, 255, 255, 255, 255, 255, 255, 224, 159, 255, 255, 255, 255, 255, 255, 255, 255, 159, 0, 196, 255, 255, 255, 255, 255, 255, 196, 0, 0, 0, 159, 224, 250, 250, 224, 159, 0, 0};
 const int A2_3B[] PROGMEM = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


CRGB matrix[LEDZAHL];

void Bild1()
{
  //wiederholtes Ausführen der gesamten Animation
  for (int n = 0; n <= 8; n++)
  {
    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A1_1R[i]));
      int G = pgm_read_dword(&(A1_1G[i]));
      int B = pgm_read_dword(&(A1_1B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(500);

    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A1_2R[i]));
      int G = pgm_read_dword(&(A1_2G[i]));
      int B = pgm_read_dword(&(A1_2B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(500);

    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A1_3R[i]));
      int G = pgm_read_dword(&(A1_3G[i]));
      int B = pgm_read_dword(&(A1_3B[i]));

      matrix[i].setRGB(R, G, B);

    }
    FastLED.show();

    delay(500);

    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A1_4R[i]));
      int G = pgm_read_dword(&(A1_4G[i]));
      int B = pgm_read_dword(&(A1_4B[i]));

      matrix[i].setRGB(R, G, B);

    }
    FastLED.show();

    delay(500);

    for (int i = 0; i < LEDZAHL; i++)
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

void RandomLED()
{ //Zufällige Wahl der Farbe eines Pixel aus 10 verschiedenen HTML Farben
  // long RandColorArr[9]={36da00,d50035,0064ff,ff8000,00e8ff,a0ff1f,ff24ca,ff0000,6f34bf,ff99ff};
  int RandColorR [15] = {255, 0, 53, 255, 0, 255, 31, 202, 0, 191, 255, 0, 0, 0, 0};
  int RandColorG [15] = {54, 213, 0, 255, 0, 160, 255, 255, 111, 255, 0, 0, 0, 0, 0};
  int RandColorB [15] = {218, 0, 100, 128, 232, 255, 36, 0, 52, 153, 0, 0, 0, 0, 0};
  FastLED.clear();
  for (int i = 0; i < 400; i++)
  {
    int n = random(0, 14);


    matrix[random(0, 99)].setRGB(RandColorR[n], RandColorG[n], RandColorB[n]);
    FastLED.show();
    delay(70);
  }
}
void Strobo()
{
  int dStrobo = 15; // Delay für die einzelnen Stroboskop-Blinker
  //Stroboskop
  FastLED.clear();
  for (int i = 0; i < 4; i++)
  {
    Serial.print(i);
    int n1 = random(0, 99);
    int n2 = random(0, 99);
    int n3 = random(0, 99);
    int n4 = random(0, 99);

    matrix[n1].setRGB(255, 255, 255);
    matrix[n1 + 5].setRGB(255, 255, 255);
    matrix[n1 + 12].setRGB(255, 255, 255);
    FastLED.show();
    delay(dStrobo);

    matrix[n2].setRGB(255, 255, 255);
    matrix[n2 + 5].setRGB(255, 255, 255);
    matrix[n2 + 12].setRGB(255, 255, 255);
    FastLED.show();
    delay(dStrobo);

    matrix[n1].setRGB(0, 0, 0);
    matrix[n1 + 5].setRGB(0, 0, 0);
    matrix[n1 + 12].setRGB(0, 0, 0);
    FastLED.show();
    delay(dStrobo);

    matrix[n3].setRGB(255, 255, 255);
    matrix[n3 + 5].setRGB(255, 255, 255);
    matrix[n2 + 12].setRGB(255, 255, 255);
    FastLED.show();
    delay(dStrobo);

    matrix[n2].setRGB(0, 0, 0);
    matrix[n2 + 5].setRGB(0, 0, 0);
    matrix[n2 + 12].setRGB(0, 0, 0);
    FastLED.show();
    delay(dStrobo);

    matrix[n4].setRGB(255, 255, 255);
    matrix[n4 + 5].setRGB(255, 255, 255);
    matrix[n4 + 12].setRGB(255, 255, 255);
    FastLED.show();
    delay(dStrobo);

    matrix[n3].setRGB(0, 0, 0);
    matrix[n3 + 5].setRGB(0, 0, 0);
    matrix[n3 + 12].setRGB(0, 0, 0);
    FastLED.show();
    delay(dStrobo);

    matrix[n4].setRGB(0, 0, 0);
    matrix[n4 + 5].setRGB(0, 0, 0);
    matrix[n4 + 12].setRGB(0, 0, 0);
    FastLED.show();
    delay(dStrobo);
  }
}

void Animat4()
{ int d4 = 5;
  //Runterlaufender Punkt der sich unten anreiht
  FastLED.clear();
  int g = 0;
  for (int i = 0; i < LEDZAHL; i++)
  { g = LEDZAHL - i;
    for (int n = 0; n <= g; n++)
    {
      matrix[n - 1].setRGB(0, 0, 0);
      matrix[n].setRGB(255, 255, 255);
      FastLED.show();
      delay(d4);
    }
    // matrix[LEDZAHL-i+1].setRGB(255,255,255);
    //FastLED.show();
  }
}

void Punkt()
{ int d4 = 5;
  //Runterlaufender Punkt der sich unten anreiht
  FastLED.clear();
  int g = 0;
  for (int i = 0; i < LEDZAHL; i++)
  { g = LEDZAHL - i;
    int R = random(0, 255);
    int G = random(0, 255);
    int B = random(0, 255);
    for (int n = 0; n <= g; n++)
    {
      matrix[n - 1].setRGB(0, 0, 0);
      matrix[n].setRGB(R, G, B);
      FastLED.show();
      delay(d4);
    }
    // matrix[LEDZAHL-i+1].setRGB(255,255,255);
    //FastLED.show();
  }
}

void PacMan()
{
  int d6=200;
  for (int n = 0; n <= 15; n++)
  {
    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A2_1R[i]));
      int G = pgm_read_dword(&(A2_1G[i]));
      int B = pgm_read_dword(&(A2_1B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(d6);

    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A2_2R[i]));
      int G = pgm_read_dword(&(A2_2G[i]));
      int B = pgm_read_dword(&(A2_2B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(d6);

    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A2_3R[i]));
      int G = pgm_read_dword(&(A2_3G[i]));
      int B = pgm_read_dword(&(A2_3B[i]));

      matrix[i].setRGB(R, G, B);

    }
    FastLED.show();

    delay(d6);
    
    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A2_2R[i]));
      int G = pgm_read_dword(&(A2_2G[i]));
      int B = pgm_read_dword(&(A2_2B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(d6);
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
  PacMan(); //PacMan (aus Bild)
  Strobo();//Strobo
  Punkt();//laufender Punkt
  Bild1();//Vierecke (aus Bild)
  RandomLED();//Zufällige Farben auf Zufälligen LED's
}
/*
  void Animation(nB)
  { //for(nB
  }
*/
