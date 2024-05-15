#include <LiquidCrystal.h>
LiquidCrystal MyLCD(12,11,5,4,3,2);
const int LM_35=A0;
float temp=0;
int input_val = 0;

void setup() {
 
  MyLCD.begin(16,2);
    MyLCD.home();
    MyLCD.println("Temperature is :");
        MyLCD.setCursor(0,1);
           
}

void loop() 
{
input_val = analogRead(LM_35);
temp = (5.0*input_val*100.0)/1024;
delay(1000);
 MyLCD.println( temp );
}
