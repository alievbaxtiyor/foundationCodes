import os
os.system("cls")
nums = [1, 3, 5, 6]  
target = 5  


left, right = 0, len(nums) - 1

while left <= right:
    mid = left + (right - left) // 2
    
    if nums[mid] == target:
        print(mid)
        break
    elif nums[mid] < target:
        left = mid + 1
    else:
        right = mid - 1


if left > right:
    print(left)
