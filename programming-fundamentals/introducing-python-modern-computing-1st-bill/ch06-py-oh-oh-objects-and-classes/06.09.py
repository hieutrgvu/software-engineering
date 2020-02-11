# 6.9 Define three classes: Bear, Rabbit, and Octothorpe. For each, define only
# one method: eats(). This should return 'berries' (Bear), 'clover' (Rabbit),
# or 'campers' (Octothorpe). Create one object from each and print what it eats.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

class Bear():
    def eats(self):
        return 'berries'

class Rabbit():
    def eats(self):
        return 'clover'

class Octothorpe():
    def eats(self):
        return 'campers'

bear = Bear()
print(bear.eats())

rabbit = Rabbit()
print(rabbit.eats())

octothorpe = Octothorpe()
print(octothorpe.eats())
