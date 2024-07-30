#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, *array, min;

  printf("Massivning o'lchamini kiriting: ");
  scanf("%d", &n);

  array = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    printf("Massivning %d-elementi: ", i + 1);
    scanf("%d", &array[i]);
  }

  min = array[0];
  for (int i = 1; i < n; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }

  printf("Massivdagi eng kichik element: %d\n", min);

  free(array);

  return 0;
}
