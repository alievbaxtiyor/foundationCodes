#include <stdio.h>

void funcNumber (int arr[], int length, int m) {
    if (m == length+1) {
        return;
    }
    printf("%d ", arr[m]);
    funcNumber(arr, length, m + 1);
}
int main () {
    int n,m = 0;

    printf("Nechta son kiritasiz: ");
    scanf("%d", &n);
    int arr[n];
    int length = sizeof(arr[n] / arr[0]);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    funcNumber(arr, length,m);
}