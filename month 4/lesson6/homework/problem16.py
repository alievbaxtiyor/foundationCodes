from os import system
system("cls")

def rearrange_list(lst):
    positives = []
    negatives = []
    zeroes = []
    
    for num in lst:
        if num > 0:
            positives.append(num)
        elif num < 0:
            negatives.append(num)
        else:
            zeroes.append(num)
    
    return zeroes + positives + negatives

lst = []
countListElements = int(input("Listdagi elementlar soni: "))

for i in range(countListElements):
    listElement = int(input("Element soni: "))
    lst.append(listElement)
    
print("Eski list: ", lst)
yangi_lst = rearrange_list(lst)
print("Yangi list: ", yangi_lst)
