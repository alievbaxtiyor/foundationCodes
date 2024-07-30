#include <stdio.h>
#include <stdlib.h>

void factorNumber (int n, int sum, int start) {
    sum = sum * start;
    if(start == n) {
        printf("Son = %d", sum);
        return;
    }
    factorNumber(n, sum, start + 1);
    
}
int main () {
    system("cls");
    int n, sum =1, start = 1;

    printf("Sonni kiriting: ");
    scanf("%d", &n);

    factorNumber(n, sum, start);

    return 0;
}