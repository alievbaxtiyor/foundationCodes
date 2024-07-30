#include <stdio.h>
#include <stdlib.h>

int swap (int *ptrA, int *ptrB) {
    int temp;
    temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    printf("A = ning qiymati = %d\n", *ptrA);
    printf("B = ning qiymati = %d\n", *ptrB);
}
int main () {
    system("cls");
    int a, b;

    printf("A - ning qiymatini kiriting: ");
    scanf("%d", &a);
    printf("B - ning qiymatini kiriting: ");
    scanf("%d", &b);

    swap(&a, &b);

    return 0;
}