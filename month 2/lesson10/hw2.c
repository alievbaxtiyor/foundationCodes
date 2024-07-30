#include <stdio.h>

int main () {
    int numbers[10] = {6, 4, -2, 11, 4, 3, 7, 0, 1, 2};
    int count = 0, max = numbers[0];
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > max) {
            count = 10 - i;
        }
    }
    printf("Maxdan  keyin %d ", count);//Aliyev Baxtiyor
}
