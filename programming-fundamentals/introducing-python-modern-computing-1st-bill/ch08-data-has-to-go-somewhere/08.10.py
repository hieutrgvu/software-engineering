# 8.10 Use the sqlalchemy module to connect to the sqlite3 database books.db
# that you just made in exercise 8.6. As in 8.8, select and print the title
# column from the book table in alphabetical order.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

import csv
import sqlite3
import sqlalchemy as sa

text = '''title,author,year
The Weirdstone of Brisingamen,Alan Garner,1960
Perdido Street Station,China Miéville,2000
Thud!,Terry Pratchett,2005
The Spellman Files,Lisa Lutz,2007
Small Gods,Terry Pratchett,1992
'''
print(text)
with open('books.csv', 'wt') as fout:
    fout.write(text)

conn = sqlite3.connect('books.db')
curs = conn.cursor()
curs.execute('CREATE TABLE books (title TEXT, author TEXT, year INT)')


command = 'insert into books values(?, ?, ?)'
with open('books.csv', 'rt') as fin:
    cin = csv.DictReader(fin)
    for row in cin:
        curs.execute(command, (row['title'], row['author'], row['year']))

curs.close()
conn.close()

conn = sa.create_engine('sqlite:///books.db')
rows = conn.execute('SELECT title FROM books ORDER BY title')
for row in rows:
    print(row)
