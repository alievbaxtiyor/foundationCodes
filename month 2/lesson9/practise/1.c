#include <stdio.h>

void averageOfThree(int a, int b, int c) {
    double average = (a + b + c) / 3.0;
    printf("Uchta sonning o'rtacha qiymati: %.2f\n", average);
}

int main() {
    int num1, num2, num3;
    printf("Uchta butun son kiriting: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    averageOfThree(num1, num2, num3);
    return 0;
}
