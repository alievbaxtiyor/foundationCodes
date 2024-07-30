import os
os.system("cls")

number = int(input("Son kiriting: "))

first = number // 10
second = number % 10
recursiveNumber = (second * 10) + first

print(recursiveNumber)