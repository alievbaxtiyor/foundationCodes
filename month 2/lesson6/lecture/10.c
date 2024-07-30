#include <stdio.h>

int main () {
	int n, sum = 0, a;
	scanf("%d", &n);

	do {
		a = n % 10;
		n = n / 10;
		sum = sum + a;
	} while (n >= 1);
	printf("%d", sum);
	return 0;
}
