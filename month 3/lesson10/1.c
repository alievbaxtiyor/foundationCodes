#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int number;
    int sum = 0;
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Faylni ochib bo'lmadi.\n");
        return 1;
    }

    while (fscanf(file, "%d", &number) != EOF) {
        sum += number;
    }

    fclose(file);

    printf("Yig'indi: %d\n", sum);

    return 0;
}
