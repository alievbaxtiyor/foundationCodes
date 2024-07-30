#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    char word[100] = "";

    printf("So'zni kiriting: ");
    scanf("%[^\n]s", word);

    int length = strlen(word);
    int i, first, last;
    for (int i = 0; i < length; i++) {
        if (word[i] >= '0' &&  word[i] <= '9') {
            first = i;
            break;
        }
    }
    for (int i = length - 1; i >= 0; i--) {
        if (word[i] >= '0' &&  word[i] <= '9') {
            last = i;
            break;
        }
    }

    for (i = first + 1; i <= last - 1; i++) {
        printf("%c", word[i]);
    }

    return 0;
}