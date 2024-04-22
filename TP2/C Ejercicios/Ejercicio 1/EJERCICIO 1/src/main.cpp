#include <Arduino.h>

// Definir los pines para el botón y el LED
const int botonPin = 2; // Pin del botón conectado a D2
const int ledPin = 13;  // Pin del LED conectado a D13

// Variable para almacenar el estado del botón
int estadoBoton;

void setup() {
  // Configurar el pin del botón como entrada
  pinMode(botonPin, INPUT);

  // Configurar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Leer el estado del botón
  estadoBoton = digitalRead(botonPin);

  // Si el botón está presionado, encender el LED
  if (estadoBoton == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
