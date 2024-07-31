import os
os.system("cls")

lst = []
countsList = int(input("How many numbers? "))

for i in range(countsList):
    number = int(input("Input numbers: "))
    lst.append(number)

print("List = ", lst)

changeIndex = int(input("Which index do you add? "))
changeNumber = int(input("Which number do want to add? "))
lst.insert(changeIndex - 1, changeNumber)

print("New list = ", lst)