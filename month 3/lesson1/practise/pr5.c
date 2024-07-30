#include <stdio.h>
#include <math.h>

int main() {
    int N = 5;
    float array[] = { -16.0, 2.25, -196.0, -1.44, 81.0 };
    float *ptr = array;

    for(int i = 0; i < N; i++) {
        if(ptr[i] < 0) {
            ptr[i] = -ptr[i]; 
        }
        ptr[i] = sqrt(ptr[i]); 
    }

    printf("{ ");
    for(int i = 0; i < N; i++) {
        printf("%.1f", ptr[i]);
        if(i < N - 1) {
            printf(", ");
        }
    }
    printf(" }\n");

    return 0;
}
