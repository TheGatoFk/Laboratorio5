import serial
import time

# Abre la conexión serial con Arduino
puerto = '/dev/ttyACM0'  
velocidad = 9600
ser = serial.Serial(puerto, velocidad, timeout=1)
time.sleep(2)  

try:
    # Enciende y apaga el LED tres veces
    for _ in range(3):
        # Enciende el LED
        ser.write(b'A')
        print('Encendiendo el LED...')
        time.sleep(3)  # Espera 3 segundos

        # Apaga el LED
        ser.write(b'B')
        print('Apagando el LED...')
        time.sleep(1)  # Espera 1 segundo

except KeyboardInterrupt:
    ser.close()
    print('Programa detenido por el usuario.')

print("\nsaliendo del programa...")