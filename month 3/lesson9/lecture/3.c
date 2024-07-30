#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char marka[50];
    char model[50];
    int narx;
} Mashina;

int main() {
    Mashina mashinalar[3] = {
        {"Chevrolet", "Nexia", 8000},
        {"Toyota", "Camry", 25000},
        {"BMW", "X5", 50000}
    };

    FILE *fp = fopen("mashinalar.txt", "w");
    if (fp == NULL) {
        printf("Fayl ochilmadi!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        fprintf(fp, "Marka: %s, Model: %s, Narx: %d\n", mashinalar[i].marka, mashinalar[i].model, mashinalar[i].narx);
    }

    fclose(fp);

    return 0;
}