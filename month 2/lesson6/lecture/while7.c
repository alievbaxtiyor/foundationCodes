#include <stdio.h>

int main () {
	float n, start = -1.1;
	scanf("%f", &n);

	do {
		printf("%.1f\n", start);
		start +=0.1;
	} while (start <= n);
	return 0;
}
