import random
import os
os.system("cls")

list1 = [random.randint(1, 10) for _ in range(10)]
list2 = [random.randint(1, 10) for _ in range(10)]


for num in list1:
    if num % 2 == 0:
        list2.append(num ** 2)

print("list1:", list1)
print("list2:", list2)
