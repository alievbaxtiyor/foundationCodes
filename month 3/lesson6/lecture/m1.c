#include <stdio.h>

void printNumber (int a, int b) {
    if (a >= b) {
        printf("%d ", a);
        printNumber(a - 1, b);
    }
}
int main () {

    int a, b;
    input:
    printf("Son kiriting: ");
    scanf("%d%d", &a, &b);

    if (a < b) {
        printf("Noto'g'ri kiritdingiz!\n");
        goto input;
    }
        printNumber(a, b);

}