import os
os.system("cls")
def remove_key_from_dict(d, key):
    if key in d:
        del d[key]
    return d

example_dict = {'a': 1, 'b': 2, 'c': 3}
key_to_remove = 'b'
result = remove_key_from_dict(example_dict, key_to_remove)
print(result)
