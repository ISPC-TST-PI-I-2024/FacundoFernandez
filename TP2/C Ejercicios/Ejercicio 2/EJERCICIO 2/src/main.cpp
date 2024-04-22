#include <Arduino.h>
// Definir el pin al que está conectado el sensor de temperatura
const int pinSensorTemperatura = A0;  // Pin analógico A0

void setup() {
  // Inicializar comunicación serial a una velocidad de 9600 baudios
  Serial.begin(9600);
}

void loop() {
  // Leer el valor analógico del sensor de temperatura
  int valorSensor = analogRead(pinSensorTemperatura);

  // Convertir el valor analógico a temperatura en grados Celsius
  float temperatura = (valorSensor * 5.0 / 1024.0) * 100.0;

  // Mostrar la temperatura en el Serial Monitor
  
