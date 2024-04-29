#include <Arduino.h>

#define LED1 18
#define BTN1 34

bool estado_led1 = LOW; 

void setup() {
  pinMode(LED1, OUTPUT); 
  pinMode(BTN1, INPUT_PULLUP); 
}

void loop() {
  if (digitalRead(BTN1) == LOW) { 
    delay(50); 
    if (digitalRead(BTN1) == LOW) { 
      
      estado_led1 = !estado_led1;
      digitalWrite(LED1, estado_led1);
      
      while (digitalRead(BTN1) == LOW) {}
    }
  }
}
