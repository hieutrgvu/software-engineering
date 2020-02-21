# 10.6 Use multiprocessing to create three separate processes. Make each one
# wait a random number of seconds between one and five, print the current
# time, and then exit.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

import multiprocessing
import time
import random
import os
from datetime import datetime

def print_time():
    time.sleep(random.randint(0, 5))
    print("PID", os.getpid(), datetime.now().isoformat())

random.seed(datetime.now())
if __name__ == "__main__":
    for n in range(3):
        p = multiprocessing.Process(target=print_time)
        p.start()
