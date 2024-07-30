#include <stdio.h>

void manfiyMusbatTekshirish(int num) {
    if (num < 0) {
        printf("Manfiy son\n");
    } else if (num > 0) {
        printf("Musbat son\n");
    } else {
        printf("Son nolga teng\n");
    }
}
int main() {
    int son;
    printf("Butun son kiriting: ");
    scanf("%d", &son);
    manfiyMusbatTekshirish(son);
    return 0;
}
