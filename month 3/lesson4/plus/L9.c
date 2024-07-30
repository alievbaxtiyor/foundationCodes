#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    char word[100] = "";

    printf("So'z kiriting: ");
    scanf("%[^\n]s", word);

    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        if (word[i] > 64 && word[i] < 91) {
            word[i] = word[i] + 32;
        } else {
            word[i] = word[i] - 32;
        }
    }

    for (int i = 0; i < length; i++) {
        printf("%c", word[i]);
    }

        return 0;
}