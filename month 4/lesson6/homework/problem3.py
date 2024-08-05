import os
os.system("cls")

def func(son):
    son = int(son)
    return son

lst = []
countListElements = int(input("Listdagi elementlar soni: "))

for i in range(countListElements):
    listElement = float(input("Element sonin: "))
    lst.append(listElement)

print("Kiritilgan sonlar listi: ", lst)

natija = list(map(func, lst))

print("Qiymatlari butun songa o'zgaritirlgan listi: ", natija)

