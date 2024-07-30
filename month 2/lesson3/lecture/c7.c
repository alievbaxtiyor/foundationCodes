#include <stdio.h>

int main () {
	int a;
	printf("Sonni kiriting:");
	scanf("%d", &a);
	if (a < 0) {
		printf("%d", a * (-1));
	} else {
		printf("%d", a);
	}
}
