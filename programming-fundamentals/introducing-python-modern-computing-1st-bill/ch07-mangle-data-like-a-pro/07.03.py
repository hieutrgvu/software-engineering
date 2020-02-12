# 7.3 Using UTF-8, decode pop_bytes into the string variable pop_string.
# Print pop_string. Is pop_string equal to mystery?

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

mystery = '\U0001f4a9'
print(mystery)
pop_bytes = mystery.encode('utf-8')
pop_string = pop_bytes.decode('utf-8')
print(pop_string)
