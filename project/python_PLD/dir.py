"""A function that returns the list of all available attributes and methods"""
def lookup(obj):
        return(dir(obj))
    
class MyClass1(object):
    pass

class MyClass2(object):
    my_attr1 = 3
    def my_meth(self):
        pass

print(lookup(MyClass1))
print()
print(lookup(MyClass2))
print(lookup(int))