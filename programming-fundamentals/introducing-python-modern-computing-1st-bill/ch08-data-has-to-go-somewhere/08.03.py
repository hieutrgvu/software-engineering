# 8.3 Save these text lines to a file called books.csv. Notice that if the
# fields are separated by commas, you need to surround a field with quotes
# if it contains a comma.
#
# author,book
# J R R Tolkien,The Hobbit
# Lynne Truss,"Eats, Shoots & Leaves"

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

text = '''author,book
J R R Tolkien,The Hobbit
Lynne Truss,"Eats, Shoots & Leaves"
'''

print(text)

with open('books.csv', 'wt') as fout:
    fout.write(text)
