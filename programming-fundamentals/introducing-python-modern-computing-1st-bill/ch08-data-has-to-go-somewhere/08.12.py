# 8.12 Increment the count field of test and print it.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

# Remember to start redis server before running this program.

import redis

conn = redis.Redis()
conn.hmset('test', {'count': 1, 'name': 'Fester Bestertester'})
conn.hincrby('test', 'count', 1)
print(conn.hget('test', 'count'))
