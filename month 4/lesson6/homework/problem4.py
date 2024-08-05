import os
os.system("cls")

def func(son):
    if son > 0:
        son = son * 2
    else:
        son = son * (-1)
    return son
lst = []
countListElements = int(input("Listdagi elementlar soni: "))

for i in range(countListElements):
    listElement = int(input("Element soni: "))
    lst.append(listElement)

print("Kiritilgan sonlar listi: ", lst)

natija = list(map(func, lst))

print("Yangi list: ", natija)