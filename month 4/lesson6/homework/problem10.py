from os import system
system("cls")

def func(lst):
    if isinstance(lst, int):
        lst = float(lst)
    elif isinstance(lst, float):
        lst = int(lst)
    return lst

lst = [2, 5, 4.5, 6.7, 8, 8.5]
print("Kiritilgan sonlar listi: ", lst)

natija = list(map(func, lst))
print(natija)