#include <LiqudCrystal.h>
LiquidCrystal lcd(7,8,9,10,11,12);

void setup(){
lcd.begin(16,2);
lcd.print("That's OK")
}
