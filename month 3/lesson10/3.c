#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char name[100];
    int grade;
    int sum = 0;
    int count = 0;

    file = fopen("grades.txt", "r");
    if (file == NULL) {
        printf("Faylni ochib bo'lmadi.\n");
        return 1;
    }

    while (fscanf(file, "%s %d", name, &grade) != EOF) {
        sum += grade;
        count++;
    }

    fclose(file);

    if (count > 0) {
        double average = (double)sum / count;
        printf("O'rtacha baho: %.2f\n", average);
    } else {
        printf("Baholar mavjud emas.\n");
    }

    return 0;
}
