#include <stdio.h>
#include <stdlib.h>

int main () {
    int a = 10, b = 20, temp;
    int *ptr, *ptrb;

    ptrb = &b;
    ptr = &a;
    temp = *ptr;
    *ptr = *ptrb;
    *ptrb = temp;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}