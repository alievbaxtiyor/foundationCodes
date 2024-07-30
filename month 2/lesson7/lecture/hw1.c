#include <stdio.h>

int main () {
	int sum = 0, n;
	scanf("%d", &n);

	for (int i = 0; i <= n; i++) {
		printf("%d ", i);
		sum = sum + i;
	}
	printf("\nSUM=%d", sum);
	return 0;
}
