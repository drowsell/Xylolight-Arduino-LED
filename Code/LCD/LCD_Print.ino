/*

 The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalAutoscroll

*/

#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);



void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

//the following two functions makes it so it can print things longer than 16 chars


void printlcd(String t){
//lcd.setCursor(0,0);

if (t.length()>16){
  String first;
  first = t.charAt(0);
  for (int i=1;i<16;i++){
    first += t.charAt(i);
  }
  lcd.print(first);
  delay(500);
  lcd.autoscroll();
  for (int i=16;i<t.length();i++){
    lcd.print(t.charAt(i));
    delay(500);
  }
}
 else{
  lcd.print(t);
 }

}


//this function is just to reset the lcd
void resetlcd(){
  lcd.clear();
  lcd.setCursor(0,0);
}



void loop() {
  /*
  // set the cursor to (0,0):
  lcd.setCursor(0, 0);
  // print from 0 to 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    printlcd(thisChar);
    delay(500);
  }

lcd.clear();
printlcd("1234567890123456");
delay(2000);
*/
resetlcd();
printlcd("My name is Teddy YOLO SWOLO");
delay(1000);

lcd.noAutoscroll();
resetlcd();




/*
  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
  // print from 0 to 9:
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    lcd.print(thisChar);
    delay(500);
  }

  
  // turn off automatic scrolling
  lcd.noAutoscroll();

  // clear screen for the next loop:
  lcd.clear();

  */
}
