#include <stdio.h>

int main () {
	int a;
	printf("Sonnni kiriting:");
	scanf("%d", &a);
	if (a % 4 == 0 && a % 6 == 0) {
		printf("True");
	} else {
		printf ("False");
	}
}
