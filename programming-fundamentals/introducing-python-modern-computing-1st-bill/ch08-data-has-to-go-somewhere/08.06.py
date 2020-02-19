# 8.6 Use the sqlite3 module to create a SQLite database called books.db, and
# a table called books with these fields: title (text), author (text), and
# year (integer).

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

import sqlite3

conn = sqlite3.connect('books.db')
curs = conn.cursor()
curs.execute('CREATE TABLE books (title TEXT, author TEXT, year INT)')
curs.close()
conn.close()
