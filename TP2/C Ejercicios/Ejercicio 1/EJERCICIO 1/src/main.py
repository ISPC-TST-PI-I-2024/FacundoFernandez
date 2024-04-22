from machine import Pin
import time

# Definir los pines para el botón y el LED
boton_pin = Pin(2, Pin.IN)  # Pin del botón conectado a D2
led_pin = Pin(13, Pin.OUT)   # Pin del LED conectado a D13

while True:
    # Leer el estado del botón
    estado_boton = boton_pin.value()

    # Si el botón está presionado, encender el LED
    if estado_boton == 1:
        led_pin.on()
    else:
        led_pin.off()

    # Esperar un breve período de tiempo antes de volver a leer el botón
    time.sleep(0.1)
