#include <stdio.h>

void kvadratlariYigindisi() {
    int num, sum = 0;
    do {
        printf("Butun son kiriting (davom etish uchun 0 yoki manfiy son kiritish): ");
        scanf("%d", &num);
        if (num > 0) {
            sum += num * num;
        }
    } while (num > 0); 
    printf("Kiritilgan sonlarning kvadratlari yig'indisi: %d\n", sum);
}
int main() {
    kvadratlariYigindisi();
    return 0;
}
