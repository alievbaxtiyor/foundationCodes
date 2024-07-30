#include <stdio.h>

int engKichikKopaytuvchi(int num1, int num2) {
    int a = num1;
    int b = num2;

    // EKUK ni hisoblash
    while (a != b) {
        if (a < b) {
            a += num1;
        } else {
            b += num2;
        }
    }

    return a;
}
int main() {
    int a, b;
    printf("Ikkita butun son kiriting: ");
    scanf("%d %d", &a, &b);
    int ekuk = engKichikKopaytuvchi(a, b);
    printf("Ikkita sonning EKUKi: %d\n", ekuk);
    return 0;
}
