#include <stdio.h>
#include <stdio.h>

void func(int *ptrA, int *ptrB, int *ptrC) {
    int temp;

    temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = *ptrC;
    *ptrC = temp;

    printf("Yangi o'zlashtirilgan qiymatlar: \n");
    printf("A = %d\n", *ptrA);
    printf("B = %d\n", *ptrB);
    printf("C = %d\n", *ptrC);
}
int main () {
    system("cls");
    int a, b, c;

    printf("Qiymatlarni kiriting: \n");
    printf("A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);
    printf("C = ");
    scanf("%d", &c);

    func(&a, &b, &c);

    return 0;
}