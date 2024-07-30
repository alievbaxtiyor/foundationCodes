#include <stdio.h>

int main () {
	int a, b;
	printf("Sonlarni kiriting:\n");
	scanf("%d%d", &a, &b);
	if (a % b == 0 || b % a == 0) {
		printf("Ha");
	} else {
		printf("Yo'q");
	}
}
