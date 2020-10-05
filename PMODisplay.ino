/************************************************************************
*
* Test of the Pmod 
*
*************************************************************************
* Description: Pmod_OLEDRGB
* The message "Test module Pmod Digilent Lextronic" will be display on OLEDrgb module
* with different size and colors
*
* Material
* 1. Arduino Uno
* 2. Pmod OLEDrgb (Download libraries
* https://github.com/adafruit/Adafruit-SSD1331-OLED-Driver-Library-for-Arduino
* https://github.com/adafruit/Adafruit-GFX-Library)
*
*************************************************************************/

// Affectation of pins
#define sck 13
#define mosi 11
#define cs 10
#define res 9
#define dc 8

// Définition of colors
#define NOIR 0x0000
#define BLEU 0x001F
#define ROUGE 0xF800
#define VERT 0x07E0
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define JAUNE 0xFFE0
#define BLANC 0xFFFF

// Call libraries
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1331.h>
#include <SPI.h>

Adafruit_SSD1331 afficheur = Adafruit_SSD1331(cs, dc, mosi, sck, res); //création of object

void setup(void)
{
 afficheur.begin(); // initialization of display objcet
}

void loop()
{
 afficheur.fillScreen(NOIR); // background screen in black
 afficheur.setTextColor(CYAN); // color of text in cyan
 afficheur.setCursor(0,0); // cursor is in x=0 and y=15
 afficheur.print("Test module Pmod"); // display text
 delay(500); // wait 500 ms
 afficheur.setCursor(0,15); // cursor is in x=0 and y=15
 afficheur.setTextSize(2); // size of text
 afficheur.setTextColor(ROUGE); // text in red color
 afficheur.println("DIGILENT"); // display text
 afficheur.setCursor(20,40); // cursor is in x=20 and y=40
 afficheur.setTextSize(1); // size of text
 afficheur.setTextColor(VERT); // text in green color
 afficheur.println("LEXTRONIC"); // display text
 afficheur.drawFastHLine(1, 60, afficheur.width()-1, BLEU); // blue line x=1 to screen width-1 and y=60
 delay(2000); // wait 2 s
 afficheur.fillScreen(NOIR); // background display in black (erase display)
 afficheur.fillRoundRect(5, 5, 30, 40, 5, BLEU); // French flag bleu blanc rouge
 afficheur.fillRoundRect(35, 5, 30, 40, 5, BLANC);
 afficheur.fillRoundRect(65, 5, 30, 40, 5, ROUGE);
 afficheur.fillCircle(90, 55, 5, JAUNE); // yellow circle with radius=5 in=90 and y=55
 delay(2000); // wait 2 s
}
