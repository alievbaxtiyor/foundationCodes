#include <stdio.h>
#include <string.h>

void replace_second_last_with_5(char str[]) {
    int length = strlen(str);
    
    if (length >= 2) {
        str[length - 2] = '5';
    }
}

int main() {
    char str[31]; 
    printf("Seriyani kiriting (uzunligi 30 belgidan oshmasligi kerak): ");
    scanf("%30s", str);

    replace_second_last_with_5(str);

    printf("Natija: %s\n", str);

    return 0;
}
