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

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }

    printf("Musbat sonlar yig'indisi: %d\n", sum);

    free(arr);
    return 0;
}
