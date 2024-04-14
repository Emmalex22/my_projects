class Animal():
    def __init__(self, name, colour):
        self.name = name
        self.colour = colour
        
    def bark(self):
        print('woo woo')

class Dog(Animal):
    def __init__(self, name, colour):
        super().__init__(name, colour)
        super().bark()
        
    def eat(self):
        print('i eat bones')
Animal_1=Dog('alice', 'black')
Animal_1.eat()