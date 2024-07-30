#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ism[50];
    char familiya[50];
    char lavozim[50];
    int oylik;
} Xodim;

int main() {
    Xodim xodimlar[3] = {
        {"Ali", "Valiyev", "Dasturchi", 1500000},
        {"Sami", "Karimov", "Dizayner", 1200000},
        {"Vali", "Sodiqov", "Menejer", 1300000}
    };

    FILE *fp = fopen("xodimlar.txt", "w");
    if (fp == NULL) {
        printf("Fayl ochilmadi!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        fprintf(fp, "Ism: %s, Familiya: %s, Lavozim: %s, Oylik: %d\n", xodimlar[i].ism, xodimlar[i].familiya, xodimlar[i].lavozim, xodimlar[i].oylik);
    }

    fclose(fp);

    return 0;
}