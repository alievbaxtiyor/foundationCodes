#include <stdio.h>

void printNumber (int n, int m) {
    if (n % 2 != 0) {
        printf("%d ", n);
    }
    if (n == m) {
        return;
    }
    printNumber(n + 1, m);
}
int main () {
    int n, m;

    printf("Son kiriting: ");
    scanf("%d", &m);

    printNumber(n, m);
}