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

list3 = list1 + list2

print("First list = ", list1)
print("Second list = ", list2)
print("2 lists = ", list3)