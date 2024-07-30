#include <stdio.h>

void chekPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        printf("%d PERFECT\n", num);
    } else {
        printf("%d NOT PERFECT\n", num);
    }
}
int main() {
    int number;
    printf("Son kiriting: ");
    scanf("%d", &number);
    chekPerfect(number);

    return 0;
}
