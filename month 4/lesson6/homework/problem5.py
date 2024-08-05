import os
os.system("cls")

def func(son, num):
    
    if son > num * num * num:
        return True
    return False
lst = []
countListElements = int(input("Listdagi elementlar soni: "))
for i in range(countListElements):
    listElement = int(input("Element soni: "))
    lst.append(listElement)

print("Kiritilgan sonlar listi: ", lst)
num = int(input("N = "))

natija = list(filter(lambda x: func(x, num), lst))
print(natija)