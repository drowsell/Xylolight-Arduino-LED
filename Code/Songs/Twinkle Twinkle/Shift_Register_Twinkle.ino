#include <MultiShiftRegister.h>

int latchPin = 8;
int clockPin = 12;
int dataPin = 11;

MultiShiftRegister msr (2, latchPin, clockPin, dataPin);

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  msr.shift();

}

void loop()
{

  msr.set_shift(3); //Number in Bracket + 1 = light number
   
  delay(500);

  msr.clear_shift(3);
  
  delay(500);

  
  msr.set_shift(3); //Number in Bracket + 1 = light number
   
  delay(500);

  msr.clear_shift(3);
  
  delay(500);
  

  msr.set_shift(7); //Number in Bracket + 1 = light number
   
  delay(500);

  msr.clear_shift(7);
  
  delay(500);

  
  msr.set_shift(7); //Number in Bracket + 1 = light number
   
  delay(500);

  msr.clear_shift(7);
  
  delay(500);

  msr.set_shift(8); //Number in Bracket + 1 = light number
   
  delay(500);

  msr.clear_shift(8);
  
  delay(500);

  msr.set_shift(8); //Number in Bracket + 1 = light number
   
  delay(500);

  msr.clear_shift(8);
  
  delay(500);
  msr.set_shift(7); //Number in Bracket + 1 = light number
   
  delay(1000);

  msr.clear_shift(7);
  
  delay(1000);
  msr.set_shift(6); //Number in Bracket + 1 = light number
   
  delay(500);

  msr.clear_shift(6);
  
  delay(500);
  msr.set_shift(6); //Number in Bracket + 1 = light number
   
  delay(500);

  msr.clear_shift(6);
  
  delay(500);
  msr.set_shift(5); //Number in Bracket + 1 = light number
   
  delay(500);

  msr.clear_shift(5);
  
  delay(500);

  msr.set_shift(5); //Number in Bracket + 1 = light number
   
  delay(500);

  msr.clear_shift(5);
  
  delay(500);

    msr.set_shift(4); //Number in Bracket + 1 = light number
   
  delay(500);

  msr.clear_shift(4);
  
  delay(500);
  msr.set_shift(4); //Number in Bracket + 1 = light number
   
  delay(500);

  msr.clear_shift(4);
  
  delay(500);

 
}
