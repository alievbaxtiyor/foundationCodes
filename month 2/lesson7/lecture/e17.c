#include <stdio.h>

int main () {
	int n, sum = 0, b, last;
	printf("Son kiriting: ");
	scanf("%d", &n);
	for (int i = n; i >= 1; i = i / 10) {
		last = i % 10;
		sum = sum + last;
	}
	b = n % sum;
	printf("%d", b);
	return 0;
}
