
/*
 *this is meant to choose a song and be able to move to the next song whenever
 *wire the 3 buttons from ground to one side and then to the pins on the other and then
 *detect low state for the button
 *
 *the combination of the buttons will choose the state of the song and the state will stay
 *at that until another state is selected
 *
 *what is left to do is make a function to be called such that the song plays
 *at set intervals
 *
 *what that means is that the play function for the song is called and keeps track of the last
 *note played and at what time so the next note is played after say 200 milliseconds
 *but in that 200 milliseconds the main function loops again so if the user presses
 *another button it will be able to switch to the start of a new song
 * 
 */

int buttonpin1 = 1;
int buttonpin2 = 2;
int buttonpin3 = 3;
int songstate = 0;
int reading1 = LOW;
int reading2 = LOW;
int reading3 = LOW;

int started1 = 0;
int started2 = 0;
int started3 = 0;

int previous = LOW;

long time = 0;
long debounce = 200;



void setup() {
  //this is for the time to keep track of millis()
  Serial.begin(9600);

  time = millis(); this is for keeping track of time if tou want to
  pinMode(buttonpin1, INPUT_PULLUP);
  pinMode(buttonpin2, INPUT_PULLUP);
  pinMode(buttonpin3, INPUT_PULLUP);


}

void loop() {

  

  reading1 = digitalRead(buttonpin1);
  reading2 = digitalRead(buttonpin2);
  reading3 = digitalRead(buttonpin3);


if (reading1 == LOW && reading2 == HIGH && reading3 == HIGH){
  songstate = 1;
  
}
else if(reading1 == HIGH && reading2 == LOW && reading3 == HIGH){
 songstate = 2;
}
else if(reading1 == HIGH && reading2 == HIGH && reading3 == LOW){
songstate = 3;
}


/*
//compare time elapsed with debounce time, and a switch of the button from low to high
  if (reading == HIGH && previous == LOW && millis() - time > debounce) {
    if (state == HIGH)
      state = LOW;
    else
      state = HIGH;

//keep track of how long it's been
    time = millis();    
  }

//turn on or off the led
  digitalWrite(led, state);

//keep track of the toggle
  previous = reading;
  */
}
