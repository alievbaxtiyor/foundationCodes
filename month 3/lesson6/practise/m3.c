#include <stdio.h>

void printfKarra (int n, int m) {
    printf("%d * %d = %d\n", n, m, n * m);
    if (m == 10) {
        return;
    }
    printfKarra(n, m + 1);
}
int main () {
    int n, m = 1;

    printf("Karra ");
    scanf("%d", &n);

    printfKarra(n, m);
}