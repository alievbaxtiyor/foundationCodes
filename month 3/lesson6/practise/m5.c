#include <stdio.h>

void funcNumber (int arr[], int length) {
    printf("%d ", arr[length]);
    if (length == 0) {
        return;
    }
    funcNumber(arr, length - 1);
}
int main () {
    int n;

    printf("Nechta son kiritasiz: ");
    scanf("%d", &n);
    int arr[n];
    int length = sizeof(arr[n] / arr[0]);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    funcNumber(arr, length);
}