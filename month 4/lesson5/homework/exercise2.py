import os
os.system("cls")

lst = []
listCountNumber = int(input("Listdagi elementlar sonini kiriting: "))

def secondMinNumber(lst):
    length = len(lst)
    secondMinimal = lst[1]
    print(secondMinimal)
    
for i in range(listCountNumber):
    numberElement = int(input("Elementni kiriting: "))
    lst.append(numberElement)
    lst.sort()
print(lst)
secondMinNumber(lst)