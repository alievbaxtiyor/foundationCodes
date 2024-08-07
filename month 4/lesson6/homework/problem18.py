from os import system
system("cls")

word = input("So'z kiriting: ")
print(word)

taqiqSoz = ['salom', 'eshmat', 'toshmat', 'dunyo', 'noutbuk']

beginWord = []
beginWord = word.split()

for i in range(len(beginWord)):
    for j in range(len(taqiqSoz)):
        if beginWord[i] == taqiqSoz[j]:
            beginWord[i] = '*' * len(beginWord[i])

result = ' '.join(beginWord)
print(result)

