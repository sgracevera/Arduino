

#define button1 9
#define button2 8
#define led 11

int buttonState1 = 0; 
int buttonState2 = 0;

void setup() {
  
  pinMode(led, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  
}

void loop() {
 
  buttonState1 = digitalRead(button1);
  buttonState2 = digitalRead(button2);

  if(buttonState1 && buttonState2 == HIGH) {
    // both buttons are pressed:
    digitalWrite(led, HIGH); //led turns on
  } 
   else {
    // one of the buttons is pressed or none of them:
    digitalWrite(led, LOW); //led turns off
  }
}
