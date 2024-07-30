#include <stdio.h>

void oneLine(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    printf("oneLine(4) --> ");
    oneLine(4);
    printf("oneLine(9) --> ");
    oneLine(9);
    return 0;
}
