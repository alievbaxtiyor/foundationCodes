import os
os.system("cls")

number = int(input("Sonni kiriting: "))
count = 0

for i in range(1, 100):
    firstNumber = i // 10
    secondNumber = i % 10
    if firstNumber == number or secondNumber == number:
        print(i)
        count += 1

print("Count = ", count)