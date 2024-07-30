#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    system("cls");
    srand(time(NULL));

    int n;
    printf("Array elementlar soni: ");
    scanf("%d", &n);


    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % 24) - 15;
    }

    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Random array = ");

    for (int i = 0; i < length; i++) {
        printf("%d, ", arr[i]);
    }

    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; i++) {
            if (arr[i])
        }
    }
    {
    }
    return 0;
}