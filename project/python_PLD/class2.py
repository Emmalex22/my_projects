class Animal:
    def __init__(self):
        self.colour = 'black'
    
    def speak(self):
        print('bark')

class Dog(Animal):
    def __init__(self):
        super().__init__()
    def speak(self):
        print('meow')
myanimal = Animal()
myanimal2 = Dog()
myanimal.speak()
print(myanimal.colour)
myanimal2.speak()