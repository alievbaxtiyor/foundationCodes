import os
os.system("cls")

def swap_dict_keys_values(d):
    
    swapped_dict = {value: key for key, value in d.items()}
    return swapped_dict


example_dict = {'a': 1, 'b': 2, 'c': 3}
result = swap_dict_keys_values(example_dict)
print(result)
