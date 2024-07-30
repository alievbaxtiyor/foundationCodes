#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");
    int a = 20;
    int *ptr;
    ptr = &a;

    *ptr = 40;
    printf("a ning qiymati - %d\n", a);
    printf("a ning addresi - %p\n", &a);

    printf("ptr ning qiymatini qiymati - %d\n", *ptr);
    printf("ptr ning qiymati - %p\n", ptr);
    printf("ptr ning addresi - %p\n", &ptr);
    return 0;
}