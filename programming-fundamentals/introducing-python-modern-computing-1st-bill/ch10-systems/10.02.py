# 10.2 Read the text file today.txt into the string today_string.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

with open('today.txt', 'rt') as fin:
    today_string = fin.read()

print(today_string)
