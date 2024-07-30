#include <stdio.h>

int main() {
  char seriya[100];
  int i, son = 0;

  printf("Char seriyani kiriting: ");
  scanf("%s", seriya);

  for (i = 0; seriya[i] != '\0'; i++) {
    if (seriya[i] >= 'A' && seriya[i] <= 'Z') {
      son++;
    }
  }

  printf("Katta harflar soni: %d\n", son);

  return 0;
}