#include <stdio.h>

int isPrime (int n, int i) {
    if (i == 1) {
        return 1;
    } else {
        if (n % i == 0){
            return 0;
        } else {
            return isPrime(n, i - 1);
        }
    }
}

int main() {
    int n;

    printf("Son kiriting: ");
    scanf("%d", &n);

    if (isPrime(n, n / 2)) {
        printf("%d soni tub son \n", n);
    } else {
        printf("%d soni tub emas \n", n);
    }

    return 0;
}