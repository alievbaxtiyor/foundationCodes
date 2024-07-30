import os
os.system("cls")

words = ["katta-kichik", "aka-uka", "ota-ona", "opa-singil"]
first_words = []
second_words = []

for word in words:
    first, second = word.split('-')
    first_words.append(first)
    second_words.append(second)

print("Birinchi so'zlar:", first_words)
print("Ikkinchi so'zlar:", second_words)
