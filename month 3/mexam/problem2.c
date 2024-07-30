#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    system("cls");
    int n, m;
    srand(time(NULL));

    printf("Matritsani o'lchovini kiriting !\n");
    printf("N = ");
    scanf("%d", &n);
    printf("M = ");
    scanf("%d", &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand()%10;
        }
    }

    puts("");
    printf("Original matritsa - >\n\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%2d ", matrix[i][j]);
        }
        puts("");
    }

    int temp;

    for (int i = 0; i < n; i++) {
            temp = matrix[i][0];
            matrix[i][0] = matrix[i][m - 1];
            matrix[i][m - 1] = temp;
    }

    puts("");
    printf("Almashtirilgan matritsa - >\n\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%2d ", matrix[i][j]);
        }
        puts("");
    }

    return 0;
}