#include <stdio.h>

int main () {
	int n, start = 1;
	scanf("%d", &n);

	do {
		if (n % start != 0) {
			printf("Bo'linmaydi %d soniga\n", start);
		}
		start++;
	} while (start <= n);
	return 0;
}
