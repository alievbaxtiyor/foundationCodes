#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillMatrix (int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = (rand() % 11);
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

    int takror[n * n];
    int takror_son = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == matrix[i+1][j+1]) {
                takror[takror_son] = matrix[i][j];
                takror_son++;
            }
        }
    }

    printf("Takror sonlar: ");
    printArray(takror, takror_son);
    

    return 0;
}