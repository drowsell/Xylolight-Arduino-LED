
int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int BUTTON = 4;
int PWRBUTTON = 3;

void setup()
{
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(BUTTON,INPUT);
   pinMode(PWRBUTTON,INPUT);
}

void loop () {

  if(digitalRead(PWRBUTTON) == HIGH)
    {
      digitalWrite(LED1, LOW);     // turn off LED           // wait for 300ms
      digitalWrite(LED2, LOW);     // turn off LED               // wait for 300ms
      digitalWrite(LED3, LOW);     // turn off LED3                  // wait for 300ms before running program all over again;
    }
  else
    {if(digitalRead(BUTTON) == HIGH)
    {
    digitalWrite(LED1, HIGH);    // turn on LED1 
    delay(50);                  // wait for 50ms
    digitalWrite(LED2, HIGH);    // turn on LED2
    delay(50);                  // wait for 50ms       
    digitalWrite(LED3, HIGH);    // turn on LED3 
    delay(50);                  // wait for 50ms
    digitalWrite(LED1, LOW);     // turn off LED1
    delay(50);                  // wait for 300ms
    digitalWrite(LED2, LOW);     // turn off LED2
    delay(50);                  // wait for 300ms
    digitalWrite(LED3, LOW);     // turn off LED3
    delay(50);                  // wait for 300ms before running program all over again;
  
    }else
    { 
    digitalWrite(LED1, HIGH);    // turn on LED1 
    delay(400);                  // wait for 200ms
    digitalWrite(LED2, HIGH);    // turn on LED2
    delay(400);                  // wait for 200ms       
    digitalWrite(LED3, HIGH);    // turn on LED3 
    delay(400);                  // wait for 200ms
    digitalWrite(LED1, LOW);     // turn off LED1
    delay(500);                  // wait for 300ms
    digitalWrite(LED2, LOW);     // turn off LED2
    delay(500);                  // wait for 300ms
    digitalWrite(LED3, LOW);     // turn off LED3
    delay(500);                  // wait for 300ms before running program all over again;
    } 
    }
}
