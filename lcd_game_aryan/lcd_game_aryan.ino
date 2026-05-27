#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int i = 0;
int j = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  lcd.init();         
  lcd.backlight();
  randomSeed(analogRead(A0)); 
  lcd.setCursor(0, 0);
  lcd.write(byte(255));
  delay(200);
  lcd.setCursor(0,0);
  lcd.print(" ");
}

void loop() {
  j++;
  i++;
  if(i>1)
    i = 0;
  lcd.setCursor(j,i);
  lcd.write(byte(255));
  delay(50);
  lcd.setCursor(j,i);
  lcd.print(" ");
  delay(50);
  
  if(i == 1 && j == 15){
     while(j != 0) {
      j-- ;
      i-- ;
      if(i<0)
        i = 1;
  lcd.setCursor(j,i);
  lcd.write(byte(255));
  delay(50);
  lcd.setCursor(j,i);
  lcd.print(" ");
  delay(50);

    
  }
  }
    
  

}