#include <stdio.h>

void oneLine(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

void triangle(int n) {
    for (int line = 1; line <= n; line++) {
        oneLine(line);
        printf("\n");
    }
}

int main() {
    triangle(4);
    return 0;
}
