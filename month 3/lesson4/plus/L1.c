#include <stdio.h>
#include <stdlib.h>

int main () {
    system("cls");

    char arr[100] = "";
    scanf("%s", arr);

    int length = sizeof(arr);

    for (int i = 0; i < length; i++) {
        if (arr[i] == 97 || arr[i] ==101 || arr[i] ==105 || arr[i] ==111 || arr[i] ==117) {
            printf("%c%c", arr[i], arr[i]);
        } else {
            printf("%c", arr[i]);
        }
    }

    return 0;
}