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

    int count[length];
    for (int i = 0; i < length; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (a[i] == a[j]) {
                count[i]++;
            }
        }
    }

    printf("\nBittadan ko'p takrorlangan elementlar: ");
    int found = 0; 
    for (int i = 0; i < length; i++) {
        if (count[i] > 1) {
            int alreadyPrinted = 0;
            for (int j = 0; j < i; j++) {
                if (a[j] == a[i]) {
                    alreadyPrinted = 1;
                    break;
                }
            }
            if (!alreadyPrinted) {
                printf("%d ", a[i]);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("Yo'q");
    }
    printf("\n");

    return 0;
}