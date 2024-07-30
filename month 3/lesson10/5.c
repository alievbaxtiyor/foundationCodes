#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

int main() {
    FILE *file;
    int counts[ALPHABET_SIZE] = {0};
    char ch;

    file = fopen("text.txt", "r");
    if (file == NULL) {
        printf("Faylni ochib bo'lmadi.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            ch = toupper(ch);
            counts[ch - 'A']++;
        }
    }

    fclose(file);

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (counts[i] > 0) {
            printf("%c: %d\n", 'A' + i, counts[i]);
        }
    }

    return 0;
}
