#include <stdio.h>
#include <ctype.h> 

int main() {
    char name[] = "Baraban";
    int i;

    printf("Input: %s\n", name);

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == 'a' || name[i] == 'A') {
            printf("b");
        } else if (name[i] == 'b' || name[i] == 'B') {
            printf("a");
        } else {
            printf("%c", name[i]);
        }
    }

    printf("\n");

    return 0;
}
