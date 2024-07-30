#include <stdio.h>

int main () {
    int numbers[10] = {6, 4, -2, 11, 4, 3, 7, 0, 1, 2};
    int count = 0, min = numbers[9];
    for (int i = 10; i > 0; i--) {
        if (numbers[i] < min) {
            count = 9 - i;
        }
    }
    printf("Mindan  keyin %d ", count);//Aliyev Baxtiyor
}
