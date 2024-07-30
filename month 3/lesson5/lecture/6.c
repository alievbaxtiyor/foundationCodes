#include <stdio.h>
#include <string.h>

void move_last_two_to_front(char str[]) {
    int length = strlen(str);
    if (length >= 2) {
        char last1 = str[length - 2];
        char last2 = str[length - 1];

        for (int i = length - 3; i >= 0; i--) {
            str[i + 2] = str[i];
        }
        str[0] = last1;
        str[1] = last2;
    }
}

int main() {
    char str[31]; 
    printf("Seriyani kiriting (uzunligi 30 belgidan oshmasligi kerak): ");
    scanf("%30s", str);

    move_last_two_to_front(str);

    printf("Natija: %s\n", str);

    return 0;
}
