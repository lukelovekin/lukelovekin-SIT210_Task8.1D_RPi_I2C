import time
from smbus2 import SMBus

bus = SMBus(1)
addr = 0x08
msg_ascii = bus.read_i2c_block_data(addr, 0, 8)

try:
    while True:
        print("".join(chr(i) for i in msg_ascii))
        time.sleep(2)
except KeyboardInterrupt:
    pass
