#include <stdio.h>

int main() {
  char text[]="SalomFoundation29";
  int count = 0;

  for (int i = 0; text[i] != '\0'; i++) {
    if (text[i] >= '0' && text[i] <= '9') {
      count++;
    }
  }

  printf("%dta raqam bor\n", count);

  return 0;
}