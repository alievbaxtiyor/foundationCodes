#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Massiv o'lchamini kiriting: ");
    scanf("%d", &n);

    int *massiv = (int*) malloc(n * sizeof(int));
    if (massiv == NULL) {
        printf("Xotira ajratishda xatolik yuz berdi.\n");
        return 1;
    }

    printf("Massiv elementlarini kiriting: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &massiv[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += massiv[i];
    }
    float ortacha_qiymat = (float)sum / n;

    printf("Elementlar o'rtacha qiymati: %.2f\n", ortacha_qiymat);

    free(massiv);

    return 0;
}

