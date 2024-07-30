#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    char soz[] = {'B', 'a', 'x', 't', 'i', 'y', 'o', 'r'};
    int length = sizeof(soz);

    for (int i = 0; i < length; i++) {
        printf("%c ", soz[i]);
    }

    return 0;
}