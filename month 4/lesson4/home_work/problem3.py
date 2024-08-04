import os
os.system("cls")

class Solution:
    def sumOddLengthSubarrays(self, arr) -> int:
        natija = 0
        i = 0
        f = 1
        while f <= len(arr):
            j = i + f
            while j <= len(arr):
                print(f"{arr[i:j]} = {sum(arr[i:j])}")
                natija += sum(arr[i:j])
                i += 1
                j += 1 
            
            i = 0
            f += 2
        print("Natija = ", natija)
        
Solution().sumOddLengthSubarrays([1,4,2,5,3])