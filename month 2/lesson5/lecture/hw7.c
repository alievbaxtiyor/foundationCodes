#include <stdio.h>

int main () {
	int n, start = 1, sum = 1;
	printf("Sonni kiriting: ");
	scanf("%d", &n);

	while (start <= n) {
		sum = sum * start;
		start++;
	}
	printf("%d", sum);
	return 0;
}
