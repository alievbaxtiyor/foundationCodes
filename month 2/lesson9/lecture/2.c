#include <stdio.h>

void MinMaxFinder(int a, int b, int c) {
    int min, max;
    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("Eng kichik va eng katta qiymatlar orasidagi son: %d\n", max - min);
}
int main() {
    MinMaxFinder(4, 3, 1);
    return 0;
}
