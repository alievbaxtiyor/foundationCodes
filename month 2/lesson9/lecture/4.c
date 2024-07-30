#include <stdio.h>

void rectangle(int a, int b) {
    int area = a * b;
    printf("To'rtburchakning yuzasi: %d\n", area);
}
int main() {
    int side_a, side_b;
    printf("To'rtburchakning birinchi tomonini kiriting: ");
    scanf("%d", &side_a);
    printf("To'rtburchakning ikkinchi tomonini kiriting: ");
    scanf("%d", &side_b);
    rectangle(side_a, side_b);

    return 0;
}
