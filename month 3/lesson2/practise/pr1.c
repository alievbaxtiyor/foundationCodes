#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");
    int n;
    printf("Matritsani o'lchamini kiriting: ");
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int temp, temp2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (n == 3) {
                temp = matrix[0][0];
                matrix[0][0] = matrix[2][0];
                matrix[2][2] = temp;
                temp2 = matrix[0][2];
                matrix[0][2] = matrix[2][2];
                matrix[2][2] = temp2;
            }
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}