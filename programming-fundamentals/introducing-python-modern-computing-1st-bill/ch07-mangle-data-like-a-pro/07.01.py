# 7.1 Create a Unicode string called mystery and assign it the value
# '\U0001f4a9'. Print mystery. Look up the Unicode name for mystery.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

mystery = '\U0001f4a9'
print(mystery)
import unicodedata
print(unicodedata.name(mystery))
