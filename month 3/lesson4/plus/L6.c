#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    char belgi[100] = "";

    printf("So'z kiriting: ");
    scanf("%[^\n]s", belgi);

    int length = strlen(belgi);
    int count = 0;

    for (int i = 0; i < length; i++) {
        if (belgi[i] > 31 && belgi[i] < 48) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}