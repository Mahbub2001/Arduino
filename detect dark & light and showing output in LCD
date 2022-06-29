#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(A7,INPUT);
  pinMode(7,OUTPUT);

}
int a;

void loop() {

  a = analogRead(A7);

  if(a < 200)
  {
    lcd.print("Out of light");
  }
  else
    {
    lcd.print("You are in light"); 
    }

  if(a < 200)
     {
    for(int i = 0; i < 4; i++)
    {
      digitalWrite(7,HIGH);
      delay(30);
      digitalWrite(7,LOW);
      delay(30);  
    } 
  }
  else
  {
    for(int i = 0; i < 2; i++)
    {
      digitalWrite(7,HIGH);
      delay(60);
      digitalWrite(7,LOW);
      delay(60);  
     } 
    }
delay(1000);
lcd.clear();  
}
