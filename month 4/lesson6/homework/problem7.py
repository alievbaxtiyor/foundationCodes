import os
os.system("cls")

def func(son):
    if son > 1:
        for i in range(2, (son//2)+1):
            if (son % i) == 0:
                return False
                break
        else:
            return True
    else:
        return False
    
lst = []
countListElements = int(input("Listdagi elementlar soni: "))
for i in range(countListElements):
    listElement = int(input("Element soni: "))
    lst.append(listElement)

print("Kiritilgan sonlar listi: ", lst)

natija = list(filter(func, lst))
print(natija)