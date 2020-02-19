# 8.5 Create a CSV file called books.csv by using these lines:
#
# title,author,year
# The Weirdstone of Brisingamen,Alan Garner,1960
# Perdido Street Station,China Miéville,2000
# Thud!,Terry Pratchett,2005
# The Spellman Files,Lisa Lutz,2007
# Small Gods,Terry Pratchett,1992

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

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
