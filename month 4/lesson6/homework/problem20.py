from os import system
system("cls")

def counWord(word):
    wordList = []
    takrorList = []
    wordList = word.split()

    for i in range(len(wordList)):
        if wordList[i] in wordList[i + 1:]:
            takrorList.append(wordList[i])
        newWord = ' '.join(takrorList)
    return newWord



word = input("So'z kiriting: ")

result = counWord(word)

print("Takrorlangan so'zlar: ", result)

