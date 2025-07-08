#include <M5Stack.h>

void setup() {
    M5.begin();
    M5.Lcd.setTextSize(3);
    M5.Lcd.setTextColor(BLUE, BLACK);
    M5.Lcd.setCursor(0, 100);
    M5.Lcd.println("  BLUEWATCH");
    M5.Lcd.setTextSize(2);
    M5.Lcd.println("");
    M5.Lcd.println("  Initializing...");
}

void loop() {
    M5.update();
    
    if (M5.BtnA.wasPressed()) {
        M5.Lcd.fillScreen(BLACK);
        M5.Lcd.setCursor(0, 100);
        M5.Lcd.println("  Button A Pressed");
    }
    
    if (M5.BtnB.wasPressed()) {
        M5.Lcd.fillScreen(BLACK);
        M5.Lcd.setCursor(0, 100);
        M5.Lcd.println("  Button B Pressed");
    }
    
    if (M5.BtnC.wasPressed()) {
        M5.Lcd.fillScreen(BLACK);
        M5.Lcd.setCursor(0, 100);
        M5.Lcd.println("  Button C Pressed");
    }
    
    delay(10);
}