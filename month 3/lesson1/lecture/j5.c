#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");
    int n, i, arr[i], *ptr[n], sum = 0;

    printf("Massiv olchamini kiriting: ");
    scanf("%d", &n);
    printf("Sonlarni kiriting\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++){
        ptr[i] = &arr[i];
    }
    for (i = 0; i < n; i++) {
        sum = sum + *ptr[i];
    }
    printf("Yig'indisi = %d", sum);

    return 0;
}