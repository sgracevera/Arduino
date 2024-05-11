

//LED turns on when room is dark

#define LED 9

void setup() {
  Serial.begin(9600);
}

void loop() {

  int sensorValue = analogRead(A0);

  Serial.println(sensorValue);
  delay(25);  
  
  if (sensorValue > 628) {
   
    digitalWrite(LED, HIGH);
    
  }
 	 else  {
    digitalWrite(LED, LOW);
  }
}
