#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    system("cls");
    srand(time(NULL));

    int n, i, j;
    printf("Massiv sonini kiriting: \n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        a[i] = (rand() % 31) - 5;
    }

    printf("Random array: \n");
    int length = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < length; i++){
        printf("%d, ", a[i]);
    }

    for (i = 0; i < length; i++){
        for (j = i + 1; j < length; j++){
            if((a[i] > a[j] && a[j] % 2 == 0)) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
    }
    }}

    printf("Sort array: \n");
    for (i = 0; i < length; i++) {
        printf("%d, ", a[i]);
    }
    return 0;
}