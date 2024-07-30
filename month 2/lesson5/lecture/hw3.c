#include <stdio.h>

int main () {
	int a, b;
	printf("Sonlarni kiriting:\n ");
	scanf("%d%d", &a, &b);

	if (b > a) {
		while (a <= b) {
			printf("%d\n", a);
			a++;
		}
	}
	return 0;
}
