#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, i, temp;

    printf("Massiv o'lchami: ");
    scanf("%d", &n);
    
    int arr[n], *ptr[n];
    printf("Sonlarni kiriting:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        ptr[i] = &arr[i];
    }
    temp = *ptr[0];
    *ptr[0] = *ptr[n - 1];
    *ptr[n - 1] = temp;

    printf("A[%d] = ", n);
    for (i = 0; i < n; i++) {
        printf("%d ", *ptr[i]);
    }
    return 0;
}