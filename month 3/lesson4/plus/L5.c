#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    char soz[100] = " ";

    printf("So'z kiriting: ");
    scanf("%[^\n]s", soz);

    int length = strlen(soz);
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (soz[i] >= 'A' && soz[i] <= 'Z' ||
        soz[i] >= 'a' && soz[i] <= 'z') {
            count++;
        }
    }

    printf("%d ta harf bor", count);

    return 0;
}