from os import system
system("cls")

a = int(input("1 - tomoni: "))
b = int(input("2 - tomoni: "))

yuzasi = a * b
perimetr = 2 * (a + b)

if yuzasi > perimetr:
    print(yuzasi)
else:
    print(perimetr)
