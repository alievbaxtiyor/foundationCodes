#include <stdio.h>

void printLetter (char letter) {
    printf("%c ", letter);
    if (letter == 'z') {
        return;
    }
    printLetter(letter + 1);
}
int main () {
    char letter;

    printf("Harf kiriting: ");
    scanf("%c", &letter);

    printLetter(letter);
}