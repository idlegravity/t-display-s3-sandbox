#include <Arduino.h>
#include <TFT_eSPI.h>
#include "background.h"

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.setRotation(3); // USB on the left
  tft.setSwapBytes(true);

  tft.fillScreen(TFT_WHITE);
  tft.pushImage(106, 0, 214, 170, background);
  tft.setTextColor(TFT_BLACK, TFT_WHITE, false);
  tft.drawString("Hello, World!", 10, 80, 4);
}

void loop() {
  // put your main code here, to run repeatedly:
}