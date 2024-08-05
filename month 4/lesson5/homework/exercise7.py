import os
os.system("cls")

def minAge(dictionary):

    min_key = min(dictionary, key=dictionary.get)
    min_value = dictionary[min_key]

    print("Minimal yosh ", min_value, "ism ", min_key)

students = {'Baxtiyor': 20, 'Fayzullo': 21, 'Umidjon': 19}
minAge(students)
