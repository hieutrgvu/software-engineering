# 7.4 Write the following poem by using old-style formatting. Substitute the
# strings 'roast beef', 'ham', 'head', and 'clam' into this string:
#
# My kitty cat likes %s,
# My kitty cat likes %s,
# My kitty cat fell on his %s
# And now thinks he's a %s.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

poem = '''
My kitty cat likes %s,
My kitty cat likes %s,
My kitty cat fell on his %s
And now thinks he's a %s.
'''

print(poem % ('roast beef', 'ham', 'head', 'clam'))
