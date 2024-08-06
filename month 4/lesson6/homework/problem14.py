from os import system
system("cls")

x = lambda a, b, c: a if (a > b and a > c) else (b if b > c else c)

a = int(input("A = "))
b = int(input("B = "))
c = int(input("C = "))
print("Uchta sondan maksimumi:", x(a, b, c))