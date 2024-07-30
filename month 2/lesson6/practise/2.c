#include <stdio.h>

int main () {
	int i = 1, number, max;

	do {
		printf("%d-sonni kiriting: ", i);
		scanf("%d", &number);
		max = number;
		if (number > max) {
			max = number;
		}
		i++;
	} while (i <= 5);
	printf("Eng katta son: %d", max);
	return 0;
}
