#include <stdio.h>
#include <limits.h>

int ikkinchiEngKichikTopish() {
    int num, first_min = INT_MAX, second_min = INT_MAX;
    do {
        printf("Butun son kiriting (davom etish uchun 0 yoki manfiy son kiritish): ");
        scanf("%d", &num);
        if (num < first_min) {
            second_min = first_min;
            first_min = num;
        } else if (num < second_min && num != first_min) {
            second_min = num;
        }
    } while (num != 0 && num >= 0); 

    return second_min; 
}
int main() {
    int second_min = ikkinchiEngKichikTopish();
    if (second_min == INT_MAX)  {
        printf("Ikkinchi eng kichik son topilmadi.\n");
    } else {
        printf("Ikkinchi eng kichik son: %d\n", second_min);
    }

    return 0;
}
