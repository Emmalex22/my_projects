#class neolist:
    #def print_sorted(self, mylist):
      #  mylist.sort()
        
#class MyList(neolist):
    #def print_sorted(self):
        #super().print_sorted(self)''
        
class MyList(list):
    """Implements sorted printing for the built-in list class."""
    def print_sorted(self):
        """Print a list in sorted ascending order."""
        print(sorted(self))
        

my_list = MyList()
my_list.append(1)
my_list.append(4)
my_list.append(2)
my_list.append(3)
my_list.append(5)
print(my_list)
my_list.print_sorted()
print(my_list)