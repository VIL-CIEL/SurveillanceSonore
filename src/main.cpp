#include <Wire.h>
#include <SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
SSD1306 display(0x3c, 5, 4);

#define TIME 1000
#define X 10
#define Y 10
int LOOP = 0;
String tab[] = {"Bonjour","Et Bienvenue","Au Lycée","Edouard Branly"};

void setup() {
  display.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_16);
}

void loop() {
  if(LOOP > tab->length())
    LOOP = 0;

  display.clear();
  display.drawString(X,Y,tab[LOOP]);
  display.display();
  delay(TIME);
  LOOP += 1;
}