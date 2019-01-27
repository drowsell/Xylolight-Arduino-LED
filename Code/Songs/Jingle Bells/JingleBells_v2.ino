#include <MultiShiftRegister.h>

int latchPin = 8;
int clockPin = 12;
int dataPin = 11;


unsigned int g1=0, a1=1, b1=2, c1=3, d1=4, e1=5, f1=6, g2=7, a2=8, b2=9, c2=10, d2=11, e2=12, f2=13, g3=14;
  

// Variable to set speed of song 

  float songTempo = 0.5; //change this value to speed up or slow down song.

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


// Jingle Bells Song Demo

// 1

playNote(e1, qtr);
playNote(e1, qtr);
playNote(e1, hlf);
playNote(e1, qtr);
playNote(e1, qtr);
playNote(e1, hlf);
playNote(e1, qtr);
playNote(g1, qtr);
playNote(c1, qtr);
playNote(d1, qtr);
playNote(e1, hlf);
playNote(f1, qtr);
playNote(f1, qtr);
playNote(f1, (qtr+eth));
playNote(f1, eth);
playNote(f1, qtr);
playNote(e1, qtr);
playNote(e1, qtr);
playNote(e1, eth);
playNote(e1, eth);
playNote(e1, qtr);
playNote(d1, qtr);
playNote(d1, qtr);
playNote(e1, qtr);
playNote(d1, hlf);
playNote(g2, hlf);
playNote(e2, qtr);
playNote(e2, qtr);
playNote(e2, hlf);
playNote(e2, qtr);
playNote(e2, qtr);
playNote(e2, hlf);
playNote(e2, qtr);
playNote(g3, qtr);
playNote(c2, qtr);
playNote(d2, qtr);
playNote(e2, hlf);
playNote(f2, qtr);
playNote(f2, qtr);
playNote(f2, (qtr+eth));
playNote(f2, eth);
playNote(f2, qtr);
playNote(e2, qtr);
playNote(e2, qtr);
playNote(e2, eth);
playNote(e2, eth);
playNote(g3, qtr);
playNote(g3, qtr);
playNote(f2, qtr);
playNote(d2, qtr);
playNote(c2, qtr);


for (int i = 0; i<= 14; i++){

msr.set_shift(i);

delay(50);
}

delay(400);

for (int i = 0; i<= 14; i++){
msr.clear_shift(14-i);
delay(50);
}



}
