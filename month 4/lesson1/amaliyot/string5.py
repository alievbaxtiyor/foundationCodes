import os
os.system("cls")

word = str(input("So'z kiriting: "))
space = int(input("Bo'sh joylar sonini kiriting: "))

spaces = ' ' * space

result  = spaces.join(word)

print(result)
