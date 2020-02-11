# 6.8 Modify Element to make the attributes name, symbol, and number private.
# Define a getter property for each to return its value.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

class Element():
    def __init__(self, name, symbol, number):
        self.__name = name
        self.__symbol = symbol
        self.__number = number

    @property
    def name(self):
        return self.__name
    
    @property
    def symbol(self):
        return self.__symbol

    @property
    def number(self):
        return self.__number

hydrogen = Element('Hydrogen', 'H', 1)
print(hydrogen.name, hydrogen.symbol, hydrogen.number)
