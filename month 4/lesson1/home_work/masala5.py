import os
os.system("cls")

word = str(input("So'z kiriting: "))

length = len(word)
word = word[:length//2]

print("Natija: ", word)