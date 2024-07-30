#include <stdio.h>
#include <math.h>

void chekArm(int num) {
    int originalNum, remainder, n = 0;
    double result = 0.0;

    originalNum = num;
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if ((int)result == num) {
        printf("%d ARMSTRONG\n", num);
    } else {
        printf("%d NOT ARMSTRONG\n", num);
    }
}
int main() {
    int number;
    printf("Son kiriting: ");
    scanf("%d", &number);
    chekArm(number);

    return 0;
}
