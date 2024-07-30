#include <stdio.h>

void juftToqSum(int n) {
    int juft_sum = 0;
    int toq_sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            juft_sum += i;
        } else {
            toq_sum += i;
        }
    }
    printf("1 dan %d gacha:\n", n);
    printf("Juft sonlar yig'indisi: %d\n", juft_sum);
    printf("Toq sonlar yig'indisi: %d\n", toq_sum);
}
int main() {
    int number;
    printf("Son kiriting: ");
    scanf("%d", &number);
    juftToqSum(number);
    return 0;
}
