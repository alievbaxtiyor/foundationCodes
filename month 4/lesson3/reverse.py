import os
os.system("cls")

list = []
numberListElement = int(input("Number list elements: "))

for i in range(numberListElement):
    listElement = input("Input list element: ")
    list.append(listElement)
print("List = ", list)

list.reverse()
print("Reverse = ", list)