#include <stdio.h>

int main () {
	int n, sum = 0;
	scanf("%d", &n);

	do {
		sum = sum + n;
		n++;
	} while (sum <= 100);
	printf("%d", n);
	return 0;
}
