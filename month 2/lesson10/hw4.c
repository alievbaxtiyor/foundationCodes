#include <stdio.h>

int counts(int n, int A[]) {
    if (n < 2) {
        return 0;
    }
    int max_value = A[0];
    int min_value = A[0];
    int max_index = 0;
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (A[i] > max_value) {
            max_value = A[i];
            max_index = i;
        }
        if (A[i] < min_value) {
            min_value = A[i];
            min_index = i;
        }
    }
    int distance = (max_index > min_index) ? (max_index - min_index - 1) : (min_index - max_index - 1);
    return distance;
}
int main() {
    int n = 5;
    int A[5] = {2, 9, 3, -4, 5};
    int result = counts(n, A);
    printf("Max va min orasida %d ta son bor\n", result);
    return 0;
}