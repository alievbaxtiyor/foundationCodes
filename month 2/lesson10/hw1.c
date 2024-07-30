#include <stdio.h>

int main () {
    int n, first;
    printf("Raqam kiriting: ");
    scanf("%d", &n);
    int number[n];
    for (int i = 0; i < n; i++) { //Aliyev Baxtiyorjon
        scanf("%d", &number[i]);
    }
    first = number[0];
    number[0] = number[4];
    number[4] = first;
    printf("A[%d]=", n);
    for (int j = 0; j < n; j++) {
        printf("%d ", number[j]);
    }
        return 0;
}