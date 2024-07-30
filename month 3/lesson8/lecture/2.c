#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, *array, sum = 0;

  printf("Massivning o'lchamini kiriting: ");
  scanf("%d", &n);

  array = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    printf("Massivning %d-elementi: ", i + 1);
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < n; i++) {
    sum += array[i];
  }

  printf("Massiv elementlarining yig'indisi: %d\n", sum);

  free(array);

  return 0;
}
