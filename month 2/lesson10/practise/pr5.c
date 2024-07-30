#include <stdio.h>

int main() {
    int arr[] = {4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements in original order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}