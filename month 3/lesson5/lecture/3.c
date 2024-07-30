#include <stdio.h>
#include <string.h>

void swap_characters(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char str[31]; 
    printf("Seriyani kiriting (uzunligi 30 belgidan oshmasligi kerak): ");
    scanf("%30s", str);

    swap_characters(str);

    printf("Natija: %s\n", str);

    return 0;
}
