#include <stdio.h>

int main () {
	int a, b;
	printf("Sonlarni kiriting:\n");
	scanf("%d%d", &a, &b);
	if (a>b) {
		printf("%d", a-b);
	} else {
		printf("%d", a+b);
	}
}

