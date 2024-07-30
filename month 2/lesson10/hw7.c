#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n = 5; 
    int arr[n];
    int kichigi = -12;
    int kattasi = 26;

    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % (kattasi - kichigi + 1)) + kichigi;
    }
    printf("Eski array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) {//Aliyev Baxtiyor
        if (arr[i] < 0) {
            arr[i] = 0;
        } else if (arr[i] > 0) {
            arr[i] = 1;
        }
    }
    printf("Yangi array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
