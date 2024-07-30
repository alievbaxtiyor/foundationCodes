#include <stdio.h>

int main () {
	int n, count;
	count = 0;
	printf("Son kiriting: ");
	scanf("%d", &n);

	while (n > 1) {
		n = n / 10;
		count = count + 1;
	}
	printf("%d", count);
}
