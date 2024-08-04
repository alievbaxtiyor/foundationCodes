import os
os.system("cls")

class Solution:
    def leftRightDifference(self, nums):
        lst = []
        for i in range(len(nums)):
            natija = abs(sum(nums[:i]) - (sum(nums[i:]) - nums[i]))
            print(f"|{sum(nums[:i])} - {sum(nums[i:])} - nums[i]| = {natija}")
            lst.append(natija)
        
        return lst

Solution().leftRightDifference([10, 4, 8, 3])