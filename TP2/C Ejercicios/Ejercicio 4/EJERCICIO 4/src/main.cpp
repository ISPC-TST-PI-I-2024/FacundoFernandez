#include <Arduino.h>
// Definir el pin del potenciómetro y el pin del LED
const int pinPotenciometro = A0; // Pin analógico A0 para el potenciómetro
const int pinLED = 9;            // Pin digital 9 para el LED

void setup() {
  // Configurar el pin del LED como salida
  pinMode(pinLED, OUTPUT);
}

void loop() {
  // Leer el valor del potenciómetro
  int valorPotenciometro = analogRead(pinPotenciometro);

  // Mapear el valor del potenciómetro (0-1023) al rango de PWM (0-255)
  int intensidadLED = map(valorPotenciometro, 0, 1023, 0, 255);

  // Establecer la intensidad del LED utilizando PWM
  analogWrite(pinLED, intensidadLED);
}
