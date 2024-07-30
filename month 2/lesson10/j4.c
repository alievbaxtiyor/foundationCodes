#include <stdio.h>

int main () {
    int numbers[13] = {4, -7, 5, -8, 6, -9, 0, 6, 0, -3, 0, 0, 0};
    for (int i = 0; i < 13; i++) {
        if (numbers[i] != 0) {
            printf("Number = %d\n", numbers[i]);
        }
    }
    return 0;
}//i <= sizeof(numbers) / sizeof(numbers[0])