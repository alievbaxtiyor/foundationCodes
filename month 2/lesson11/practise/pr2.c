#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArrayWithRandomNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (rand() % 251) - 100; 
    }
}

void makeArrayPositive(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Massiv o'lchamini kiriting: ");
    scanf("%d", &n);
    int arr[n];
    srand(time(0));
    fillArrayWithRandomNumbers(arr, n);
    printf("Dastlabki massiv:\n");
    printArray(arr, n);
    makeArrayPositive(arr, n);
    printf("Musbat qilingan massiv:\n");
    printArray(arr, n);

    return 0;
}
