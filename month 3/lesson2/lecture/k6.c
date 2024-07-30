#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;
    printf("N sonnni kiriting: ");
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
            sum = sum + matrix[i][j];
        }
        printf("%d-qator summasi = %d", i + 1, sum);
        printf("\n");
    }
    return 0;
}