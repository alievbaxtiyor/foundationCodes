#include <stdio.h>
#include <math.h>

int main () {
	int n, n3;
	printf("Son kiriting: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < 2; j++) {
			n3 = pow(i, 3);
			printf("%d ning kubi = %d", i, n3);
		}
		printf("\n");
	}
	return 0;
}
