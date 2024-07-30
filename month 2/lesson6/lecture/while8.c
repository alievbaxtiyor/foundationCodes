#include <stdio.h>

int main () {
	float n, sum, start = -204;
	printf("Sonni kiriting: ");
	scanf("%f", &n);

	do {
		sum = sum + start;
		start += 0.1;
	} while (start <= n);
	printf("%f", sum);
	return 0;
}
