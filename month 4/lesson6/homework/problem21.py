from os import system
system("cls")

def roman_to_int(s):
    roman_values = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000
    }

    total = 0
    prev_value = 0

    for char in reversed(s):
        current_value = roman_values[char]

        if current_value < prev_value:
            total -= current_value
        else:
            total += current_value

        prev_value = current_value

    return total

roman_numeral = input("Rim raqamini kiriting: ")

arabic_number = roman_to_int(roman_numeral)
print(f"Rim raqamining arab raqamidagi ko'rinishi: {arabic_number}")
