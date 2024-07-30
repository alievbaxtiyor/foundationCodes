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
        for (int j = 0; j < n; j++) {
            max = matrix[0][j];
            printf("%d ", matrix[j][i]);
            if (max < matrix[j][i]) {
                max = matrix[j][i];
            }
        }
        printf(" %d - ustun max = %d", i + 1, max);
        printf("\n");
    }
    return 0;
}