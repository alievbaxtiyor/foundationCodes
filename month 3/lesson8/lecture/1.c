#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, *array;

  printf("Massivning o'lchamini kiriting: ");
  scanf("%d", &n);

  array = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    array[i] = i;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  free(array);

  return 0;
}
