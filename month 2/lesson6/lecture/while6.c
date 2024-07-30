#include <stdio.h>

int main () {
	int n, sum, k;
	printf("Son kiriting: ");
	scanf("%d", &n);
	k = n * (-1);
	do {
		sum = sum + n;
		n--;
	} while (n >= k);
	printf("%d", sum);
	return 0;
}
