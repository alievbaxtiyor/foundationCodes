#include <stdio.h>

int main() {
    int n = 10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum_juft = 0;
    int sum_toq = 0; 
    int product_juft_toq = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum_juft += arr[i];
        } else {
            sum_toq += arr[i];
        }
        product_juft_toq *= arr[i];
    }
    printf("Juftlari yo'gindisi: %d\n", sum_juft);
    printf("Toqlarini yig'inidisi: %d\n", sum_toq);
    printf("Hamma sonlar ko'paytmasi: %d\n", product_juft_toq);

    return 0;
}
//Aliyev Baxtiyor