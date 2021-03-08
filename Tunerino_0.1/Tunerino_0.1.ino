#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  lcd.begin();
  lcd.backlight();
}

void loop() {

}
