lst = []
listCountNumber = int(input("Listdagi elementlar sonini kiriting: "))

def secondMaxNumber(lst):
    length = len(lst)
    secondMaximal = lst[1]
    print(secondMaximal)
    
for i in range(listCountNumber):
    numberElement = int(input("Elementni kiriting: "))
    lst.append(numberElement)
    lst.sort(reverse = True)
print(lst)
secondMaxNumber(lst)