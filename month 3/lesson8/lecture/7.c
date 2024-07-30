#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Massivning o'lchamini kiriting: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Xotira ajratishda xatolik!\n");
        return 1;
    }

    printf("Massiv elementlarini kiriting: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elementlari ikki barobarga oshirilgan massiv: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i] * 2);
    }
    printf("\n");

    free(arr);
    return 0;
}
