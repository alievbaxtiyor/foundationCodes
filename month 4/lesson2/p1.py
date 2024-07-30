import os
os.system("cls")

a = int(input("Input: "))
b = int(input("Input: "))

if a % 2 and not b % 2:
    print("Qora")
if a % 2 and b % 2:
    print("Oq")
if not a % 2 and b % 2:
    print("Qora")
if not a % 2 and not b % 2:
    print("Oq")