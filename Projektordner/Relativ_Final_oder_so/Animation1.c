















/*const int A1_1R[99] PROGMEM = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
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

CRGB matrix[100];

void Animation1()
{
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
}*/
