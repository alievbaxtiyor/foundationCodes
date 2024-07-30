#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    char word[100] = "";

    printf("So'z kiriting: ");
    scanf("%s", &word);

    int countNumber = 0;
    int countLetter = 0;
    int length = sizeof(word);
    for (int i = 0; i < length; i++) {
        if (word[i] > 64 && word[i] < 91 || word[i] > 96 && word[i] < 123) {
            countLetter++;
        }
        if (word[i] > 47 && word[i] < 58) {
            countNumber++;
        }
    }

    printf("So'zda %d ta harf va %d ta son bor !", countLetter, countNumber);

    return 0;
}