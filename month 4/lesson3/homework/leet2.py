import os
os.system("cls")

nums = [2, 7, 11, 15]
target = 9

num_index = {}

for i, num in enumerate(nums):
    complement = target - num
    if complement in num_index:
        print([num_index[complement], i])
        break
    num_index[num] = i