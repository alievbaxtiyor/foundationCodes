#include <stdio.h>
#include <stdlib.h>

int main () {
    system("clear");

    int arr[] = {79, 28, 8, 52, 60, 14, 4, 6, 22, 15};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < length; i++) {
        printf("%d, ", arr[i]);
    }
    return 0;
}