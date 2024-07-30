#include <stdio.h>

void printProduct(float price[], int count[]) {
    puts("");
    printf("0 - Apple donasi %.2f somdan %d ta bor:\n", price[0], count[0]);
    printf("1 - Banana donasi %.2f somdan %d ta bor:\n", price[1], count[1]);
    printf("2 - Orange donasi %.2f somdan %d ta bor:\n", price[2], count[2]);
    printf("3 - Exit:\n");
    puts("");
}

int main () {
    float price[] = {3000.0, 2100.0, 4000.0};
    int count[] = {20, 30, 50};
    printProduct(price, count);
    int id = 0, soni = 0;
    float sum = 0;
    while(1) {
        printf("Maxsulot ID sini kiriting: ");
        scanf("%d", &id);
        if(id == 3) {
            break;
        }

        printf("Maxsulot sonini kiriting: ");
        scanf("%d", &soni);

        if (count[id] >= soni) {
            sum += price[id] * soni;
            count[id] = soni;
        }
        else {
            printf("Maxsulot yetarli emas!\n");
        }
        printf("%.2f summali maxsulot sotib oldingiz!", sum);
    }
}