#include <stdio.h>

typedef struct Xodim {
    char ism[51];
    int yosh;
    char lavozim[51];
    int oylik;
} Xodim;

int main() {
    int n;  

    printf("Xodimlar sonini kiriting: ");
    scanf("%d", &n);

    Xodim xodimlar[n];  

    for (int i = 0; i < n; i++) {
        printf("%d-xodimning ismini kiriting: ", i + 1);
        scanf("%s", xodimlar[i].ism);

        printf("%d-xodimning yoshini kiriting: ", i + 1);
        scanf("%d", &xodimlar[i].yosh);

        printf("%d-xodimning lavozimini kiriting: ", i + 1);
        scanf("%s", xodimlar[i].lavozim);

        printf("%d-xodimning oyligini kiriting: ", i + 1);
        scanf("%d", &xodimlar[i].oylik);
    }

    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += xodimlar[i].oylik;
    }
    float ortacha_oylik = (float) sum / n;

    
    printf("\nHar bir xodimning ma'lumotlari:\n");
    for (int i = 0; i < n; i++) {
        printf("%d-xodim:\n", i + 1);
        printf("Ismi: %s\n", xodimlar[i].ism);
        printf("Yoshi: %d\n", xodimlar[i].yosh);
        printf("Lavozimi: %s\n", xodimlar[i].lavozim);
        printf("Oyligi: %d\n", xodimlar[i].oylik);
    }

    
    printf("\nBarcha xodimlarning o'rtacha oyligi: %.2f\n", ortacha_oylik);

    return 0;
}