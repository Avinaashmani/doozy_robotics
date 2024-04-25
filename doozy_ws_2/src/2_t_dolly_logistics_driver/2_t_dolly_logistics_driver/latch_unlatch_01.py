#!/usr/bin/env python3

import serial.serialutil
import rclpy
import serial
import time
from rclpy.node import Node

from std_msgs.msg import Bool

class Latch_Unlatch(Node):

    def __init__(self):
        super().__init__('latch_function')

        self.latch_flag = False
        self.unlatch_flag = False

        # self.create_subscription(Bool, '/latch_hook', self.latch_hook_cb, 10)
        # self.create_subscription(Bool, '/unlatch_hook', self.unlatch_hook_cb, 10)
        self.create_subscription(Bool, '/dock')

        self.create_timer(0.1, self.compute)

        self.serial_port = '/dev/ttyUSB0'
        self.baudrate = 9600
        self.arduino_nano = serial.Serial(port=self.serial_port, baudrate=self.baudrate, timeout=0)
        time.sleep(2)  # Wait for Arduino to initialize
        print(f"Opening port {self.serial_port} with baudrate {self.baudrate}")

    # def compute(self):
        
    #     try:
    #         self.serial_port = '/dev/ttyUSB0'
    #         self.baudrate = 9600
    #         self.arduino_nano = serial.Serial(port=self.serial_port, baudrate=self.baudrate, timeout=0)

    #     except serial.serialutil.SerialException as e:

    #         print(f"Failed to write to port {self.serial_port}. {e}")

    #         try:
    #             self.serial_port = '/dev/ttyUSB1'
    #             self.baudrate = 9600
    #             self.arduino_nano = serial.Serial(port=self.serial_port, baudrate=self.baudrate, timeout=0)

    #         except serial.serialutil.SerialException as e:
    #             print(f"Failed to write to port {self.serial_port}. {e}")

    # def latch_hook_cb(self, msg):
    #     self.latch_flag = msg.data

    # def unlatch_hook_cb(self, msg):
    #     self.unlatch_flag = msg.data

def main():
    rclpy.init()
    latch = Latch_Unlatch()
    rclpy.spin(latch)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
