import serial
import time

# Inicializar la conexión serial (cambiar el puerto COM según corresponda)
ser = serial.Serial('COM3', 9600)

while True:
    # Leer la línea de la comunicación serial
    linea = ser.readline().decode().strip()
    
    # Imprimir la temperatura en la consola
    print(linea)

    # Esperar un breve período de tiempo antes de leer la próxima línea
    time.sleep(1)
