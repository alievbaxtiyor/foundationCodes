#include <stdio.h>

int findEKUB(int num1, int num2) {
    int ekub = 1;
    int min = (num1 < num2) ? num1 : num2;
    for (int i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            ekub = i;
        }
    }
    return ekub;
}
int main() {
    int a, b;
    printf("Ikkita son kiriting: ");
    scanf("%d %d", &a, &b);
    int ekub = findEKUB(a, b);
    printf("Ikkita sonning EKUBi: %d\n", ekub);
    return 0;
}
