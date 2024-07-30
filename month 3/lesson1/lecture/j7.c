#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    system("clear");

    int arr[] = {3, 4, 8, 7, 2, 5, 0, 1, 4};
    int length = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0], max_index = 0;
    int min = arr[0], min_index = 0;

    for (int i = 1; i < length; i++) {
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }

        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    printf("max_index = %d\n", max_index);
    printf("min_index = %d\n", min_index);

    int temp = arr[max_index];
    arr[max_index] = arr[min_index];
    arr[min_index] = temp;

    for (int i = 0; i < length; i++) {
        printf("%d, ", arr[i]);
    }

    return 0;
}