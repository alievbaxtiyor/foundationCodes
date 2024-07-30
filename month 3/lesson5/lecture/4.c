#include <stdio.h>
#include <string.h>

void replace_A_a_with_o(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'a') {
            str[i] = 'o';
        }
    }
}

int main() {
    char str[31]; 
    printf("Seriyani kiriting (uzunligi 30 belgidan oshmasligi kerak): ");
    scanf("%30s", str);

    replace_A_a_with_o(str);

    printf("Natija: %s\n", str);

    return 0;
}
