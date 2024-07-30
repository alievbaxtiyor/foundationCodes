import random
import os
os.system("cls")

random_numbers = [random.randint(1, 100) for _ in range(20)]

divisible_by_3_and_5 = []

for num in random_numbers:
    if num % 3 == 0 and num % 5 == 0:
        divisible_by_3_and_5.append(num)


sorted_divisible_by_3_and_5 = sorted(divisible_by_3_and_5, reverse=True)

print("Barcha sonlar:", random_numbers)
print("3 va 5 ga bo'linadigan sonlar:", sorted_divisible_by_3_and_5)
