#include <MultiShiftRegister.h>

int latchPin = 8;
int clockPin = 12;
int dataPin = 11;


unsigned int g1=0, a1=1, b1=2, c1=3, d1=4, e1=5, f1=6, g2=7, a2=8, b2=9, c2=10, d2=11, e2=12, f2=13, g3=14;
  


MultiShiftRegister msr (2, latchPin, clockPin, dataPin);

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  msr.shift();

    

}

void loop()
{

  msr.set_shift(g1); //Number in Bracket + 1 = light number
   
  delay(1000);

  msr.clear_shift(g1);
  
  delay(1000);

  msr.set_shift(c1);
   
  delay(2000);

  msr.clear_shift(c1);
  
  delay(2000);

  msr.set_shift(e1); 
   
  delay(500);

  msr.clear_shift(e1);
  
  delay(500);

  msr.set_shift(c1); 
   
  delay(500);

  msr.clear_shift(c1);
  
  delay(500);

  
  msr.set_shift(e1); 
   
  delay(2000);

  msr.clear_shift(e1);
  
  delay(2000);

  
  msr.set_shift(d1); 
   
  delay(1000);

  msr.clear_shift(d1);
  
  delay(1000);

  
  msr.set_shift(c1); 
   
  delay(2000);

  msr.clear_shift(c1);
  
  delay(2000);

  
  msr.set_shift(a1); 
   
  delay(1000);

  msr.clear_shift(a1);
  
  delay(1000);

  
  msr.set_shift(g1); 
   
  delay(2000);

  msr.clear_shift(g1);
  
  delay(2000);


  msr.set_shift(g1); 
   
  delay(1000);

  msr.clear_shift(g1);
  
  delay(1000);

  
  msr.set_shift(c1); 
   
  delay(2000);

  msr.clear_shift(c1);
  
  delay(2000);
  
  msr.set_shift(e1); 
   
  delay(500);

  msr.clear_shift(e1);
  
  delay(500);

  
  msr.set_shift(c1); 
   
  delay(500);

  msr.clear_shift(c1);
  
  delay(500);

  
  msr.set_shift(c1); 
   
  delay(2000);

  msr.clear_shift(c1);
  
  delay(2000);

  
  msr.set_shift(a1); 
   
  delay(1000);

  msr.clear_shift(a1);
  
  delay(1000);

  
  msr.set_shift(c1); 
   
  delay(1000);

  msr.clear_shift(c1);
  
  delay(1000);

    msr.set_shift(c1); 
   
  delay(1000);

  msr.clear_shift(c1);
  
  delay(1000);

    msr.set_shift(c1); 
   
  delay(1000);

  msr.clear_shift(c1);
  
  delay(1000);

  msr.set_shift(g2); 
   
  delay(2000);

  msr.clear_shift(g2);
  
  delay(2000);

  msr.set_shift(g2); 
   
  delay(500);

  msr.clear_shift(g2);
  
  delay(500);

  msr.set_shift(e1); 
   
  delay(500);

  msr.clear_shift(e1);
  
  delay(500);

  msr.set_shift(c1); 
   
  delay(2000);

  msr.clear_shift(c1);
  
  delay(2000);

  msr.set_shift(g1); 
   
  delay(1000);

  msr.clear_shift(g1);
  
  delay(1000);

  msr.set_shift(a1); 
   
  delay(2000);

  msr.clear_shift(a1);
  
  delay(2000);

  msr.set_shift(a1); 
   
  delay(1000);

  msr.clear_shift(a1);
  
  delay(1000);

  msr.set_shift(g1); 
   
  delay(2000);

  msr.clear_shift(g1);
  
  delay(2000);

  msr.set_shift(g1); 
   
  delay(1000);

  msr.clear_shift(g1);
  
  delay(1000);

  msr.set_shift(c1); 
   
  delay(2000);

  msr.clear_shift(c1);
  
  delay(2000);

  msr.set_shift(e1); 
   
  delay(500);

  msr.clear_shift(e1);
  
  delay(500);

  msr.set_shift(c1); 
   
  delay(500);

  msr.clear_shift(c1);
  
  delay(500);

  msr.set_shift(e1); 
   
  delay(2000);

  msr.clear_shift(e1);
  
  delay(2000);

  msr.set_shift(d1); 
   
  delay(1000);

  msr.clear_shift(d1);
  
  delay(1000);

  msr.set_shift(c2); 
   
  delay(2000);

  msr.clear_shift(c2);
  
  delay(2000);

  msr.set_shift(c2); 
   
  delay(2000);

  msr.clear_shift(c2);
  
  delay(2000);
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  














  
  
}
