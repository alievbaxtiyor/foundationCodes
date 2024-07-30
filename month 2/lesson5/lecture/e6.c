#include <stdio.h>

int main () {
	int start, n;
	printf("Jadval raqamini kiriting: ");
	scanf("%d", &n);

	while (start <= 10) {
		printf("%d * %d = %d\n", n, start, start*n);
		start++;
	}
	return 0;
}
