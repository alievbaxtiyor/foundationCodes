#include <stdio.h>

int main() {
  char text[100]; 
  int digitCount = 0; 
  printf("Soz kiriting: ");
  scanf("%s", text); 

  for (int i = 0; text[i] != '\0'; i++) {
    if (text[i] >= '0' && text[i] <= '9') {
      digitCount++;
    }
  }

  printf("Probellar soni: %d\n", digitCount);

  return 0;
}