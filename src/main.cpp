#include <Arduino.h>

#define LED0 0
int ledd;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED0, OUTPUT);

  for (ledd = 1; ledd < 14; ledd++) 
  {
    pinMode(ledd, OUTPUT);
    digitalWrite(ledd, HIGH);
  }

  for (ledd = 15; ledd < 18; ledd++) 
  {
    pinMode(ledd, OUTPUT);
    digitalWrite(ledd, HIGH);
  }

 for (ledd = 33; ledd < 46; ledd++) 
  {
    pinMode(ledd, OUTPUT);
    digitalWrite(ledd, HIGH);
  }

  for (ledd = 18; ledd < 22; ledd++) 
  {
    pinMode(ledd, OUTPUT);
    digitalWrite(ledd, HIGH);
  }

  pinMode(26, OUTPUT);
  digitalWrite(26, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED0, HIGH); //Turn on
  Serial.println("LED ON");
  delay (2000); //Wait 1 sec
  digitalWrite(LED0, LOW); //Turn off
  Serial.println("LED OFF");
  delay (2000); //Wait 1 sec
}