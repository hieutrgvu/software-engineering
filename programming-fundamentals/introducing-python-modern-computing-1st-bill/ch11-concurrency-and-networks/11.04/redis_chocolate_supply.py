import redis
import random
import time

conn = redis.Redis()
choco_types = ['white', 'ruby', 'dark', 'raw']

while True:
    time.sleep(random.random())
    conn.rpush('chocolates', random.choice(choco_types))
