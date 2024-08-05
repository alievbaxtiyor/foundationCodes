import os
os.system("cls")

def func(son):
    son = round(son)
    return son

lst = []
countListElements = int(input("List elementlar soni: "))

for i in range(countListElements):
    listElement = float(input("Element soni: "))
    lst.append(listElement)
print("Kiritilgan sonlar listi: ", lst)

natija = list(map(func, lst))

print("Yaxlitlangan list: ", natija)
