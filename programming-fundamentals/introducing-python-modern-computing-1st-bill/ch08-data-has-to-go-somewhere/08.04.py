# 8.4 Use the csv module and its DictReader method to read books.csv to the
# variable books. Print the values in books. Did DictReader handle the quotes
# and commas in the second book's title?

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

import csv

text = '''author,book
J R R Tolkien,The Hobbit
Lynne Truss,"Eats, Shoots & Leaves"
'''

print(text)

with open('books.csv', 'wt') as fout:
    fout.write(text)

with open('books.csv', 'rt') as fin:
    cin = csv.DictReader(fin)
    books = [row for row in cin]

print(books)
