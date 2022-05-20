#define m1 2
#define m2 3
#define m3 13
int buttonState = 0;
void setup()
{
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  
}

void loop()
{
  buttonState = digitalRead(13);
  if (buttonState == HIGH) {
     digitalWrite(m1, HIGH);
 	 digitalWrite(m2, LOW);
     
  }
  else{
     digitalWrite(m1, LOW);
  	 digitalWrite(m2, HIGH);
  }
  delay(1000);
  
  
}