#include <stdio.h>

int main () {
	int n, start = 1;
	printf("N sonni kiriting: ");
	scanf("%d", &n);

	while (start <= n) {
		if (start % 2 != 0) {
			printf("%d\n", start);
		}
		start++;
	}
	return 0;
}
