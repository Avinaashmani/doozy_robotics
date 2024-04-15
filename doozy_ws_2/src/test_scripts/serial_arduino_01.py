#!/usr/bin/env python3
import serial
import time

def main():
    arduino = serial.Serial(port='/dev/ttyUSB0', baudrate=9600, timeout=0.1)

    msg_write = "START_PYTHON_COMM"
    arduino.write(msg_write.encode())
    arduino.flush()

    msg_write = "578"
    arduino.write(msg_write.encode())
    arduino.flush()

    msg_read = arduino.readline().decode('utf-8')
    print(msg_read)

if __name__=='__main__':
    while True:
        main()

