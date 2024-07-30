#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    char word[100] = "";

    printf("So'zni kiriting: ");
    scanf("%[^\n]s", word);

    int length = strlen(word);
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (word[i] == 'a' && count < 3){
            word[i] = word[i] - 32;
            printf("%c", word[i]);
            count++;
        } else {
            printf("%c", word[i]);
        }
    }

    return 0;
}