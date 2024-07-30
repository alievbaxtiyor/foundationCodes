#include <stdio.h>

int main () {
    int numbers[10];
    printf("10 ta son kiriting: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int j = 0; j < 10; j++) {
        if (numbers[j] == 5) {
            printf("%d", j);
        }     
    }
        return 0;
}