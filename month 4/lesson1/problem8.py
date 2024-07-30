number = int(input("3 xonali son kiriting: "))

third = number // 100
second = number // 10 % 10
first = number % 10

print(third, "-", second, "-", first)