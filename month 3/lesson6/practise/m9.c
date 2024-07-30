#include <stdio.h>

void fillNumber (int n, int m) {
    printf("%d ", n);
    if(n == m){
        return;
    }
    fillNumber(n + 1, m);
}
int main () {
    int n, m;

    printf("Raqam kiriting: ");
    scanf("%d%d", &n, &m);

    fillNumber(n, m);
}