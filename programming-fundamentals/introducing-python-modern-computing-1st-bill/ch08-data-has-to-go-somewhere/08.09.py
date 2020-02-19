# 8.9 Select and print all columns from the book table in order of publication.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

import sqlite3
import csv

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

curs.execute('SELECT * FROM books ORDER BY year')
print(curs.fetchall())

curs.close()
conn.close()
