#include <stdio.h>
//#include <pitches.h> // Saving for future if we want to add sound


// All note positions // needs to be optimized for expandability with for loop TO DO

  unsigned int g1=1, a1=2, b1=3, c1=4, d1=5, e1=6, f1=7, g2=8, a2=9, b2=10, c2=11, d2=12, e2=13, f2=14, g3=15;
  unsigned int notes[15] = {g1, a1, b1, c1, d1, e1, f1, g2, a2, b2, c2, d2, e2, f2, g3};


// Function to play a note for a specific amount of time

  int playNote(unsigned int noteLetter, unsigned int noteTime){
    digitalWrite(noteLetter, HIGH);
    delay(noteTime);
    digitalWrite(noteLetter,LOW);
    return 0;
  }


// Variable to set speed of song 

  float songTempo = 1; //change this value to speed up or slow down song.

// Variables for note timings

  int sxth = 250 * (1 / songTempo); //16th
  int eth = 500 * (1 / songTempo); //8th
  int qtr = 1000 * (1 / songTempo); //quarter
  int hlf = 2000 * (1 / songTempo); //half
  int whl = 4000 * (1 / songTempo); // whole

//

void setup() {

for (int i = 1; i<9;i++){
  pinMode(i,OUTPUT);
}


/* Future expandability for assigning note values
  for (int i = 1; i < 16; i++){
      notes[i-1] = i; // assign all note values
  }
*/

}

void loop() {

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
