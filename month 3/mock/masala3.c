#include <stdio.h>

int main () {
    char soz[100] = "";

    printf("So'zni kiriting: ");
    scanf("%[^\n]s", soz);

    int count = 0;
    for (int i = 0; soz[i] != '\0'; i++) {
        if (soz[i] == 'a' || soz[i] == 'a')
        {
            count++;
        }
    }
    printf("Kiritilgan so'z - %s\n", soz);
    printf("So'zda %d ta A harfi bor", count);
}