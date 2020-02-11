# 6.5 Make a dictionary with these keys and values: 'name': 'Hydrogen',
# 'symbol': 'H', 'number': 1. Then, create an object called hydrogen from
# class Element using this dictionary.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

class Element():
    def __init__(self, name, symbol, number):
        self.name = name
        self.symbol = symbol
        self.number = number

dict_element = {'name': 'Hydrogen', 'symbol': 'H', 'number': 1}
hydrogen = Element(**dict_element)
print(hydrogen, hydrogen.name, hydrogen.symbol, hydrogen.number)
