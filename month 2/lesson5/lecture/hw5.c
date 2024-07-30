#include <stdio.h>

int main () {
	int a, b;
	printf("Sonlarni kiriting: \n");
	scanf("%d%d", &a, &b);

	while (a <= b) {
		printf("\n%d", b);
		b--;
	}
	return 0;
}
