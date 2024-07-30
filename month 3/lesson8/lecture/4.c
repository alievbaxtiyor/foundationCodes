#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *array, int n) {
  for (int i = 0; i < n / 2; i++) {
    int temp = array[i];
    array[i] = array[n - i - 1];
    array[n - i - 1] = temp;
  }
}

int main() {
  int n, *array;

  printf("Massivning o'lchamini kiriting: ");
  scanf("%d", &n);

  array = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    printf("Massivning %d-elementi: ", i + 1);
    scanf("%d", &array[i]);
  }

  reverseArray(array, n);

  printf("Orqaga qaytarilgan massiv:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }

  free(array);

  return 0;
}
