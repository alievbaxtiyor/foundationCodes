#include <stdio.h>

int main() {
    int n = 10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int teskari_arr[n];
    int j = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0) {
            teskari_arr[j] = arr[i];
            j++;
        }
    }//Aliyev Baxtiyor
    printf("Juftlarini teskarisi: ");
    for (int k = 0; k < j; k++) {
        printf("%d ", teskari_arr[k]);
    }
    printf("\n");

    return 0;
}
