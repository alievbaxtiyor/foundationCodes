#include <stdio.h>

int main() {
    int n = 10;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Teskari array: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
