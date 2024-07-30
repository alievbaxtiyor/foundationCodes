#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    printf("N sonini kiriting: ");
    scanf("%d", &N);

    int *array = (int *)malloc(N * sizeof(int));
    if (array == NULL) {
        printf("Xotira ajratishda xatolik yuz berdi!\n");
        return 1;
    }

    srand(time(0)); 

    for (int i = 0; i < N; i++) {
        *(array + i) = (rand() % 251) - 100; 
        if (*(array + i) < 0) {
            *(array + i) = -(*(array + i)); 
        }
    }

    printf("Natija array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");

    free(array); 
    return 0;
}
