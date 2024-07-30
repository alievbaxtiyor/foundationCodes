#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    char word[100] = "";

    printf("So'z kiriting: ");
    scanf("%s", &word);

    int length = sizeof(word);
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (word[i] > 47 && word[i] < 58) {
            count++;
        }
    }
    printf("So'zda %d son bor !", count);

    return 0;
}