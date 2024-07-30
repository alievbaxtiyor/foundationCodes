#include <stdio.h>

int main () {
	int sum, n;
	printf("Son kiriting: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("%d  ", i);
		sum += i;
	}
	printf("\nSUM=%d", sum);
	return 0;
}
