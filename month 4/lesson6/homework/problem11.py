from os import system
system("cls")

def func(lst):
    if isinstance(lst, int):
        newNumber = bool(lst)
    return newNumber
lst = []
countListElements = int(input("Element count: "))

for i in range(countListElements):
    element = int(input("Input: "))
    if element < 2 and element > -1:
        lst.append(element)
    else:
        print("Faqat 0 va 1 kiritish kerak! ")

print("List = ", lst)

result = list(map(func, lst))

print(result)
