import os 
os.system("cls")

list = []
number = int(input("Input counts numbers: "))

for i in range(number):
    listNumbers = int(input("List number: "))
    list.append(listNumbers)
print("List = ", list)

removeNumber = int(input("Which number do want to remove? "))
list.remove(removeNumber)
print("New list = ", list)