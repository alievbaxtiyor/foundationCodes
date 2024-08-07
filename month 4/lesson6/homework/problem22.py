from os import system
system("cls")

def find_max_in_2d_list(two_d_list):
    max_value = float('-inf')
    for row in two_d_list:
        for element in row:
            if element > max_value:
                max_value = element

    return max_value

two_d_list = [
    [1, 5, 3],
    [7, 2, 6],
    [4, 8, 9]
]

max_value = find_max_in_2d_list(two_d_list)
print(f"2D ro'yxatdagi maksimal son: {max_value}")
