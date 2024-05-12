"""A programme that calculates the average of numbers collected from user at runtime"""
# collect numbers from user
nums = input("Enter numbers separated by spaces: ")
#put the numbers into a list and typecast them to integars
nums_list = nums.split(" ")
count = 0
for num in nums_list:
    count += 1
for i in range(count):
    nums_list[i] = int(nums_list[i])
print(nums_list)
#calculate the average of the numbers
total = 0
for num in nums_list:
    total += num
print(total)
avg = total / count
print(avg)