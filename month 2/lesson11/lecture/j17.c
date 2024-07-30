#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    system("cls");
    srand(time(NULL));

    int arr[5];

    for (int i = 0; i < 5; i++){
        arr[i] = rand() % 201 - 100;
    }
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (arr[i] < 0) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
        for (int i = 0; i < 5; i++)
        {
            printf("%d, ", arr[i]);
        }

    return 0;
}