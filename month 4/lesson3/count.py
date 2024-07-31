import os
os.system("cls")

lst = []
countsList = int(input("How many numbers? "))

for i in range(countsList):
    number = int(input("Input numbers: "))
    lst.append(number)

countNumbersElement = int(input("Which nummber do you need? "))
countNumbers = lst.count(countNumbersElement)
print("Counts = ",countNumbers)