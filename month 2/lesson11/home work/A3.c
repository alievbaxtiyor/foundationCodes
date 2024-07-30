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

    int maxCount = 0, mostFrequent;
    for (int i = 0; i < length; i++) {
        int count = 0;
        for (int j = 0; j < length; j++) {
            if (a[j] == a[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = a[i];
        }
    }

    printf("\nEng ko'p takrorlangan: %d\n", mostFrequent);
    return 0;
}