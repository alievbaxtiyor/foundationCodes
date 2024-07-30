#include <stdio.h>
#include <stdlib.h>

void changer (int a) {
    int *ptr, tempFirst, tempSecond;
    ptr = &a;

    tempFirst = *ptr / 10;
    tempSecond = *ptr % 10;

    printf("a ning teskari qiymati = %d%d", tempSecond, tempFirst);
}

int main () {
    system("cls");
    int a;

    printf("Son kiriting: ");
    scanf("%d", &a);

    changer(a);

    return 0;
}