#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2); // (RS, E, DB4, DB5, DB6, DB7)
 
void setup(){ 
  lcd.begin(16, 2); 
  lcd.setCursor(0, 0);
  lcd.print("LCD works fine!!");
  lcd.setCursor(0, 1);
  lcd.print("1");
}
 
void loop(){
}
