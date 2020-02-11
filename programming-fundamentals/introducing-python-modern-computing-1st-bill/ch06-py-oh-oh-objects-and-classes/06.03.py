# 6.3 Make yet another class called, of course, Thing3. This time, assign the
# value 'xyz' to an instance (object) attribute called letters. Print letters.
# Do you need to make an object from the class to do this?

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

class Thing3():
    def __init__(self, letters):
        self.letters = letters

new_thing3 = Thing3('xyz')
print(new_thing3.letters)

# Yes, we need to make an object from the created class.
