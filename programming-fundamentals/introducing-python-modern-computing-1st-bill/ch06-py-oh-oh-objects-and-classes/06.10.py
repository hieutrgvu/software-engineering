# 6.10 Define these classes: Laser, Claw, and SmartPhone. Each has only one
# method: does(). This returns 'disintegrate' (Laser), 'crush' (Claw), or
# 'ring' (Smart Phone). Then, define the class Robot that has one instance
# (object) of each of these. Define a does() method for the Robot that prints
# what its component objects do.

#*******************************************************************************
# Resolved by: Hieu Vu
#*******************************************************************************

class Laser():
    def does(self):
        return 'disintegrate'

class Claw():
    def does(self):
        return 'crush'

class SmartPhone():
    def does(self):
        return 'ring'

class Robot():
    def __init__(self, other):
        self.other = other

    def does(self):
        print(self.other.does())

laser = Laser()
claw = Claw()
smartphone = SmartPhone()
robot1 = Robot(laser)
robot2 = Robot(claw)
robot3 = Robot(smartphone)
robot1.does()
robot2.does()
robot3.does()
