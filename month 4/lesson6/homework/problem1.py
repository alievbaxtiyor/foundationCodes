import os
os.system("cls")

def func(number):
    if number > 0:
        func(number - 1)
    if number > 1:
        for i in range(2, (number//2)+1):
            if (number % i) == 0:
                print(number, "tub son emas")
                break
        else:
            print(number, "tub son")
    else:
        print(number, "tub son emas")

number = int(input("Son kiriting: "))

func(number)