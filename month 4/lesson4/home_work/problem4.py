import os
os.system("cls")

def ketmaketlik3_juft(arr):
    ketmaketJuft = 0
    
    for num in arr:
        if num % 2 != 0:
            ketmaketJuft += 1
            if ketmaketJuft == 3:
                return True
        else:
            ketmaketJuft = 0
    return False

arr1 = [2, 6, 4, 1]
print(ketmaketlik3_juft(arr1))  

arr2 = [1, 2, 34, 3, 4, 5, 7, 23, 12]
print(ketmaketlik3_juft(arr2))  
