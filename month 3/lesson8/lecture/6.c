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

    printf("Toq sonlar qatori: ");
    for (int i = 0; i < n; i++) {
        if (massiv[i] % 2 != 0) {
            printf("%d ", massiv[i]);
        }
    }
    printf("\n");

    free(massiv);

    return 0;
}
