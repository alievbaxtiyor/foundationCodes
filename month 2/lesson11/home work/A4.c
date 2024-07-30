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

    int minCount = 0, unmostFrequent;
    for (int i = 0; i < length; i++) {
        int count = 0;
        for (int j = 0; j < length; j++) {
            if (a[j] != a[i]) {
                count++;
            }
        }
        if (count > minCount) {
            minCount = count;
            unmostFrequent = a[i];
        }
    }

    printf("\nEng kam takrorlangan: %d\n", unmostFrequent);
    return 0;
}