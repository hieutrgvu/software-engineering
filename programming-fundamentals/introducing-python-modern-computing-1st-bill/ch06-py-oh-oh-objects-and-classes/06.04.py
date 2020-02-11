# 6.4 Make a class called Element, with instance attributes name, symbol, and
# number. Create an object of this class with the values 'Hydrogen', 'H',
# and 1.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

class Element():
    def __init__(self, name, symbol, number):
        self.name = name
        self.symbol = symbol
        self.number = number

new_element = Element('Hydrogen', 'H', 1)
print(new_element, new_element.name, new_element.symbol, new_element.number)
