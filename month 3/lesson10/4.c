#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    char name[100], maxName[100];
    int salary;
    int maxSalary = 0;

    file = fopen("employees.txt", "r");
    if (file == NULL) {
        printf("Faylni ochib bo'lmadi.\n");
        return 1;
    }

    while (fscanf(file, "%s %d", name, &salary) != EOF) {
        if (salary > maxSalary) {
            maxSalary = salary;
            strcpy(maxName, name);
        }
    }

    fclose(file);

    if (maxSalary > 0) {
        printf("Eng ko'p ish haqi: %s - %d\n", maxName, maxSalary);
    } else {
        printf("Ish haqlari mavjud emas.\n");
    }

    return 0;
}
