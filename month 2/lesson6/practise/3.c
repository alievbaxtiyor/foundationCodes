#include <stdio.h>

int main () {
	int min, number, i = 1;
	printf("1-sonni kiriting: ");
	scanf("%d", &number);
	min = number;
	do {
		printf("%d-sonni kiriting: ", i + 1);
		scanf("%d", &number);
		if (number < min) {
			min = number;
		}
		i++;
	} while (i <= 4);
	printf("Minimal son: %d", min);
	return 0;
}
