#include <stdio.h>

int main() {
  char text[]="Foundation29";
  int count = 0;

  for (int i = 0; text[i] != '\0'; i++) {
    if (text[i] >= 'a' && text[i] <= 'z') {
      count++;
    } else if (text[i] >= 'A' && text[i] <= 'Z') {
      count++;
    }
  }

  printf("%dta harf bor\n", count);

  return 0;
}