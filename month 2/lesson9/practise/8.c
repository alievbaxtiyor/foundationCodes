#include <stdio.h>
#include <limits.h>

int ikkinchiEngKattaTopish() {
    int num, first_max = INT_MIN, second_max = INT_MIN;
    do {
        printf("Butun son kiriting (davom etish uchun 0 yoki manfiy son kiritish): ");
        scanf("%d", &num);
        if (num > first_max) {
            second_max = first_max;
            first_max = num;
        } else if (num > second_max && num != first_max) {
            second_max = num;
        }
    } while (num != 0 && num > 0);
    return second_max;
}

int main() {
    int second_max = ikkinchiEngKattaTopish();
    if (second_max == INT_MIN) {
        printf("Ikkinchi eng katta son topilmadi.\n");
    } else {
        printf("Ikkinchi eng katta son: %d\n", second_max);
    }
    return 0;
}
