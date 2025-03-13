#include <Wire.h>
#include <arduinoFFT.h>
#include <SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
SSD1306 display(0x3c, 5, 4);

void setup() {
  Serial.begin(115200);
  Serial.println("Setup Commence");

  display.init();
  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_10);
  display.drawString(60,60,"Bonjour");
  display.display();

  
  Serial.println("Setup Fini");
}

void loop() {
}
