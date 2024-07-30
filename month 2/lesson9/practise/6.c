#include <stdio.h>

int engKattaTopish(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a, b;
    printf("Ikkita butun son kiriting: ");
    scanf("%d %d", &a, &b);
    int engKatta = engKattaTopish(a, b);
    printf("Eng katta son: %d\n", engKatta);
    return 0;
}
