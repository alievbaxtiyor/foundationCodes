#include <stdio.h>
#include <stdlib.h>

void screen () {
    puts("Baxtiyorjon do'koniga xush kelibsiz!");
    puts("0 - Chiqish");
    puts("1 - Tarvuz");
    puts("2 - Uzum");
    puts("3 - Olma");
    puts("4 - Sotib olish");
}

int main () {
    screen();

    int n;
    printf("Kiritish ->");
    scanf("%d", &n);
    
    return 0;
}