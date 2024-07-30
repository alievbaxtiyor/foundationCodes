#include <stdio.h>

int engKichikTopish(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }
}
int main() {
    int a, b;
    printf("Ikkita butun son kiriting: ");
    scanf("%d %d", &a, &b);
    int engKichik = engKichikTopish(a, b);
    printf("Ikkita sonning eng kichigi: %d\n", engKichik);
    return 0;
}
