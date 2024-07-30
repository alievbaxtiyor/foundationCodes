#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printAdress(a, b) {
    system("cls");
    int *ptrA, *ptrB;

    ptrA = &a;
    ptrB = &b;

    printf("a ning qiymati - %d\n", *ptrA);
    printf("b ning qiymati - %d\n", *ptrB);
}

int main () {
    int a, b;

    printAdress(a = 20, b = 40);

    return 0;
}


