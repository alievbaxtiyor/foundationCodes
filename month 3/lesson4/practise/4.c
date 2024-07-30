#include <stdio.h>

int main() {
  char seriyasi[] = "SalomFoundation29";
  int unli_soni = 0;

  for (int i = 0; seriyasi[i] != '\0'; i++) {
    if (seriyasi[i] == 'a' || seriyasi[i] == 'e' || seriyasi[i] == 'i' || seriyasi[i] == 'o' || seriyasi[i] == 'u' || seriyasi[i] == 'A' || seriyasi[i] == 'E' || seriyasi[i] == 'I' || seriyasi[i] == 'O' || seriyasi[i] == 'U') {
      unli_soni++;
    }
  }

  printf("unda %dta unli harf bor\n", unli_soni);

  return 0;
}