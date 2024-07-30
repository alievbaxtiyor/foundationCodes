#include <stdio.h>

int main () {
	int sum = 1, n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
		sum = sum * i;
	}
	printf("SUM=%d", sum);
	return 0;
}
