#include <stdio.h>

int main () {
	int n, k, start = 0;
	printf("Sonni kiriting: ");
	scanf("%d", &n);
	k = n;
	do {
		if(n % 2 == 0) {
			printf("%d\n", n);
		}
		n--;
	} while (n > start);
	do {
		if(start % 2 != 0) {
			printf("%d\n", start);
		}
		start++;
	} while (start < k);
}
