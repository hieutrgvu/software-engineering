# 8.11 Install the Redis server (see Appendix D) and the Python redis library
# (pip install redis) on your machine. Create a Redis hash called test with the
# fields count (1) and name ('Fester Bestertester'). Print all the fields for
# test.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

# Remember to start redis server before running this program.

import redis

conn = redis.Redis()
conn.hmset('test', {'count': 1, 'name': 'Fester Bestertester'})
print(conn.hgetall('test'))
