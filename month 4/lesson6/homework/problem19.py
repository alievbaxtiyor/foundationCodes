from os import system
system("cls")

def funSort(lst):
    zeroLst = []

    for i in range(len(lst)):
        if not lst[i] % 10 and lst[i] > 99:
            zeroLst.append(lst[i])
    zeroLst.sort()
    return zeroLst

lst = []
counListElement = int(input("List elementlari soni: "))

for i in range(counListElement):
    elementList = int(input("Input element: "))
    lst.append(elementList)

print(lst)

result = funSort(lst)

print("So'rtlangan list= ", result)