#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[50];
    char surname[50];
    char ageStr[10];
    char nationality[50];
    int age;

    printf("Ismingizni kiriting: ");
    fread(name, sizeof(char), sizeof(name) - 1, stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Familiyangizni kiriting: ");
    fread(surname, sizeof(char), sizeof(surname) - 1, stdin);
    surname[strcspn(surname, "\n")] = '\0';

    printf("Yoshingizni kiriting: ");
    fread(ageStr, sizeof(char), sizeof(ageStr) - 1, stdin);
    ageStr[strcspn(ageStr, "\n")] = '\0';
    age = atoi(ageStr);

    printf("Millatingizni kiriting: ");
    fread(nationality, sizeof(char), sizeof(nationality) - 1, stdin);
    nationality[strcspn(nationality, "\n")] = '\0';

    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Fayl ochishda xatolik yuz berdi!\n");
        return 1;
    }

    fprintf(file, "ISMI:                %s\n", name);
    fprintf(file, "FAMILIYASI:          %s\n", surname);
    fprintf(file, "YOSHI:               %d\n", age);
    fprintf(file, "MILLATI:             %s\n", nationality);

    fclose(file);

    printf("Ma'lumotlar faylga muvaffaqiyatli yozildi.\n");

    return 0;
}
