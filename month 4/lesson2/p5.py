import os
os.system("cls")


for i in range(2, 100):
    count = 0
    for j in range(1, i+1):
        if not i % j:
            count += 1
    if count <= 2:
        for m in range(1, 100):
            if str(i) == str(m)[::-1]:
                print(i, "=", m)
