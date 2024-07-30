#include <stdio.h>

int main () {
	int n, start = 1;
	scanf("%d", &n);

	do {
		if (n % start == 0) {
			printf("Bo'luvchisi=%d\n", start);
		}
		start++;
	} while (start <= n);
	return 0;
}
