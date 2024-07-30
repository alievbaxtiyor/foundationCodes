#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillMatrix (int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (rand() % 102) - 50;
        }
    }
}

void printMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        puts("");
    }
}

void printArray (int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    puts("");
}

int main () {
    system("cls");
    srand(time(NULL));

    int n;
    printf("Matritsani o'lchamini kiriting: ");
    scanf("%d", &n);

    int matrix[n][n];
    fillMatrix(n, matrix);
    printMatrix(n, matrix);

    int manfiy[n * n];
    int manfiy_uzunlik = 0;
    int musbat[n * n];
    int musbat_uzunlik = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < 0) {
                manfiy[manfiy_uzunlik] = matrix[i][j];
                manfiy_uzunlik++;
            }
            if (matrix[i][j] >= 0) {
                musbat[musbat_uzunlik] = matrix[i][j];
                musbat_uzunlik++;
            }
        }
    }

    printf("Manfiy array: ");
    printArray(manfiy, manfiy_uzunlik);
    printf("Musbat array: ");
    printArray(musbat, musbat_uzunlik);

    return 0;
}