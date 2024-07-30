#include <stdio.h>

int main () {
	int n, start;
	printf("Sonni kiriting: ");
	scanf("%d", &n);

		if (n > 3333) {
			do {
				printf("%d\n", start);
				start++;
			} while (start <= 3333);
		} else {
			do {
				printf("%d\n", start);
				start++;
			} while (start <= n);
		}
	return 0;
}
