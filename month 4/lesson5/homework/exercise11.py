import os
os.system("cls")

def set_values_to_zero(d):
    for key in d:
        d[key] = 0
    return d

example_dict = {'a': 1, 'b': 2, 'c': 3}
result = set_values_to_zero(example_dict)
print(result)
