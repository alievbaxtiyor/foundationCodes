#include <stdio.h>

int main () {
	int n;
	printf("Kvadratning tomonini kiriting: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1
			|| j == n || i > j && i <= n/2
			|| i + j < n + 1 && i > n/2) {
				printf("* ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
//Aliyev Baxtiyor
