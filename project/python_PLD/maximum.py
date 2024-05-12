nums = input('Enter numbers separated by spaces: ')
"""split the numbers into a list and typecast it into integars"""
nums_list = nums.split(" ")
print(nums_list)
count = 0
for i in nums_list:
    count += 1
for i in range(count):
    nums_list[i] = int(nums_list[i])
print(nums_list)
maximum = nums_list[0]
for numb in nums_list:
    if numb > maximum:
        maximum = numb
print('The maximum number is {}'.format(maximum))