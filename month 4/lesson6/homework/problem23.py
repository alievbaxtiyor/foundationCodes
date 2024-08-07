from os import system
system("cls")


def is_leap_year(year):
    if year % 400 == 0:
        return True
    if year % 100 == 0:
        return False
    if year % 4 == 0:
        return True
    return False

def day_of_programmers(year):
    if is_leap_year(year):
        return f"12/09/{year}"
    else:
        return f"13/09/{year}"

year = int(input().strip())
print(day_of_programmers(year))
