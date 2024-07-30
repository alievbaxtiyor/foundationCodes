#include <stdio.h>

void sNumber (int n, int m, int sum) {
    sum = sum * n;
    if (m == 1) {
        printf("%d", sum);
        return;
    }
    sNumber(n, m - 1, sum);

}
int main () {
    int n, m, sum = 1;

    printf("Sonlarni kiriting: ");
    scanf("%d%d", &n, & m);

    sNumber(n, m, sum);
}