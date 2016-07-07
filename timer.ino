
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
int Pa = 13;
int Pl = 12;
int St = 8;
int BPa = 0;
int BPl = 0;
int BSt = 0;
int POX = 0;
int V = 0;
int R = 0;
int J = 0;


LiquidCrystal_I2C lcd(0x27,16,2);   

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  lcd.init();                                  
  lcd.backlight();                       
}

void loop()
{
  BPa = digitalRead(Pa);
  BPl = digitalRead(Pl);
  BSt = digitalRead(St);
  if (BPa == HIGH)
  {
    POX = 1;
  }
  if (BPl == HIGH)
  {
    POX = 2;
  }
  if (BSt == HIGH)
  {
    POX = 3;
  }
  
  
  
   if (POX == 1)
  {
    if (R <= 9 )
  {
  if (V <= 9 )
  {
  lcd.print("0");
  lcd.print(R);
  lcd.print(":");
  lcd.print("0");
  lcd.print(V);
  delay(1000);
  lcd.clear();
  }
  if (V >= 10)
  {
  lcd.print("0");
  lcd.print(R);
  lcd.print(":");
  lcd.print(V);
  delay(1000);
  lcd.clear();
  }
  }
  if (R >= 10 )
  {
  if (V <= 9 )
  {
  lcd.print(R);
  lcd.print(":");
  lcd.print("0");
  lcd.print(V);
  delay(1000);
  lcd.clear();
  }
  if (V >= 10)
  {
  lcd.print(R);
  lcd.print(":");
  lcd.print(V);
  delay(1000);
  lcd.clear();
  }
  }  
  }
  
  
  
  
  if (POX == 2)
  {
  if (R <= 9 )
  {
  if (V <= 9 )
  {
  lcd.print("0");
  lcd.print(R);
  lcd.print(":");
  lcd.print("0");
  lcd.print(V);
  delay(1000);
  lcd.clear();
  V ++;
  if (V >= 60)
  {
    V = 0;
    R++;
  }
  }
  if (V >= 10)
  {
  lcd.print("0");
  lcd.print(R);
  lcd.print(":");
  lcd.print(V);
  delay(1000);
  lcd.clear();
  V ++;
  if (V >= 60)
  {
    V = 0;
    R++;
  }
  }
  }
  if (R >= 10 )
  {
  if (V <= 9 )
  {
  lcd.print(R);
  lcd.print(":");
  lcd.print("0");
  lcd.print(V);
  delay(1000);
  lcd.clear();
  V ++;
  if (V >= 60)
  {
    V = 0;
    R++;
  }
  }
  if (V >= 10)
  {
  lcd.print(R);
  lcd.print(":");
  lcd.print(V);
  delay(1000);
  lcd.clear();
  V ++;
  if (V >= 60)
  {
    V = 0;
    R++;
  }
  }
  }
  }
  
  
  
  
  
   if (POX == 3)
  {
    
    if (R <= 9 )
  {
  if (V <= 9 )
  {
  lcd.setCursor(0, 0);
  lcd.clear();
  lcd.setCursor(1, 1);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("0");
  lcd.print(R);
  lcd.print(":");
  lcd.print("0");
  lcd.print(V);
  }
  if (V >= 10)
  {
  lcd.setCursor(0, 0);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("0");
  lcd.print(R);
  lcd.print(":");
  lcd.print(V);
  }
  }
  if (R >= 10 )
  {
  if (V <= 9 )
  {
  lcd.setCursor(0, 0);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print(R);
  lcd.print(":");
  lcd.print("0");
  lcd.print(V);
  }
  if (V >= 10)
  {
  lcd.setCursor(0, 0);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print(R);
  lcd.print(":");
  lcd.print(V);
  }
  }
  delay(1000);
   R = 0;
   V = 0;
   POX = 0;  
   lcd.setCursor(0, 0);
   
  }
  

 
}
