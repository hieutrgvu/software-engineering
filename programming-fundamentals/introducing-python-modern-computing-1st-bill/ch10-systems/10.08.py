# 10.8 What day of the week was your day of birth?

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

from datetime import date
import calendar

my_birth = date(1996, 11, 18)
print(calendar.day_name[my_birth.weekday()])
