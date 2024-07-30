import os
os.system("cls")
fruits = ['Olma', 'Uzum', 'anor', 'nok', 'behi']

result = []

for fruit in fruits:
    if 'm' in fruit.lower():
        result.append(fruit[::-1].lower())

print(' '.join(result))
