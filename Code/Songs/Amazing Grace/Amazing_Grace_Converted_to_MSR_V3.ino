#include <MultiShiftRegister.h>

int latchPin = 8;
int clockPin = 12;
int dataPin = 11;


unsigned int g1=0, a1=1, b1=2, c1=3, d1=4, e1=5, f1=6, g2=7, a2=8, b2=9, c2=10, d2=11, e2=12, f2=13, g3=14;
  

// Variable to set speed of song 

  float songTempo = 1; //change this value to speed up or slow down song.

// Variables for note timings

  float sxth = 250 * (1 / songTempo); //16th
  float eth = 500 * (1 / songTempo); //8th
  float qtr = 1000 * (1 / songTempo); //quarter
  float hlf = 2000 * (1 / songTempo); //half
  float whl = 4000 * (1 / songTempo); // whole



MultiShiftRegister msr (2, latchPin, clockPin, dataPin);

// Function to play a note for a specific amount of time

  int playNote(unsigned int noteLetter, unsigned int noteTime){
    msr.set_shift(noteLetter);
    delay(noteTime-(noteTime/10));
    msr.clear_shift(noteLetter);
    delay(noteTime/10);
    return 0;
  }

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  msr.shift();

    

}

void loop()
{


// Amazing Grace Song Demo

// 1

playNote(g1, qtr);


// 2

playNote(c1, hlf);
playNote(e1, eth);
playNote(c1, eth);

// 3

playNote(e1, hlf);
playNote(d1, qtr);

// 4

playNote(c1, hlf);
playNote(a1, qtr);

// 5

playNote(g1, hlf); //end
playNote(g1, qtr);

// 6

playNote(c1, hlf);
playNote(e1, eth);
playNote(c1, eth);

// 7

playNote(e1, hlf);
playNote(d1, qtr);

// 8

playNote(g2, qtr * 3);

// 9

playNote(e1, qtr);

// 10

playNote(g2, qtr);
playNote(e1, eth);

// 11


playNote(g2, eth);
playNote(e1, eth);
playNote(c1, hlf);

// 12

playNote(g1, qtr);
playNote(a1, qtr);

// 13

playNote(c1, qtr);
playNote(c1, qtr);

// 14

playNote(a1, eth);
playNote(g1, qtr);
playNote(g1, qtr);

// 15

playNote(c1, qtr);
playNote(e1, qtr);

// 16

playNote(c1, qtr);
playNote(e1, qtr);

playNote(d1, qtr);
playNote(c2, hlf);


for (int i = 0; i<= 14; i++){

msr.set_shift(i);

delay(50);
}

delay(400);

for (int i = 0; i<= 13; i++){
msr.clear_shift(i);
delay(50);
}
msr.clear_shift(14);

}



  
  
  
  
  
  
  
  
  
  
  
  
  














  
  
