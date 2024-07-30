#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char word[100];

    file = fopen("words.txt", "r");
    if (file == NULL) {
        printf("Faylni ochib bo'lmadi.\n");
        return 1;
    }

    while (fscanf(file, "%s", word) != EOF) {
        printf("%s\n", word);
    }

    fclose(file);

    return 0;
}
