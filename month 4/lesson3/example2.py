import os
os.system("cls")

lst = []

#numbers for 
n = int(input("How many numbers are you goint to add? "))

#append 
for i in range(n):
    number = str(input("Input number: "))
    lst.append(number)

print(lst)
