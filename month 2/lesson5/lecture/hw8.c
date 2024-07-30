#include <stdio.h>

int main () {
	int n;
	printf("Sonni kiriting: ");
	scanf("%d", &n);

	while (2) {
		n % 1 == 0 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0;
		printf("Tub son\n");
		break;
	}
	while (0) {
		n % 2 == 0;
		printf("Murakkab son\n");
		break;
	}
	return 0;
}
