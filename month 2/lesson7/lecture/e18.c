#include <stdio.h>

int main () {
	int n, sum = 1;
	printf("Son kiriting: ");
	scanf("%d", &n);

	for (int i = n; i >= 1; i--) {
		sum *= i;
	}
	printf("%d", sum);
	return 0;
}
