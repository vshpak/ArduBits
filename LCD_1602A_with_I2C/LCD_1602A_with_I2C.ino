#include <LiquidCrystal_I2C.h>   // for I2C need to add lib (attached to this one source file)
#include <Wire.h> 
LiquidCrystal_I2C lcd(0x27,16,2);  // set up display
void setup()
{
  lcd.init();                     
  lcd.backlight();
  lcd.print("LCD works fine!");
  lcd.setCursor(9, 1);
  lcd.print("V.Shpak");
}
void loop()
{
  lcd.setCursor(0, 1);
  lcd.print(millis()/1000);  //uptime in seconds
}
