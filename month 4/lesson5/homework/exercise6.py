import os
os.system("cls")

def eng_katta_qiymat(dictionary):
    
    max_key = max(dictionary, key=dictionary.get)
    max_value = dictionary[max_key]
    
    print(f"Maksimal qiymat: {max_value}, Kalit: {max_key}")
    
    return max_key, max_value

lugat = {'a': 10, 'b': 50, 'c': 30, 'd': 50}
natija = eng_katta_qiymat(lugat)