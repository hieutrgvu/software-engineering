# 10.3 Parse the date from today_string.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

import time

with open('today.txt', 'rt') as fin:
    today_string = fin.read()

fmt = "%Y-%m-%d"
print(time.strptime(today_string, fmt))
