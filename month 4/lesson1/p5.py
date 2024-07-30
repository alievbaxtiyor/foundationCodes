import os
os.system("cls")

time = int(input("Sekundlarni kiriting: "))

hour = time // 60 // 60
minute = time // 60 % 60
seconds = time % 60

print(hour, "soat", minute, "minut", seconds, "sekund")