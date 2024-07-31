import os
os.system("cls")

list = []
numberListElement = int(input("Number list elements: "))

for i in range(numberListElement):
    listElement = int(input("Input list element: "))
    list.append(listElement)
print("List = ", list)

popNumber = int(input("Input pop number: "))
list.pop(popNumber)
deleteNumber = list.pop(popNumber)
print("Removed list = ", list)
print("Delete number = ", deleteNumber)