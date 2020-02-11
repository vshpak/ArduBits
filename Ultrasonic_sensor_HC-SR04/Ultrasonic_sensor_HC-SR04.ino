#include <LiquidCrystal_I2C.h>   // for I2C need to add lib (attached to this one source file)
#include <Wire.h> 
LiquidCrystal_I2C lcd(0x27,16,2);  // set up display

const int trigPin = 9;
const int echoPin = 10;
long duration;
int distanceCm, distanceInch;

void setup()
{
  lcd.init();                     
  lcd.backlight();
  lcd.print("LCD works fine!");
  lcd.setCursor(9, 1);
  lcd.print("V.Shpak");

  delay(3000);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm= duration*0.034/2;
  distanceInch = duration*0.0133/2;

  lcd.clear();
  lcd.setCursor(0,0);         // Sets the location at which subsequent text written to the LCD will be displayed
  lcd.print("Distance: ");    // Prints string "Distance" on the LCD
  lcd.print(distanceCm);      // Prints the distance value from the sensor
  lcd.print(" cm");
  delay(10);
  lcd.setCursor(0,1);
  lcd.print("Distance: ");
  lcd.print(distanceInch);
  lcd.print(" inch");
  delay(100);
}
