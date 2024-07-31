import os
os.system("cls")

list1 = []
list2 = []
numberFirstList = int(input("Input number: "))
numberSecondList = int(input("Input number: "))

for i in range(numberFirstList):
    firstList = int(input("Input: "))
    list1.append(firstList)

print("Second list numbers")
for i in range(numberSecondList):
    secondList = int(input("Input: "))
    list2.append(secondList)

list2 = list1.copy()

print("First list = ", list1)
print("Second list = ", list2)