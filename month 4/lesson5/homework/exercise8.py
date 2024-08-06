import os
os.system("cls")
def dict_to_set(d):
    result_set = set()
    for key, value in d.items():
        result_set.add(key)
        result_set.add(value)
    return result_set

# Misol
example_dict = {'a': 1, 'b': 2, 'c': 3}
result = dict_to_set(example_dict)
print(result)