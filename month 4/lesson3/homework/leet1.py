import os
os.system("cls")

all_numbers = [2, 2, 2, 4, 5, 1, 3, 4, 5, 4, 3, 6, 1, 2]

unique_array = []
seen = set()

for item in all_numbers:
    if item not in seen:
        unique_array.append(item)
        seen.add(item)

print(unique_array)
