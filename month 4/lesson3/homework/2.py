import os
os.system("cls")
fruits = ['Olma', 'Uzum', 'anor', 'nok', 'behi']

result = []

for fruit in fruits:
    if 'a' in fruit.lower():
        result.append(fruit.upper())
        
print(' '.join(result))
