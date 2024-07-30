#include <stdio.h>
#include <stdlib.h>

void sortArray(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

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

    sortArray(arr, n);

    printf("Saralangan massiv: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
