#include <stdio.h>

void printNumber (int n) {
    if (n % 2 == 0) {
        printf("%d ", n);
    }
    if (n == 0) {
        return;
    }
    printNumber(n - 1);
}
int main () {
    int n;

    printf("Son kiriting: ");
    scanf("%d", &n);

    printNumber(n);
}