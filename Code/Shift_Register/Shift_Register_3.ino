#include <MultiShiftRegister.h>

int latchPin = 8;
int clockPin = 12;
int dataPin = 11;

MultiShiftRegister msr (1, latchPin, clockPin, dataPin);

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  msr.shift();

}

void loop()
{
  msr.set_shift(7); //Number in Bracket + 1 = light number
   
  delay(100);

  msr.clear_shift(7);
  
  delay(100);

  msr.set_shift(3); //Number in Bracket + 1 = light number
   
  delay(100);

  msr.clear_shift(3);
  
  delay(100); 
  
}
