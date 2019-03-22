/*
 * Erstellt von:
 * Toni Happe, 12d
 * Gymnasium Martineum Halberstadt
 * 
 * 
 * ACHTUNG
 * DIE LEDS, SOWIE DAS NETZTEIL KÖNNEN BEI VOLLER HELLIGKEIT RELATIV WARM WERDEN!
 * 
 * Leider hat Arduino bei dem Versuch die anderen Funktionen unter void loop() zu schreiben immer wieder einen Fehler ausgegeben, sodass ich gezwungen war die Funktionen vor loop und setup aufzulisten.
 * Um schneller zu loop zu gelangen einfach bis nach ganz unten scrollen
 * 
 * 
 * Um eigene Bilder umzuwandeln muss dieses eine Auflösung von 10x10 Pixeln haben und folgende Schritte beachtet werden:
 * 1. Bild in Gimp öffnen
 * 2. Datei --> Exportieren als... --> Dateinamen und Speicherort festlegen und als Endung ".ppm" eingeben
 * 3. Exportieren anklicken --> ein Fenster "Datenformatierung" öffnet sich --> "ASCII" auswählen und auf Exportieren klicken
 * 4. Umwandler.py entweder in den Ordner in welchen die .ppm Datei exportiert wurde kopieren oder den Dateipfad zur ppm Datei in die Zwischenablage kopieren
 * 5. Umwandler.py starten
 * 6. Dateinamen bzw. -pfad eingeben 
 * 7. Gewünschten Namen der Variable (so, wie es im Programm stehen soll) eingeben
 * 8. Datei <eingegebener Name>.txt wird erstellt und enthält Blöcke wie diese enthalten, die genau so in das Programm kopiert werden können:
 *      const int A1_1R[] PROGMEM = {RGBWERTE};
 *      const int A1_1G[] PROGMEM = {RGBWERTE};
 *      const int A1_1B[] PROGMEM = {RGBWERTE};
 * 9. RGB Werte in beliebiger Form verwenden
 */

#include <FastLED.h> //FastLED Library zur Steuerung der LEDs

#define PIN 5 //Pin des Arduinos an den die Datenleitung der LED's angeschlossen wurde
#define HELL 75 //Helligkeit der Matrix (1-255)
#define LEDZAHL 100 //Anzahl der LED's



//RGB-Arrays für die Umgewandelten Bilder

//Animation1,
//Bild 1
const int A1_1R[] PROGMEM = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
const int A1_1G[] PROGMEM = {153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 204, 204, 204, 204, 204, 204, 204, 204, 153, 153, 204, 51, 51, 51, 51, 51, 51, 204, 153, 153, 204, 51, 255, 255, 255, 255, 51, 204, 153, 153, 204, 51, 255, 51, 51, 255, 51, 204, 153, 153, 204, 51, 255, 51, 51, 255, 51, 204, 153, 153, 204, 51, 255, 255, 255, 255, 51, 204, 153, 153, 204, 51, 51, 51, 51, 51, 51, 204, 153, 153, 204, 204, 204, 204, 204, 204, 204, 204, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153};
const int A1_1B[] PROGMEM = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 153, 255, 255, 255, 255, 255, 255, 153, 255, 255, 153, 255, 51, 51, 51, 51, 255, 153, 255, 255, 153, 255, 51, 102, 102, 51, 255, 153, 255, 255, 153, 255, 51, 102, 102, 51, 255, 153, 255, 255, 153, 255, 51, 51, 51, 51, 255, 153, 255, 255, 153, 255, 255, 255, 255, 255, 255, 153, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
//Bild 2
const int A1_2R[] PROGMEM = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
const int A1_2G[] PROGMEM = {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 153, 153, 153, 153, 153, 153, 153, 153, 51, 51, 153, 204, 204, 204, 204, 204, 204, 153, 51, 51, 153, 204, 51, 51, 51, 51, 204, 153, 51, 51, 153, 204, 51, 255, 255, 51, 204, 153, 51, 51, 153, 204, 51, 255, 255, 51, 204, 153, 51, 51, 153, 204, 51, 51, 51, 51, 204, 153, 51, 51, 153, 204, 204, 204, 204, 204, 204, 153, 51, 51, 153, 153, 153, 153, 153, 153, 153, 153, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51};
const int A1_2B[] PROGMEM = {102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 255, 153, 153, 153, 153, 153, 153, 255, 102, 102, 255, 153, 255, 255, 255, 255, 153, 255, 102, 102, 255, 153, 255, 51, 51, 255, 153, 255, 102, 102, 255, 153, 255, 51, 51, 255, 153, 255, 102, 102, 255, 153, 255, 255, 255, 255, 153, 255, 102, 102, 255, 153, 153, 153, 153, 153, 153, 255, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102};
//Bild 3
const int A1_3R[] PROGMEM = {102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 255, 255, 255, 102, 102, 255, 255, 255, 102, 102, 255, 255, 255, 102, 102, 255, 255, 255, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102};
const int A1_3G[] PROGMEM = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 51, 51, 51, 51, 51, 51, 51, 51, 255, 255, 51, 153, 153, 153, 153, 153, 153, 51, 255, 255, 51, 153, 204, 204, 204, 204, 153, 51, 255, 255, 51, 153, 204, 51, 51, 204, 153, 51, 255, 255, 51, 153, 204, 51, 51, 204, 153, 51, 255, 255, 51, 153, 204, 204, 204, 204, 153, 51, 255, 255, 51, 153, 153, 153, 153, 153, 153, 51, 255, 255, 51, 51, 51, 51, 51, 51, 51, 51, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
const int A1_3B[] PROGMEM = {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 102, 102, 102, 102, 102, 102, 102, 102, 51, 51, 102, 255, 255, 255, 255, 255, 255, 102, 51, 51, 102, 255, 153, 153, 153, 153, 255, 102, 51, 51, 102, 255, 153, 255, 255, 153, 255, 102, 51, 51, 102, 255, 153, 255, 255, 153, 255, 102, 51, 51, 102, 255, 153, 153, 153, 153, 255, 102, 51, 51, 102, 255, 255, 255, 255, 255, 255, 102, 51, 51, 102, 102, 102, 102, 102, 102, 102, 102, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51};
//Bild 4
const int A1_4R[] PROGMEM = {102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102, 102};
const int A1_4G[] PROGMEM = {51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 255, 255, 255, 255, 255, 255, 255, 255, 51, 51, 255, 51, 51, 51, 51, 51, 51, 255, 51, 51, 255, 51, 153, 153, 153, 153, 51, 255, 51, 51, 255, 51, 153, 204, 204, 153, 51, 255, 51, 51, 255, 51, 153, 204, 204, 153, 51, 255, 51, 51, 255, 51, 153, 153, 153, 153, 51, 255, 51, 51, 255, 51, 51, 51, 51, 51, 51, 255, 51, 51, 255, 255, 255, 255, 255, 255, 255, 255, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51};
const int A1_4B[] PROGMEM = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 51, 51, 51, 51, 51, 51, 51, 51, 255, 255, 51, 102, 102, 102, 102, 102, 102, 51, 255, 255, 51, 102, 255, 255, 255, 255, 102, 51, 255, 255, 51, 102, 255, 153, 153, 255, 102, 51, 255, 255, 51, 102, 255, 153, 153, 255, 102, 51, 255, 255, 51, 102, 255, 255, 255, 255, 102, 51, 255, 255, 51, 102, 102, 102, 102, 102, 102, 51, 255, 255, 51, 51, 51, 51, 51, 51, 51, 51, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
//Bild 5
const int A1_5R[] PROGMEM = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 255, 255, 255, 255, 102, 102, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 102, 102, 102, 102, 102, 102, 102, 102, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255};
const int A1_5G[] PROGMEM = {204, 204, 204, 204, 204, 204, 204, 204, 204, 204, 204, 51, 51, 51, 51, 51, 51, 51, 51, 204, 204, 51, 255, 255, 255, 255, 255, 255, 51, 204, 204, 51, 255, 51, 51, 51, 51, 255, 51, 204, 204, 51, 255, 51, 153, 153, 51, 255, 51, 204, 204, 51, 255, 51, 153, 153, 51, 255, 51, 204, 204, 51, 255, 51, 51, 51, 51, 255, 51, 204, 204, 51, 255, 255, 255, 255, 255, 255, 51, 204, 204, 51, 51, 51, 51, 51, 51, 51, 51, 204, 204, 204, 204, 204, 204, 204, 204, 204, 204, 204};
const int A1_5B[] PROGMEM = {153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 255, 51, 51, 51, 51, 51, 51, 255, 153, 153, 255, 51, 102, 102, 102, 102, 51, 255, 153, 153, 255, 51, 102, 255, 255, 102, 51, 255, 153, 153, 255, 51, 102, 255, 255, 102, 51, 255, 153, 153, 255, 51, 102, 102, 102, 102, 51, 255, 153, 153, 255, 51, 51, 51, 51, 51, 51, 255, 153, 153, 255, 255, 255, 255, 255, 255, 255, 255, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153, 153};


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

void Vierecke(int dVierecke)
{
  //wiederholtes Ausführen der gesamten Animation
  for (int n = 0; n <= 10; n++)
  {
    //Jeder LED wird der zugehörige Wert zugewiesen
    //Bild 1
    for (int i = 0; i < LEDZAHL; i++)
    {
      //Lesen der RGB Array's aus dem Flash Speicher (LED für LED)
      int R = pgm_read_dword(&(A1_1R[i]));
      int G = pgm_read_dword(&(A1_1G[i]));
      int B = pgm_read_dword(&(A1_1B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show(); //Anzeigen der vorher festgelegten Werte für die LEDs

    delay(dVierecke);

    //selbiges für alle weiteren Bilder der Animation
    //Bild 2
    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A1_2R[i]));
      int G = pgm_read_dword(&(A1_2G[i]));
      int B = pgm_read_dword(&(A1_2B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(dVierecke);

    //Bild 3
    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A1_3R[i]));
      int G = pgm_read_dword(&(A1_3G[i]));
      int B = pgm_read_dword(&(A1_3B[i]));

      matrix[i].setRGB(R, G, B);

    }
    FastLED.show();

    delay(dVierecke);

    //Bild 4
    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A1_4R[i]));
      int G = pgm_read_dword(&(A1_4G[i]));
      int B = pgm_read_dword(&(A1_4B[i]));

      matrix[i].setRGB(R, G, B);

    }
    FastLED.show();

    delay(dVierecke);

    //Bild 5
    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A1_5R[i]));
      int G = pgm_read_dword(&(A1_5G[i]));
      int B = pgm_read_dword(&(A1_5B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(dVierecke);
  }
}

void RandomLED(int dRandom)
{
  //Zufällige Wahl der Farbe eines Pixel aus 10 verschiedenen RGB Farben; Schwarz tritt öfter auf, um die Wahrscheinlichkeit zu erhöhen, dass Pixel auch eher wieder Schwarz werden
  int RandColorR [15] = {255, 0, 53, 255, 0, 255, 31, 202, 0, 191, 255, 0, 0, 0, 0};
  int RandColorG [15] = {54, 213, 0, 255, 0, 160, 255, 255, 111, 255, 0, 0, 0, 0, 0};
  int RandColorB [15] = {218, 0, 100, 128, 232, 255, 36, 0, 52, 153, 0, 0, 0, 0, 0};
  FastLED.clear();

  //400 mal wird einem zufälligen Pixel eine Farbe aus den oben deklarierten Arrays zugewiesen und angezeigt
  for (int i = 0; i < 400; i++)
  {
    int n = random(0, 14);
    matrix[random(0, 99)].setRGB(RandColorR[n], RandColorG[n], RandColorB[n]);
    FastLED.show();
    delay(dRandom);
  }
}

void Strobo(int dStrobo)
{
  // Ich glaube das schnelle Blitzen überfordert den Arduino, weshalb er aus der Zählschleife immer eine Endlosschleife macht, sobald die Schleife mehr als 5 mal ausgeführt werden soll...
  // das bringt dann das gesamte Programm zum Stillstand, bzw wechselt die Animation nicht mehr weiter

  //Stroboskop
  FastLED.clear();
  for (int i = 0; i < 4; i++)
  {
    Serial.print(i); //Zu Testzwecken, da sich der Zähler bei 4 immer wieder auf 0 zurücksetzt
    //4 Zufällige LEDs auf einmal auswählen um mehrere Punkte auf einmal leuchten zu lassen
    int n1 = random(0, 99);
    int n2 = random(0, 99);
    int n3 = random(0, 99);
    int n4 = random(0, 99);
    

    matrix[n1].setRGB(255, 255, 255);
    matrix[n1 + 5].setRGB(255, 255, 255); //Zusätzliche Pixel im Umfeld der Zufallszahl mit auswählen, um noch mehr gleichzeitig leuchten zu lassen
    matrix[n1 + 12].setRGB(255, 255, 255);
    FastLED.show();
    delay(dStrobo);

    //Aktivieren der nächsten LEDs
    matrix[n2].setRGB(255, 255, 255);
    matrix[n2 + 5].setRGB(255, 255, 255);
    matrix[n2 + 12].setRGB(255, 255, 255);
    FastLED.show();
    delay(dStrobo);

    //Deaktivieren des ersten Durchgangs
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

void Punkt(int dPunkt)
{
  //Runterlaufender Punkt der sich unten anreiht
  FastLED.clear();
  int g = 0;
  for (int i = 0; i < LEDZAHL; i++)
  { 
    g = LEDZAHL - i;// g gibt an, wie viele LED's verbleibend sind und wie oft die Zählschleife des Punktes ausgeführt werden muss
    //Zufällige Auswahl einer Farbe
    int R = random(0, 255);
    int G = random(0, 255);
    int B = random(0, 255);
    
    for (int n = 0; n <= g; n++)
    {
      matrix[n - 1].setRGB(0, 0, 0); //Vorherige LED auf schwarz setzen
      matrix[n].setRGB(R, G, B); //aktueller LED eine Farbe zuweisen
      FastLED.show();
      delay(dPunkt);
    }
  }
}

void PacMan(int dPacMan)
{
  //Für Erklärung der einzelnen Teile s. Vierecke() --> Selbes Prinzip, nur dass das Zweite Bild erneut ausgeführt wird um die Bewegung des Munds darzustellen und auf andere RGB Werte zugegriffen wird
  for (int n = 0; n <= 15; n++) //Zählschleife 15 mal ausführen
  {
    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A2_1R[i]));
      int G = pgm_read_dword(&(A2_1G[i]));
      int B = pgm_read_dword(&(A2_1B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(dPacMan);

    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A2_2R[i]));
      int G = pgm_read_dword(&(A2_2G[i]));
      int B = pgm_read_dword(&(A2_2B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(dPacMan);

    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A2_3R[i]));
      int G = pgm_read_dword(&(A2_3G[i]));
      int B = pgm_read_dword(&(A2_3B[i]));

      matrix[i].setRGB(R, G, B);

    }
    FastLED.show();

    delay(dPacMan);

    for (int i = 0; i < LEDZAHL; i++)
    {
      int R = pgm_read_dword(&(A2_2R[i]));
      int G = pgm_read_dword(&(A2_2G[i]));
      int B = pgm_read_dword(&(A2_2B[i]));

      matrix[i].setRGB(R, G, B);
    }
    FastLED.show();

    delay(dPacMan);
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
  //Delays für die einzelnen Funktionen
  int dViereck = 200;
  int dStrobo = 15;
  int dPacMan = 200;
  int dRandom = 70;
  int dPunkt = 5;

  Vierecke(dViereck);//Vierecke (aus Bild)

  //Strobo(dStrobo);//Strobo

  PacMan(dPacMan); //PacMan (aus Bild)

  Punkt(dPunkt);//laufender Punkt

  Vierecke(dViereck);//Vierecke (aus Bild)

  RandomLED(dRandom);//Zufällige Farben auf Zufälligen LED's
}
