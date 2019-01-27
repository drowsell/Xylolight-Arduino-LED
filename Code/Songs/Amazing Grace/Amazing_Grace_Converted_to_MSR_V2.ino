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
    delay(noteTime);
    msr.clear_shift(noteLetter);
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

playNote(g1, hlf);
playNote(g1, qtr);

// 6

playNote(c1, hlf);
playNote(e1, eth);
playNote(c1, eth);

// 7

playNote(c1, hlf);
playNote(a1, qtr);

// 8

playNote(c1, qtr * 3);

// 9

playNote(g2, hlf);
playNote(e1, qtr);

// 10

playNote(g2, hlf);
playNote(g2, eth);
playNote(e1, eth);

// 11

playNote(c1, hlf);
playNote(g1, qtr);

// 12

playNote(a1, hlf);
playNote(a1, qtr);

// 13

playNote(g1, hlf);
playNote(g1, qtr);

// 14

playNote(c1, hlf);
playNote(e1, eth);
playNote(c1, eth);

// 15

playNote(e1, hlf);
playNote(d1, qtr);

// 16

playNote(c2, hlf);
playNote(c2, hlf);

}
  
  
  
  
  
  
  
  
  
  
  
  
  














  
  
