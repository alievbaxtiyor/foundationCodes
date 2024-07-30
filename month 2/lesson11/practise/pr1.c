#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillArrayWithPowersOfTwo(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int randomExponent = rand() % 10; 
        arr[i] = 1 << randomExponent; 
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
    fillArrayWithPowersOfTwo(arr, n);
    printf("Random 2 ning darajalari bilan to'ldirilgan massiv:\n");
    printArray(arr, n);

    return 0;
}
