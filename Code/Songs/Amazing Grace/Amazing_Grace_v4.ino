// All note positions // needs to be optimized for expandability TO DO
  unsigned int g1=1, a1=2, b1=3, c1=4, d1=5, e1=6, f1=7, g2=8, a2=9, b2=10, c2=11, d2=12, e2=13, f2=14, g3=15;
  unsigned int notes[15] = {g1, a1, b1, c1, d1, e1, f1, g2, a2, b2, c2, d2, e2, f2, g3};

// Function to play a note for a specific amount of time

  int playNote(unsigned int noteLetter, unsigned int noteTime){
    digitalWrite(noteLetter, HIGH);
    delay(noteTime);
    digitalWrite(noteLetter,LOW);
    return 0;
  }

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
