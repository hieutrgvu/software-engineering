import redis
import random
import time
from datetime import datetime

conn = redis.Redis()
timeout = 10

while True:
    time.sleep(0.5)
    msg = conn.blpop('chocolates', timeout)
    remaining = conn.llen('chocolates')
    if msg:
        print('Lucy got:', msg[1], 'at', datetime.now(), ', only',
            remaining, 'left')
