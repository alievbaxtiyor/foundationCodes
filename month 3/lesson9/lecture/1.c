#include <stdio.h>

int main() {
  int raqam1, raqam2, raqam3, raqam4, raqam5, eng_katta;

  printf("Raqam 1: ");
  scanf("%d", &raqam1);

  printf("Raqam 2: ");
  scanf("%d", &raqam2);

  printf("Raqam 3: ");
  scanf("%d", &raqam3);

  printf("Raqam 4: ");
  scanf("%d", &raqam4);

  printf("Raqam 5: ");
  scanf("%d", &raqam5);

  eng_katta = raqam1;

  if (raqam2 > eng_katta) {
    eng_katta = raqam2;
  }

  if (raqam3 > eng_katta) {
    eng_katta = raqam3;
  }

  if (raqam4 > eng_katta) {
    eng_katta = raqam4;
  }

  if (raqam5 > eng_katta) {
    eng_katta = raqam5;
  }

  FILE *fayl;
  fayl = fopen("eng_katta.txt", "w");

  fprintf(fayl, "Eng katta raqam: %d", eng_katta);

  fclose(fayl);

  return 0;
}