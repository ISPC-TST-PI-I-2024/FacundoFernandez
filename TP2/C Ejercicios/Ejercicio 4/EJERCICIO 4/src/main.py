import RPi.GPIO as GPIO
import time

# Definir los pines del potenciómetro y el LED
pin_potenciometro = 17  # Pin GPIO para el potenciómetro
pin_LED = 18            # Pin GPIO para el LED

# Configurar la librería GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setup(pin_potenciometro, GPIO.IN)
GPIO.setup(pin_LED, GPIO.OUT)
pwm_led = GPIO.PWM(pin_LED, 100)  # Configurar el LED para PWM con frecuencia de 100Hz
pwm_led.start(0)  # Iniciar el PWM con ciclo de trabajo 0

try:
    while True:
        # Leer el valor del potenciómetro (0-1023)
        valor_potenciometro = GPIO.input(pin_potenciometro)

        # Mapear el valor del potenciómetro (0-1023) al rango de PWM (0-100)
        intensidad_led = (valor_potenciometro / 1023.0) * 100

        # Establecer la intensidad del LED utilizando PWM
        pwm_led.ChangeDutyCycle(intensidad_led)

        # Esperar un breve período de tiempo
        time.sleep(0.1)

except KeyboardInterrupt:
    # Detener el PWM y limpiar los pines GPIO
    pwm_led.stop()
    GPIO.cleanup()
