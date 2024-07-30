#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    char soz[100] = "";

    printf("So'zni kiriting: ");
    scanf("%[^\n]s", soz);

    int length = strlen(soz);
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (soz[i] != 'a' && soz[i] != 'o' &&
        soz[i] != 'e' && soz[i] != 'u' &&
        soz[i] != 'i' && soz[i] != 'A' &&
        soz[i] != 'O' && soz[i] != 'E' &&
        soz[i] != 'U' && soz[i] != 'I' &&
        soz[i] != ' ' ) {
            count++;
        }
    }

    printf("Kiritgan gapizda undosh harflar %d ta", count);
}