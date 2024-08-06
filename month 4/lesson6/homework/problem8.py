from os import system
system("cls")

def stringCut(lst):
    return isinstance(lst, str)

lst = ['salom', 15, 'dunyo', 20, 'ajoyib']

natija = list(filter(stringCut, lst))

print(natija)
