#include <stdio.h>
#include <math.h>

int main () {
	int n, a, b;
	scanf("%d", &n);
	a = pow(n, 4) * (-1);
	b = pow(n, 4);

	do {
		printf("%d  ", a);
		a = a + n;
	} while (a <= b);
	return 0;
}
