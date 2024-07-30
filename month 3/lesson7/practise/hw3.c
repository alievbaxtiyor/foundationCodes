#include <stdio.h>

typedef struct Talaba {
    char ism[51];
    int baholar[3]; 
    float ortacha_baho;
} Talaba;

int main() {
    int n;  

    printf("Talabalar sonini kiriting: ");
    scanf("%d", &n);

    Talaba talabalar[n];  

    for (int i = 0; i < n; i++) {
        printf("%d-talabaning ismini kiriting: ", i + 1);
        scanf("%s", talabalar[i].ism);

        for (int j = 0; j < 3; j++) {
            printf("%d-fanning bahosini kiriting: ", j + 1);
            scanf("%d", &talabalar[i].baholar[j]);
        }
    }

    
    for (int i = 0; i < n; i++) {
        float sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += talabalar[i].baholar[j];
        }
        talabalar[i].ortacha_baho = sum / 3;
    }

    
    printf("\nHar bir talabaning ma'lumotlari:\n");
    for (int i = 0; i < n; i++) {
        printf("%d-talaba:\n", i + 1);
        printf("Ismi: %s\n", talabalar[i].ism);
        for (int j = 0; j < 3; j++) {
            printf("%d-fanning bahosi: %d\n", j + 1, talabalar[i].baholar[j]);
        }
        printf("O'rtacha baho: %.2f\n", talabalar[i].ortacha_baho);
    }

    return 0;
}