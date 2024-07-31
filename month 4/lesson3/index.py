import os
os.system("cls")

list = []
number = int(input("Input count of numbers in list: "))

for i in range(number):
    numbersList = int(input("Number: "))
    list.append(numbersList)
print(list)

indexNumber = int(input("Which index? "))
indexPosition = list.index(indexNumber)
print(indexPosition + 1)