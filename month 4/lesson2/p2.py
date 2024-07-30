n = int(input("Raqam kiriting: "))

total_sum = 0
current_number = 0

for i in range(1, n + 1):
    current_number = current_number * 10 + 1
    total_sum += current_number

print("Sum: ", total_sum)
