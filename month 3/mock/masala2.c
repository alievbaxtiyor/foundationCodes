#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");
    int n;
    printf("Matritsani nechchi o'lchovliligini kiriting: ");
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sumDioganal = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%2d ", matrix[i][j]);
        }
        puts("");
    }
    int sum = 0, j = 0;

    for (int i = 0; i < n; i++) {
        sum += matrix[i][j];
        j++;
    }
    j = 0;
    for (int i = n - 1; i >= 0; i--){
        sum += matrix[i][j];
        j++;
    }
    printf("%d\n", sum);
    return 0;
}