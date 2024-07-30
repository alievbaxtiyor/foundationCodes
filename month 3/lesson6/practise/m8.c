#include <stdio.h>

void sNumber (int n, int m, int sum) {
    sum = sum + n;
    if (m == 1) {
        printf("%d", sum);
        return;
    }
    sNumber(n, m - 1, sum);
}
int main () {
    int n, m, sum = 0;

    printf("Ko'payuvchini kiriting: ");
    scanf("%d", &n);
    printf("Ko'paytiruvchini kiriting: ");
    scanf("%d", &m);

    sNumber(n, m, sum);
}