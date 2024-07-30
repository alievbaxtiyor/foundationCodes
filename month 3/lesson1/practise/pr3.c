#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    printf("N sonini kiriting: ");
    scanf("%d", &N);

    float array[N]; 

    srand(time(0)); 

    for (int i = 0; i < N; i++) {
        float randomValue = ((float)rand() / RAND_MAX) * (865 - (-275)) + (-275); 
        array[i] = (float)((int)randomValue); 
    }

    printf("Natija array:\n");
    for (int i = 0; i < N; i++) {
        printf("%.1f ", array[i]); 
    }
    printf("\n");

    return 0;
}
