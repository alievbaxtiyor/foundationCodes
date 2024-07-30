#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void kvadarti(int a) {
    int *ptr;

    ptr = &a;

    *ptr = pow(*ptr, 2);

    printf("a ning yangi qiymati = %d\n", *ptr);
}

int main () {
    system("cls");
    int a;
    printf("Son kiriting: ");
    scanf("%d", &a);

    kvadarti(a);

    return 0;
}