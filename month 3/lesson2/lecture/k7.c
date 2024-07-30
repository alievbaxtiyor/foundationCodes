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
    int sum;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
            sum = sum + matrix[j][i];
        }
        printf(" %d - ustun yig'indisi = %d", i + 1, sum);
        printf("\n");
    }
    return 0;
}