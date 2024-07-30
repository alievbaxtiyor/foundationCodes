#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArrayWithRandomRealNumbers(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        double randomReal = ((double)rand() / RAND_MAX) * (865.0 + 275.0) - 275.0;
        arr[i] = randomReal;
    }
}

void roundArrayToIntegerPart(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (int)arr[i]; 
    }
}

void printArray(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Massiv o'lchamini kiriting: ");
    scanf("%d", &n);

    double arr[n];

    srand(time(0));
    fillArrayWithRandomRealNumbers(arr, n);
    printf("Dastlabki massiv:\n");
    printArray(arr, n);
    roundArrayToIntegerPart(arr, n);
    printf("Butun qismga yaxlitlangan massiv:\n");
    printArray(arr, n);

    return 0;
}
