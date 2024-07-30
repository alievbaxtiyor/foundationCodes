#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fillMatrix (int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 9 + 0;
        }
    }
}

void printMatrix (int n, int matrix[n][n]) {
    puts("");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}



int main () {
    system("cls");
    srand(time(NULL));

    int n;

    printf("O'lchamini kiriting: ");
    scanf("%d", &n);

    int matrix1[n][n];
    int matrix2[n][n];

    int matrix3[n][n];

    fillMatrix(n, matrix1);
    fillMatrix(n, matrix2);

    printf("\nMatrix 1\n");
    printMatrix(n, matrix1);
    printf("\nMatrix 2\n");
    printMatrix(n, matrix2);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix1[i][j] > matrix2[i][j]) {
                matrix3[i][j] = matrix1[i][j];
            } else {
                matrix3[i][j] = matrix2[i][j];
            }
        }
    }

    printf("\nMatrix 3\n");
    printMatrix(n, matrix3);
}