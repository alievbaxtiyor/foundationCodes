import random
import os
os.system("cls")

random_numbers = [random.randint(1, 100) for _ in range(20)]

odd_numbers = []
even_numbers = []

for num in random_numbers:
    if num % 2 == 0:
        even_numbers.append(num)
    else:
        odd_numbers.append(num)

sorted_odd_numbers = sorted(odd_numbers)
sorted_even_numbers = sorted(even_numbers)

print("Barcha sonlar:", random_numbers)
print("Toq sonlar:", sorted_odd_numbers)
print("Juft sonlar:", sorted_even_numbers)
