#include <stdio.h>

void printNumberv(int n, int d) {
    if (n <= 1) {
        return;
    } else if (n % d == 0) {
        printf("%d ", d);
        printNumberv(n / d, d);
    }
    else {
        printNumberv(n , d + 1);
    }
}
int main () {
    int n;

    printf("Son kiriting: ");
    scanf("%d", &n);

    printNumberv(n, 2);
}