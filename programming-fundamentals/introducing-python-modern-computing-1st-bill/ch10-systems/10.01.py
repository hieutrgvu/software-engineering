# 10.1 Write the current date as a string to the text file today.txt.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

from datetime import date

with open('today.txt', 'wt') as fout:
    fout.write(date.today().isoformat())
