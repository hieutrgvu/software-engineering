# 8.2 Open the file test.txt and read its contents into the string test2.
# Are test1 and test2 the same?

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

test1 = 'This is a test of the emergency text system'
print('test1 =', test1)

fout = open('test.txt', 'wt')
fout.write(test1)
fout.close()

fin = open('test.txt', 'rt')
test2 = fin.read()
print('test2 =', test2)

print('(test1 == test2) =',test1 == test2)
