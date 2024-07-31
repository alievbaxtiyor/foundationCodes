import os
os.system("cls")

lst = []
countsList = int(input("How many numbers? "))

for i in range(countsList):
    number = int(input("Input numbers: "))
    lst.append(number)

#this function clears list
lst.clear()
print(lst)