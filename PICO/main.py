from machine import Pin
from time import sleep

red = Pin(15, Pin.OUT)
yellow = Pin(14, Pin.OUT)
green = Pin(13, Pin.OUT)




while True:
    red.on()
    yellow.off()
    green.off()
    sleep(2)



    yellow.on()
    sleep(2)
    red.off()
    yellow.off()


    green.on()
    sleep(2)
    for _ in range(10):
        green.toggle()
        sleep(0.3)



    green.off()
    yellow.on()
    sleep(1)
