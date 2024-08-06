import os
os.system("cls")

def max_even_number(lst):
    
    even_numbers = [x for x in lst if x % 2 == 0]
    
    if even_numbers:
        return max(even_numbers)
    else:
        return -1

example_list = [3, 7, 2, 8, 5]
result = max_even_number(example_list)
print(result)  
example_list = [1, 3, 5, 7]
result = max_even_number(example_list)
print(result)  
