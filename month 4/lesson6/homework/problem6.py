import os
os.system("cls")

def func(son):
    if son % 1:
        return False
    return True
lst = []
countListElements = int(input("Listdagi elementlar soni: "))
for i in range(countListElements):
    listElement = float(input("Element soni: "))
    lst.append(listElement)

print("Kiritilgan sonlar listi: ", lst)

natija = list(filter(func, lst))
print(natija)