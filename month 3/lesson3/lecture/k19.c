#include <stdio.h>
#include <stdlib.h>

void fillMatrix (int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 3 - 1;
        }
    }
}

void printMatrix (int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matrix[i][j]);
        }
        puts("");
    }
}

int main () {
    system("cls");
    srand(time(NULL));

    int n;

    printf("O'lchamini kiriting: ");
    scanf("%d", &n);

    int matrix[n][n];

    fillMatrix(n, matrix);
    printf("Massiv\n");
    printMatrix(n, matrix);

    puts("");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > 0) {
                printf("+  ");
            } else if (matrix[i][j] < 0) {
                printf("-  ");
            } else {
                printf("*  ");
            }
        }
        printf("\n");
    }
}