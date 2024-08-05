import os
os.system("cls")

def sortList(lst):
    lst.sort()
    return lst


lst = []
listElementCount = int(input("Listdagi elementlar sonini kiriting: "))

for i in range(listElementCount):
    numberElement = int(input("Input: "))
    lst.append(numberElement)

print("Eski list", lst)

result = sortList(lst)
print("Yangi list = ",result)

