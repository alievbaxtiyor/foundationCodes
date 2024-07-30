#include <stdio.h>

int main () {
    int numbers[10];
    printf("Sonlarni kiriting: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int j = 0; j < 10; j++) {
        if (numbers[j] % 2 == 0) {
            printf("%d\n", numbers[j] * 2);
        } else {
            printf("%d\n", numbers[j] - 2);
        }
    }
    return 0;
}