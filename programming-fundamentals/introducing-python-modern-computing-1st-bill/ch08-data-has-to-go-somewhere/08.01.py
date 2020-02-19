# 8.1. Assign the string 'This is a test of the emergency text system' to
# the variable test1, and write test1 to a file called test.txt.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

test1 = 'This is a test of the emergency text system'
print('test1 =', test1)

fout = open('test.txt', 'wt')
fout.write(test1)
fout.close()
