import os
os.system("cls")

def func(lst):
    maximumNumber = lst[0]
    for i in range(len(lst)):
        if lst[i] > maximumNumber:
            maximumNumber = lst[i]
    for j in range(len(lst)):
        lst[j] = maximumNumber

    return lst
lst = []
countListElements = int(input("Listdagi elementlar soni: "))

for i in range(countListElements):
    listElement = int(input("Element soni: "))
    lst.append(listElement)

print("Kiritilgan sonlar listi: ", lst)

natija = func(lst)

print("Yangi list: ", natija)