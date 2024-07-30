import os
os.system("cls")

number = int(input("Son kiriting: "))

for i in range(1000, 1, -1):
    if not i % number:
        print(i)
