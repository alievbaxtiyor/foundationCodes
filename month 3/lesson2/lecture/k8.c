#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");
    int n;
    printf("Matritsa o'lchamini kiriting: ");
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int max;
    for (int i = 0; i < n; i++) {
        max = matrix[i][0];
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
            if (max < matrix[i][j]) {
                max = matrix[i][j];
            }
        }
        printf(" %d - qator max = %d", i + 1, max);
        printf("\n");
    }
    return 0;
}