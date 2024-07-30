#include <stdio.h>

int main() {
  char seriya[100];
  int harf_soni = 0, raqam_soni = 0;

  printf("Char seriyani kiriting: ");
  scanf("%s", seriya);

  for (int i = 0; seriya[i] != '\0'; i++) {
    if ((seriya[i] >= 'a' && seriya[i] <= 'z') ||
        (seriya[i] >= 'A' && seriya[i] <= 'Z')) {
      harf_soni++;
    } else if (seriya[i] >= '0' && seriya[i] <= '9') {
      raqam_soni++;
    }
  }

  printf("Harflar soni: %d\n", harf_soni);
  printf("Raqamlar soni: %d\n", raqam_soni);

  return 0;
}