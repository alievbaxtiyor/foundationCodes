from os import system
system("cls")

def round_grade(grade):
    if grade < 38:
        return grade
    next_multiple_of_5 = (grade // 5 + 1) * 5
    if next_multiple_of_5 - grade < 3:
        return next_multiple_of_5
    else:
        return grade

grade = int(input().strip())
rounded_grade = round_grade(grade)
print(rounded_grade)
