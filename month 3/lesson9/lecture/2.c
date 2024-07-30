#include <stdio.h>
#include <string.h>

typedef struct Talaba {
  char ism[20];
  char familiya[20];
  int yosh;
} Talaba;

int main() {
  Talaba talabalar[3];

  for (int i = 0; i < 3; i++) {
    printf("Talaba %d:\n", i + 1);
    printf("Ism: ");
    scanf("%s", talabalar[i].ism);
    printf("Familiya: ");
    scanf("%s", talabalar[i].familiya);
    printf("Yosh: ");
    scanf("%d", &talabalar[i].yosh);
  }

  FILE *fayl;
  fayl = fopen("talabalar.txt", "w");

  for (int i = 0; i < 3; i++) {
    fprintf(fayl, "Ism: %s, Familiya: %s, Yosh: %d\n", talabalar[i].ism, talabalar[i].familiya, talabalar[i].yosh);
  }

  fclose(fayl);

  return 0;
}