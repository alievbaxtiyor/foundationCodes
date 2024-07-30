#include <stdio.h>

void almash(int arr[], int n) {
    int max_index = 0, min_index = 0;
    int max_val = arr[0], min_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_index = i;
        }
        if (arr[i] < min_val) { // Aliyev Baxtiyor
            min_val = arr[i];
            min_index = i;
        }
    }
    int temp = arr[max_index];
    arr[max_index] = arr[min_index];
    arr[min_index] = temp;
}
int main() {
    int n = 5;
    int A[] = {2, 9, 3, -4, 5};
    almash(A, n);
    printf("Almashtirilgan array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}