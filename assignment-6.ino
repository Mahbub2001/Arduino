#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

String a = "Hello Everyone";
String b = "I'm Turza";
String c = "I'm from Dhaka";
String d = "I read in";
String e = "NSU";

void setup()
{
  lcd.init();
  lcd.backlight();
 
}

void loop()
{
  
 display(a,b,c,d,e);// Type your text
 delay(20);

}

void display(String a, String b,String c, String d, String e){
  lcd.setCursor(1,0);
  lcd.print(a);
  delay(600);
  lcd.clear();
  
  lcd.setCursor(3,0);
  lcd.print(b);
  delay(600);
  lcd.clear();

  lcd.setCursor(1,0);
  lcd.print(c);
  delay(600);
  lcd.clear();

  lcd.setCursor(3,0);
  lcd.print(d);
  lcd.setCursor(6,1);
  lcd.print(e);
  delay(600);
  lcd.clear();
}
