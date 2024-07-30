#include <stdio.h>
#include <string.h>

int funcWord (char soz[64], int length) {
    if (length == 0) {
        return;
    }
    printf("%c\n", soz[length - 1]);
    funcWord(soz, length - 1);
}
int main () {
    char soz[64] = "";
    printf("So'zni kiriting: ");
    scanf("%[^\n]s", soz);

    int length = strlen(soz);

    funcWord(soz, length);
}