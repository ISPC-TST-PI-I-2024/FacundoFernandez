#include <Arduino.h>

#define LED1 18 // Definir el pin al que está conectado el LED

void setup() {
  pinMode(LED1, OUTPUT); // Configurar el pin del LED como salida
}

void loop() {
  digitalWrite(LED1, HIGH); // Encender el LED
  delay(1000); // Esperar 1 segundo
  digitalWrite(LED1, LOW); // Apagar el LED
  delay(1000); // Esperar 1 segundo
}
