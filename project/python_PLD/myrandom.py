import random
names = input('please input names separated by a comma: ' )
list = names.split(',')
print(list)
length = len(list)
choice = random.randint(0, length-1)
print(f'{list[choice]} will pay for the food')