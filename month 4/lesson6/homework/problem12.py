from os import system
system("cls")

def wordFunc(word):
    lst = []
    for i in range(len(word)):
        lst.append(word[i])
    lst.sort()
    myName =' '
    for i in lst:
        myName += i
    return myName
word = str(input("So'zni kiriting: "))

result = wordFunc(word)

print(result)