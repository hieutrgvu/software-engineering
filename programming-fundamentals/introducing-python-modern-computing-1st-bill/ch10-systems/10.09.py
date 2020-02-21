# 10.9 When will you be (or when were you) 10,000 days old?

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

from datetime import date, timedelta
import calendar

my_birth = date(1996, 11, 18)
after_time = my_birth + timedelta(days=10000)
print(after_time)
