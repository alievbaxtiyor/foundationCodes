#include <stdio.h>

int main () {
    int sum;
    int numbers[8] = {5, -4, 34, 60, 54, -77, 80, -92};
    for (int i = 0; i <= 7; i++) {
        sum = sum + numbers[i];
    }
    printf("Numbers of sum = %d", sum);
    return 0;
}