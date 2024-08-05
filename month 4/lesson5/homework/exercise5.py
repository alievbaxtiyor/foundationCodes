import os
os.system("cls")

def counNumber(lst):
    count = 0
    number = lst[0]
    minNumberCount = 0
    for i in range(len(lst)):
        count = 0
        for j in range(len(lst)):
            if lst[i] == lst[j]:
                count += 1
        if count >= minNumberCount:
            minNumberCount = count
            minNumbersElement = lst[i]
    print(minNumbersElement,"dan", minNumberCount, "ta bor")
        
lst = []
listElementCount = int(input("Listdagi elementlar sonini kiriting: "))

for i in range(listElementCount):
    numberElement = int(input("Input: "))
    lst.append(numberElement)

print(lst)
counNumber(lst)