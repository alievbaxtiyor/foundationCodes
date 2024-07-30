#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArrayWithRandomNumbers(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 91;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printDuplicatesWithCount(int arr[], int size) {
    int count[size];

    for (int i = 0; i < size; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count[i]++;
            }
        }
    }

    int printed[size]; 
    int printedSize = 0;
    for (int i = 0; i < size; i++) {
        int alreadyPrinted = 0;
        for (int j = 0; j < printedSize; j++) {
            if (printed[j] == arr[i]) {
                alreadyPrinted = 1;
                break;
            }
        }
        if (!alreadyPrinted) {
            printf("%d -> %d ta\n", arr[i], count[i]);
            printed[printedSize++] = arr[i];
        }
    }
}

int main() {
    int n;
    printf("Massiv sonini kiriting: ");
    scanf("%d", &n);

    int arr[n];

    srand(time(0));
    fillArrayWithRandomNumbers(arr, n);
    printf("Dastlabki massiv:\n");
    printArray(arr, n);
    printf("Elementlar soni:\n");
    printDuplicatesWithCount(arr, n);

    return 0;
}
