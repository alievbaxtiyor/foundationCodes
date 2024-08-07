import json

file = open("people_count.txt", 'r')
lst=file.read().split("\n")
male=[]
for i in lst:
    i = i.split(',')
    dc = {
        'name': i[0],
        'surname': i[1],
        'country': i[4]
    }

    if dc['name'][0].upper() == 'A':
        male.append(dc)
print(json.dump(male, indent=4))