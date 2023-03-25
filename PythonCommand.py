#serial comand to arduino
import serial
import time
import sys
import os


#serial comand to arduino
ser = serial.Serial('COM5', 115200)

#serial comand to arduino
ser.flushInput()

while True:

    command = input("Enter a command: ")
    

    if command == 'on':
        print('LED on')
        ser.write(b"on \r\n")



    elif command == 'off':
        
        print('LED off')
        ser.write(b"off \r\n")

    else:
        print('Invalid command')
        break
    
