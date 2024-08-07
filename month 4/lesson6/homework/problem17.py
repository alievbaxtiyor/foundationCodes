from os import system
system("cls")

def sortInfo(persons):
    sorted_persons = sorted(persons.items(), key=lambda item: item[1], reverse=True)

    keys = [k for k, v in sorted_persons]
    values = [v for k, v in sorted_persons]

    print(keys)
    print(values)

persons = {'Baxtiyor' : 20, 'Fayzullo': 21, 'Umidjon': 17, 'Elbek': 22}

sortInfo(persons)

