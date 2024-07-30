#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    char word[100] = " ";

    printf("So'zni kiriting: ");
    scanf("%[^\n]", &word);

    int length = strlen(word);
    int lowLetters = 0;

    for (int i = 0; i < length; i++) {
        if (word[i] > 96 && word[i] < 123) {
            lowLetters++;
        }
    }

    printf("So'zda %d ta kichik harf bor !", lowLetters);

    return 0;
}