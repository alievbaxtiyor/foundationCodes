import os
os.system("cls")
numbers = [2, 4, 6, 8, 10]

user_input = int(input("1 va 10 orasidagi sonni kiriting: "))

indices = [i for i, num in enumerate(numbers) if num == user_input]

if indices:
    print(' '.join(map(str, indices)))
else:
    print("Ro'yxatda mavjud emas")
