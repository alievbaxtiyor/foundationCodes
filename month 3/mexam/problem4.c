#include <stdio.h>
#include <stdlib.h>

int fibonacci (int n) {
    if (n == 0){
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main () {
    system("cls");
    int n;

    printf("Son kiriting: ");
    scanf("%d", &n);

    if (n >= 0 && n <= 30) {
        fibonacci(n);
    } else {
        printf("Noto'g'ri son kiritdingiz !\n");
        printf("Iltimos  (0 ≤ n ≤ 30) oralig'ida kiriting\n");
    }

    printf("%d", fibonacci(n));
}