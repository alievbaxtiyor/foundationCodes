#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void fillArrayWithRandomRealNumbers(double arr[], int size, int lower, int upper) {
    for (int i = 0; i < size; i++) {
        double randomReal = ((double)rand() / RAND_MAX) * (upper - lower) + lower;
        arr[i] = randomReal;
    }
}

void sqrtAndAbsArray(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = sqrt(fabs(arr[i])); 
    }
}

void printArray(double arr[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%.1f", arr[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}

int main() {
    int n;
    printf("Massiv o'lchamini kiriting: ");
    scanf("%d", &n);

    double arr[n];

    srand(time(0));
    fillArrayWithRandomRealNumbers(arr, n, -100, 100);
    printf("Dastlabki massiv:\n");
    printArray(arr, n);
    sqrtAndAbsArray(arr, n);
    printf("Musbatlab ildiz ostisiga o'zlashtirilgan massiv:\n");
    printArray(arr, n);

    return 0;
}
