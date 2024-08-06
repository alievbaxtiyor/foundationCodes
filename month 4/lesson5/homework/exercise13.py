import os
os.system("cls")

def min_in_set(s):
   
    if s:
        return min(s)
    else:
        return None  


example_set = {3, 7, 2, 8, 5}
result = min_in_set(example_set)
print(result)  
empty_set = set()
result = min_in_set(empty_set)
print(result)  
