
/*
 * Wire the circuit with led coming out of led pin and led has 330 ohm resistor
 * Button is wired to buttonpin
 * 
 * INPUT_PULLUP means that the button runs through a 101k ohm resistor internally so the led does not dim when it is in use
 * 
 * the time variable is to track how long it has been since the button was last pressed
 * the debounce time is so that we account for small variations in the press ... like sparks, or accidental presses
 * 
 * the state simply toggles whenever the button state goes from low to high
 * 
 */
int led = 10;
int buttonpin = 2;
int state = HIGH;
int reading;
int previous = LOW;

long time = 0;
long debounce = 200;



void setup() {
  //this is for the time to keep track of millis()
  Serial.begin(9600);
  pinMode(buttonpin, INPUT_PULLUP);
  pinMode(led, OUTPUT);

}

void loop() {

  

  reading = digitalRead(buttonpin);


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
}
