import os
os.system("cls")

word = str(input("So'zni kiriting: "))

length = len(word)
half_word = length // 2

new_word = word[half_word:] + " " + word[:half_word]

print("Almashgan so'z: ", new_word)