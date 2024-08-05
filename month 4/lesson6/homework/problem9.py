import os
os.system("cls")

def func(son):
    if son > 0:
        return True
    return False
    
lst = []
countListElements = int(input("Listdagi elementlar soni: "))
for i in range(countListElements):
    listElement = int(input("Element soni: "))
    lst.append(listElement)

print("Kiritilgan sonlar listi: ", lst)

natija = list(filter(func, lst))
print(natija)