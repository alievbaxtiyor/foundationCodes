#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ism[50];
    char familiya[50];
    int baholar[3];
} Talaba;

int main() {
    Talaba talabalar[3] = {
        {"Ali", "Valiyev", {85, 90, 80}},
        {"Sami", "Karimov", {75, 85, 90}},
        {"Vali", "Sodiqov", {95, 85, 90}}
    };

    FILE *fp = fopen("baholar.txt", "w");
    if (fp == NULL) {
        printf("Fayl ochilmadi!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        fprintf(fp, "Ism: %s, Familiya: %s, Baholar: ", talabalar[i].ism, talabalar[i].familiya);
        for (int j = 0; j < 3; j++) {
            fprintf(fp, "%d, ", talabalar[i].baholar[j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);

    return 0;
}
