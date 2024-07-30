#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    float a, *ptr;

    printf("Son kiriting: ");
    scanf("%f", &a);

    ptr = &a;

    printf("Son = %.lf", *ptr);

    return 0;
}